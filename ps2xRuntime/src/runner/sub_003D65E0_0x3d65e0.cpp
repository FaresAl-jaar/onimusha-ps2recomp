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

// Function: sub_003D65E0
// Address: 0x3d65e0 - 0x3d6634
void sub_003D65E0_0x3d65e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D65E0_0x3d65e0");
#endif

    switch (ctx->pc) {
        case 0x3d6618u: goto label_3d6618;
        default: break;
    }

    ctx->pc = 0x3d65e0u;

    // 0x3d65e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d65e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d65e4: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D65E4u;
    {
        const bool branch_taken_0x3d65e4 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x3D65E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D65E4u;
        // 0x3d65e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d65e4) {
            ctx->pc = 0x3D65F8u;
            goto label_3d65f8;
        }
    }
    ctx->pc = 0x3D65ECu;
    // 0x3d65ec: 0x28a30005  slti        $v1, $a1, 0x5
    ctx->pc = 0x3d65ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3d65f0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D65F0u;
    {
        const bool branch_taken_0x3d65f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d65f0) {
            ctx->pc = 0x3D6600u;
            goto label_3d6600;
        }
    }
    ctx->pc = 0x3D65F8u;
label_3d65f8:
    // 0x3d65f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3D65F8u;
    {
        const bool branch_taken_0x3d65f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d65f8) {
            ctx->pc = 0x3D6628u;
            goto label_3d6628;
        }
    }
    ctx->pc = 0x3D6600u;
label_3d6600:
    // 0x3d6600: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x3d6600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3d6604: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3d6604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3d6608: 0x8c452b98  lw          $a1, 0x2B98($v0)
    ctx->pc = 0x3d6608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11160)));
    // 0x3d660c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3d660cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3d6610: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3D6610u;
    SET_GPR_U32(ctx, 31, 0x3D6618u);
    ctx->pc = 0x3D6614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6610u;
    // 0x3d6614: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3D6610u, 0x3D6618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6618u;
label_3d6618:
    // 0x3d6618: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D6618u;
    {
        const bool branch_taken_0x3d6618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6618u;
        // 0x3d661c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6618) {
            ctx->pc = 0x3D6628u;
            goto label_3d6628;
        }
    }
    ctx->pc = 0x3D6620u;
    // 0x3d6620: 0xa0432c78  sb          $v1, 0x2C78($v0)
    ctx->pc = 0x3d6620u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11384), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d6624: 0x0  nop
    ctx->pc = 0x3d6624u;
    // NOP
label_3d6628:
    // 0x3d6628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d6628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d662c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D662Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D6630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D662Cu;
        // 0x3d6630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D662Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D6634u;
}
