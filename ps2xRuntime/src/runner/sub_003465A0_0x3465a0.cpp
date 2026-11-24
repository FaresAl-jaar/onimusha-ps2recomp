#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003465A0
// Address: 0x3465a0 - 0x34664c
void sub_003465A0_0x3465a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003465A0_0x3465a0");
#endif

    switch (ctx->pc) {
        case 0x3465d0u: goto label_3465d0;
        case 0x3465e4u: goto label_3465e4;
        case 0x346608u: goto label_346608;
        case 0x34661cu: goto label_34661c;
        default: break;
    }

    ctx->pc = 0x3465a0u;

    // 0x3465a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3465a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3465a4: 0x2403d8aa  addiu       $v1, $zero, -0x2756
    ctx->pc = 0x3465a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957226));
    // 0x3465a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3465a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3465ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3465acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3465b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3465b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3465b4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3465b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3465b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3465b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3465bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3465bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3465c0: 0x1663000f  bne         $s3, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3465C0u;
    {
        const bool branch_taken_0x3465c0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x3465C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3465C0u;
        // 0x3465c4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3465c0) {
            ctx->pc = 0x346600u;
            goto label_346600;
        }
    }
    ctx->pc = 0x3465C8u;
    // 0x3465c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3465c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3465cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3465ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3465d0:
    // 0x3465d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3465d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3465d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3465D4u;
    {
        const bool branch_taken_0x3465d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3465D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3465D4u;
        // 0x3465d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3465d4) {
            ctx->pc = 0x3465E8u;
            goto label_3465e8;
        }
    }
    ctx->pc = 0x3465DCu;
    // 0x3465dc: 0xc0d1894  jal         func_346250
    ctx->pc = 0x3465DCu;
    SET_GPR_U32(ctx, 31, 0x3465E4u);
    ctx->pc = 0x3465E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3465DCu;
    // 0x3465e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346250u, 0x3465DCu, 0x3465E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3465E4u;
label_3465e4:
    // 0x3465e4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3465e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3465e8:
    // 0x3465e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3465e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3465ec: 0x2a430020  slti        $v1, $s2, 0x20
    ctx->pc = 0x3465ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3465f0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3465F0u;
    {
        const bool branch_taken_0x3465f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3465F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3465F0u;
        // 0x3465f4: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3465f0) {
            ctx->pc = 0x3465D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3465d0;
        }
    }
    ctx->pc = 0x3465F8u;
    // 0x3465f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3465F8u;
    {
        const bool branch_taken_0x3465f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3465f8) {
            ctx->pc = 0x346630u;
            goto label_346630;
        }
    }
    ctx->pc = 0x346600u;
label_346600:
    // 0x346600: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x346600u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346604: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x346604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346608:
    // 0x346608: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x346608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34660c: 0x16630004  bne         $s3, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34660Cu;
    {
        const bool branch_taken_0x34660c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x346610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34660Cu;
        // 0x346610: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34660c) {
            ctx->pc = 0x346620u;
            goto label_346620;
        }
    }
    ctx->pc = 0x346614u;
    // 0x346614: 0xc0d1894  jal         func_346250
    ctx->pc = 0x346614u;
    SET_GPR_U32(ctx, 31, 0x34661Cu);
    ctx->pc = 0x346618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346614u;
    // 0x346618: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346250u, 0x346614u, 0x34661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34661Cu;
label_34661c:
    // 0x34661c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x34661cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_346620:
    // 0x346620: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x346620u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x346624: 0x2a230020  slti        $v1, $s1, 0x20
    ctx->pc = 0x346624u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x346628: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x346628u;
    {
        const bool branch_taken_0x346628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346628u;
        // 0x34662c: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346628) {
            ctx->pc = 0x346608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_346608;
        }
    }
    ctx->pc = 0x346630u;
label_346630:
    // 0x346630: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x346630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x346634: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x346634u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x346638: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x346638u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34663c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34663cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x346640: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x346640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346644: 0x3e00008  jr          $ra
    ctx->pc = 0x346644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346644u;
        // 0x346648: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34664Cu;
}
