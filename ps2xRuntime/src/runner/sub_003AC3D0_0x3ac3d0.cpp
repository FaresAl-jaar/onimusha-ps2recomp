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

// Function: sub_003AC3D0
// Address: 0x3ac3d0 - 0x3ac490
void sub_003AC3D0_0x3ac3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC3D0_0x3ac3d0");
#endif

    switch (ctx->pc) {
        case 0x3ac3f8u: goto label_3ac3f8;
        case 0x3ac468u: goto label_3ac468;
        default: break;
    }

    ctx->pc = 0x3ac3d0u;

    // 0x3ac3d0: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x3ac3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x3ac3d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ac3d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac3d8: 0x23882  srl         $a3, $v0, 2
    ctx->pc = 0x3ac3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x3ac3dc: 0x7082b  sltu        $at, $zero, $a3
    ctx->pc = 0x3ac3dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3ac3e0: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x3AC3E0u;
    {
        const bool branch_taken_0x3ac3e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC3E0u;
        // 0x3ac3e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac3e0) {
            ctx->pc = 0x3AC488u;
            goto label_3ac488;
        }
    }
    ctx->pc = 0x3AC3E8u;
    // 0x3ac3e8: 0x2ce10009  sltiu       $at, $a3, 0x9
    ctx->pc = 0x3ac3e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x3ac3ec: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x3AC3ECu;
    {
        const bool branch_taken_0x3ac3ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC3ECu;
        // 0x3ac3f0: 0x24e8fff8  addiu       $t0, $a3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac3ec) {
            ctx->pc = 0x3AC458u;
            goto label_3ac458;
        }
    }
    ctx->pc = 0x3AC3F4u;
    // 0x3ac3f4: 0x0  nop
    ctx->pc = 0x3ac3f4u;
    // NOP
label_3ac3f8:
    // 0x3ac3f8: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x3ac3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ac3fc: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x3ac3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ac400: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x3ac400u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x3ac404: 0x128182b  sltu        $v1, $t1, $t0
    ctx->pc = 0x3ac404u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3ac408: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x3ac408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x3ac40c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3ac40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3ac410: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x3ac410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x3ac414: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x3ac414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ac418: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x3ac418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ac41c: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x3ac41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x3ac420: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3ac420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3ac424: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x3ac424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x3ac428: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x3ac428u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ac42c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x3ac42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ac430: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x3ac430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x3ac434: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3ac434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3ac438: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x3ac438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x3ac43c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x3ac43cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ac440: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x3ac440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ac444: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x3ac444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x3ac448: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x3ac448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x3ac44c: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3AC44Cu;
    {
        const bool branch_taken_0x3ac44c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC44Cu;
        // 0x3ac450: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac44c) {
            ctx->pc = 0x3AC3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac3f8;
        }
    }
    ctx->pc = 0x3AC454u;
    // 0x3ac454: 0x0  nop
    ctx->pc = 0x3ac454u;
    // NOP
label_3ac458:
    // 0x3ac458: 0x127082b  sltu        $at, $t1, $a3
    ctx->pc = 0x3ac458u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3ac45c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x3AC45Cu;
    {
        const bool branch_taken_0x3ac45c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac45c) {
            ctx->pc = 0x3AC488u;
            goto label_3ac488;
        }
    }
    ctx->pc = 0x3AC464u;
    // 0x3ac464: 0x0  nop
    ctx->pc = 0x3ac464u;
    // NOP
label_3ac468:
    // 0x3ac468: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3ac468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ac46c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3ac46cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3ac470: 0x127182b  sltu        $v1, $t1, $a3
    ctx->pc = 0x3ac470u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3ac474: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x3ac474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x3ac478: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3ac478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3ac47c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3AC47Cu;
    {
        const bool branch_taken_0x3ac47c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ac47c) {
            ctx->pc = 0x3AC468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac468;
        }
    }
    ctx->pc = 0x3AC484u;
    // 0x3ac484: 0x0  nop
    ctx->pc = 0x3ac484u;
    // NOP
label_3ac488:
    // 0x3ac488: 0x3e00008  jr          $ra
    ctx->pc = 0x3AC488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AC490u;
}
