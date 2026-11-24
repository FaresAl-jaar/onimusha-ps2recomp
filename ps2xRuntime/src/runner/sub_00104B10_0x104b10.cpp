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

// Function: sub_00104B10
// Address: 0x104b10 - 0x104b80
void sub_00104B10_0x104b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104B10_0x104b10");
#endif

    switch (ctx->pc) {
        case 0x104b34u: goto label_104b34;
        default: break;
    }

    ctx->pc = 0x104b10u;

    // 0x104b10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x104b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x104b14: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x104b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x104b18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x104b18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104b1c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x104b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x104b20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104b24: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x104b24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104b28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x104b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x104b2c: 0xc041298  jal         func_104A60
    ctx->pc = 0x104B2Cu;
    SET_GPR_U32(ctx, 31, 0x104B34u);
    ctx->pc = 0x104B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104B2Cu;
    // 0x104b30: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x104B2Cu, 0x104B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104B34u;
label_104b34:
    // 0x104b34: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x104b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x104b38: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x104b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x104b3c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x104b3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x104b40: 0x3c049fff  lui         $a0, 0x9FFF
    ctx->pc = 0x104b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40959 << 16));
    // 0x104b44: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x104b44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
    // 0x104b48: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x104b48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x104b4c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x104b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x104b50: 0x2449024  and         $s2, $s2, $a0
    ctx->pc = 0x104b50u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x104b54: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x104b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x104b58: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x104b58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x104b5c: 0xacb20000  sw          $s2, 0x0($a1)
    ctx->pc = 0x104b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 18));
    // 0x104b60: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x104b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x104b64: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x104b64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x104b68: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x104b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104b6c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x104b6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104b70: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x104b70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104b74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104b74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104b78: 0x3e00008  jr          $ra
    ctx->pc = 0x104B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B78u;
        // 0x104b7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104B80u;
}
