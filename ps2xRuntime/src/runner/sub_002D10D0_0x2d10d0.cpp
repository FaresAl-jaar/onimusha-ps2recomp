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

// Function: sub_002D10D0
// Address: 0x2d10d0 - 0x2d11b0
void sub_002D10D0_0x2d10d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D10D0_0x2d10d0");
#endif

    ctx->pc = 0x2d10d0u;

    // 0x2d10d0: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x2d10d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d10d4: 0x30a21000  andi        $v0, $a1, 0x1000
    ctx->pc = 0x2d10d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4096);
    // 0x2d10d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D10D8u;
    {
        const bool branch_taken_0x2d10d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d10d8) {
            ctx->pc = 0x2D1100u;
            goto label_2d1100;
        }
    }
    ctx->pc = 0x2D10E0u;
    // 0x2d10e0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d10e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d10e4: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2d10e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2d10e8: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2d10e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2d10ec: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2d10ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2d10f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d10f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d10f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d10f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d10f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D10F8u;
    {
        const bool branch_taken_0x2d10f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D10FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D10F8u;
        // 0x2d10fc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d10f8) {
            ctx->pc = 0x2D1118u;
            goto label_2d1118;
        }
    }
    ctx->pc = 0x2D1100u;
label_2d1100:
    // 0x2d1100: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d1100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d1104: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2d1104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2d1108: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2d1108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2d110c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d110cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d1110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d1110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d1114: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d1114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d1118:
    // 0x2d1118: 0x30a30100  andi        $v1, $a1, 0x100
    ctx->pc = 0x2d1118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x2d111c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D111Cu;
    {
        const bool branch_taken_0x2d111c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d111c) {
            ctx->pc = 0x2D1170u;
            goto label_2d1170;
        }
    }
    ctx->pc = 0x2D1124u;
    // 0x2d1124: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D1124u;
    {
        const bool branch_taken_0x2d1124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1124) {
            ctx->pc = 0x2D1168u;
            goto label_2d1168;
        }
    }
    ctx->pc = 0x2D112Cu;
    // 0x2d112c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2d112cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1130: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2d1130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2d1134: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2d1134u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d1138: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1138u;
    {
        const bool branch_taken_0x2d1138 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1138u;
        // 0x2d113c: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1138) {
            ctx->pc = 0x2D1148u;
            goto label_2d1148;
        }
    }
    ctx->pc = 0x2D1140u;
    // 0x2d1140: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d1140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1144: 0x0  nop
    ctx->pc = 0x2d1144u;
    // NOP
label_2d1148:
    // 0x2d1148: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D1148u;
    {
        const bool branch_taken_0x2d1148 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1148) {
            ctx->pc = 0x2D1168u;
            goto label_2d1168;
        }
    }
    ctx->pc = 0x2D1150u;
    // 0x2d1150: 0x90830016  lbu         $v1, 0x16($a0)
    ctx->pc = 0x2d1150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x2d1154: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x2d1154u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2d1158: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1158u;
    {
        const bool branch_taken_0x2d1158 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d1158) {
            ctx->pc = 0x2D1168u;
            goto label_2d1168;
        }
    }
    ctx->pc = 0x2D1160u;
    // 0x2d1160: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2D1160u;
    {
        const bool branch_taken_0x2d1160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1160) {
            ctx->pc = 0x2D11A8u;
            goto label_2d11a8;
        }
    }
    ctx->pc = 0x2D1168u;
label_2d1168:
    // 0x2d1168: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2D1168u;
    {
        const bool branch_taken_0x2d1168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1168u;
        // 0x2d116c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1168) {
            ctx->pc = 0x2D11A8u;
            goto label_2d11a8;
        }
    }
    ctx->pc = 0x2D1170u;
label_2d1170:
    // 0x2d1170: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D1170u;
    {
        const bool branch_taken_0x2d1170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1170u;
        // 0x2d1174: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1170) {
            ctx->pc = 0x2D11A0u;
            goto label_2d11a0;
        }
    }
    ctx->pc = 0x2D1178u;
    // 0x2d1178: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2d1178u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d117c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2d117cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2d1180: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2d1180u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d1184: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D1184u;
    {
        const bool branch_taken_0x2d1184 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1184u;
        // 0x2d1188: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1184) {
            ctx->pc = 0x2D1190u;
            goto label_2d1190;
        }
    }
    ctx->pc = 0x2D118Cu;
    // 0x2d118c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d118cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d1190:
    // 0x2d1190: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1190u;
    {
        const bool branch_taken_0x2d1190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1190) {
            ctx->pc = 0x2D11A0u;
            goto label_2d11a0;
        }
    }
    ctx->pc = 0x2D1198u;
    // 0x2d1198: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x2d1198u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2d119c: 0x0  nop
    ctx->pc = 0x2d119cu;
    // NOP
label_2d11a0:
    // 0x2d11a0: 0x5100a  movz        $v0, $zero, $a1
    ctx->pc = 0x2d11a0u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2d11a4: 0x0  nop
    ctx->pc = 0x2d11a4u;
    // NOP
label_2d11a8:
    // 0x2d11a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D11A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D11A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D11B0u;
}
