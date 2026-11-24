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

// Function: sub_00205440
// Address: 0x205440 - 0x2054c8
void sub_00205440_0x205440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205440_0x205440");
#endif

    switch (ctx->pc) {
        case 0x20545cu: goto label_20545c;
        case 0x205480u: goto label_205480;
        default: break;
    }

    ctx->pc = 0x205440u;

    // 0x205440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x205440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x205444: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x205448: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x205448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20544c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20544cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x205450: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x205450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x205454: 0xc081c12  jal         func_207048
    ctx->pc = 0x205454u;
    SET_GPR_U32(ctx, 31, 0x20545Cu);
    ctx->pc = 0x205458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205454u;
    // 0x205458: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207048u, 0x205454u, 0x20545Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20545Cu;
label_20545c:
    // 0x20545c: 0x8c452520  lw          $a1, 0x2520($v0)
    ctx->pc = 0x20545cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9504)));
    // 0x205460: 0x24422528  addiu       $v0, $v0, 0x2528
    ctx->pc = 0x205460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9512));
    // 0x205464: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x205464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x205468: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x205468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20546c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x20546cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x205470: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x205470u;
    {
        const bool branch_taken_0x205470 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x205474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205470u;
        // 0x205474: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205470) {
            ctx->pc = 0x2054A4u;
            goto label_2054a4;
        }
    }
    ctx->pc = 0x205478u;
    // 0x205478: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x205478u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20547c: 0x0  nop
    ctx->pc = 0x20547cu;
    // NOP
label_205480:
    // 0x205480: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x205480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x205484: 0x56220004  bnel        $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x205484u;
    {
        const bool branch_taken_0x205484 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x205484) {
            ctx->pc = 0x205488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205484u;
            // 0x205488: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205498u;
            goto label_205498;
        }
    }
    ctx->pc = 0x20548Cu;
    // 0x20548c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x20548cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x205490: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x205490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x205494: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x205494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_205498:
    // 0x205498: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x205498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x20549c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x20549Cu;
    {
        const bool branch_taken_0x20549c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2054A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20549Cu;
        // 0x2054a0: 0x246300f0  addiu       $v1, $v1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20549c) {
            ctx->pc = 0x205480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205480;
        }
    }
    ctx->pc = 0x2054A4u;
label_2054a4:
    // 0x2054a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2054a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2054a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2054a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2054ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2054acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2054b0: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x2054b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2054b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2054b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2054b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2054b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2054bc: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x2054bcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x2054c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2054C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2054C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054C0u;
        // 0x2054c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2054C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2054C8u;
}
