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

// Function: sub_001041B0
// Address: 0x1041b0 - 0x104234
void sub_001041B0_0x1041b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001041B0_0x1041b0");
#endif

    switch (ctx->pc) {
        case 0x1041f0u: goto label_1041f0;
        case 0x104200u: goto label_104200;
        case 0x104208u: goto label_104208;
        default: break;
    }

    ctx->pc = 0x1041b0u;

    // 0x1041b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1041b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1041b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1041b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1041b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1041b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1041bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1041bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1041c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1041c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1041c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1041c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1041c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1041c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1041cc: 0x3c100100  lui         $s0, 0x100
    ctx->pc = 0x1041ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)256 << 16));
    // 0x1041d0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1041d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1041d4: 0xc6800b  movn        $s0, $a2, $a2
    ctx->pc = 0x1041d4u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
    // 0x1041d8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1041d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1041dc: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x1041dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1041e0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1041E0u;
    {
        const bool branch_taken_0x1041e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1041E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041E0u;
        // 0x1041e4: 0x3c130066  lui         $s3, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1041e0) {
            ctx->pc = 0x104218u;
            goto label_104218;
        }
    }
    ctx->pc = 0x1041E8u;
    // 0x1041e8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1041e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1041ec: 0x0  nop
    ctx->pc = 0x1041ecu;
    // NOP
label_1041f0:
    // 0x1041f0: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1041F0u;
    {
        const bool branch_taken_0x1041f0 = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x1041f0) {
            ctx->pc = 0x104208u;
            goto label_104208;
        }
    }
    ctx->pc = 0x1041F8u;
    // 0x1041f8: 0xc044332  jal         func_110CC8
    ctx->pc = 0x1041F8u;
    SET_GPR_U32(ctx, 31, 0x104200u);
    ctx->pc = 0x1041FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1041F8u;
    // 0x1041fc: 0x26641da8  addiu       $a0, $s3, 0x1DA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 7592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x1041F8u, 0x104200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104200u;
label_104200:
    // 0x104200: 0xc041236  jal         func_1048D8
    ctx->pc = 0x104200u;
    SET_GPR_U32(ctx, 31, 0x104208u);
    ctx->pc = 0x104204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104200u;
    // 0x104204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048D8u, 0x104200u, 0x104208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104208u;
label_104208:
    // 0x104208: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x104208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10420c: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x10420cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x104210: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x104210u;
    {
        const bool branch_taken_0x104210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104210u;
        // 0x104214: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104210) {
            ctx->pc = 0x1041F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1041f0;
        }
    }
    ctx->pc = 0x104218u;
label_104218:
    // 0x104218: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x104218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10421c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10421cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104220: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x104220u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104224: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x104224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104228: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10422c: 0x3e00008  jr          $ra
    ctx->pc = 0x10422Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10422Cu;
        // 0x104230: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10422Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104234u;
}
