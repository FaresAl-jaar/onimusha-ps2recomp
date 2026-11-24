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

// Function: sub_00104C18
// Address: 0x104c18 - 0x104c88
void sub_00104C18_0x104c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104C18_0x104c18");
#endif

    switch (ctx->pc) {
        case 0x104c3cu: goto label_104c3c;
        default: break;
    }

    ctx->pc = 0x104c18u;

    // 0x104c18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x104c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x104c1c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x104c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x104c20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x104c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c24: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x104c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x104c28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104c2c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x104c2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c30: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x104c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x104c34: 0xc041298  jal         func_104A60
    ctx->pc = 0x104C34u;
    SET_GPR_U32(ctx, 31, 0x104C3Cu);
    ctx->pc = 0x104C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104C34u;
    // 0x104c38: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x104C34u, 0x104C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104C3Cu;
label_104c3c:
    // 0x104c3c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x104c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x104c40: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x104c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x104c44: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x104c44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x104c48: 0x3c049fff  lui         $a0, 0x9FFF
    ctx->pc = 0x104c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40959 << 16));
    // 0x104c4c: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x104c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
    // 0x104c50: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x104c50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x104c54: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x104c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x104c58: 0x2449024  and         $s2, $s2, $a0
    ctx->pc = 0x104c58u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x104c5c: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x104c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x104c60: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x104c60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x104c64: 0xacb20000  sw          $s2, 0x0($a1)
    ctx->pc = 0x104c64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 18));
    // 0x104c68: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x104c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x104c6c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x104c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x104c70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x104c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104c74: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x104c74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104c78: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x104c78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104c7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104c7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104c80: 0x3e00008  jr          $ra
    ctx->pc = 0x104C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C80u;
        // 0x104c84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104C88u;
}
