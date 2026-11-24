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

// Function: sub_003DA0E0
// Address: 0x3da0e0 - 0x3da1a0
void sub_003DA0E0_0x3da0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA0E0_0x3da0e0");
#endif

    switch (ctx->pc) {
        case 0x3da134u: goto label_3da134;
        case 0x3da150u: goto label_3da150;
        case 0x3da170u: goto label_3da170;
        default: break;
    }

    ctx->pc = 0x3da0e0u;

    // 0x3da0e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3da0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3da0e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3da0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3da0e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3da0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3da0ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3da0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3da0f0: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x3da0f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3da0f4: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3DA0F4u;
    {
        const bool branch_taken_0x3da0f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DA0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA0F4u;
        // 0x3da0f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da0f4) {
            ctx->pc = 0x3DA148u;
            goto label_3da148;
        }
    }
    ctx->pc = 0x3DA0FCu;
    // 0x3da0fc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DA0FCu;
    {
        const bool branch_taken_0x3da0fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da0fc) {
            ctx->pc = 0x3DA110u;
            goto label_3da110;
        }
    }
    ctx->pc = 0x3DA104u;
    // 0x3da104: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3DA104u;
    {
        const bool branch_taken_0x3da104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da104) {
            ctx->pc = 0x3DA190u;
            goto label_3da190;
        }
    }
    ctx->pc = 0x3DA10Cu;
    // 0x3da10c: 0x0  nop
    ctx->pc = 0x3da10cu;
    // NOP
label_3da110:
    // 0x3da110: 0x92072be5  lbu         $a3, 0x2BE5($s0)
    ctx->pc = 0x3da110u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11237)));
    // 0x3da114: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3da114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3da118: 0x2405006b  addiu       $a1, $zero, 0x6B
    ctx->pc = 0x3da118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x3da11c: 0x34460040  ori         $a2, $v0, 0x40
    ctx->pc = 0x3da11cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3da120: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x3da120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x3da124: 0x30e20002  andi        $v0, $a3, 0x2
    ctx->pc = 0x3da124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
    // 0x3da128: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x3da128u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x3da12c: 0xc0f6c58  jal         func_3DB160
    ctx->pc = 0x3DA12Cu;
    SET_GPR_U32(ctx, 31, 0x3DA134u);
    ctx->pc = 0x3DA130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA12Cu;
    // 0x3da130: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB160u, 0x3DA12Cu, 0x3DA134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA134u;
label_3da134:
    // 0x3da134: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3da134u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3da138: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3da138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3da13c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3DA13Cu;
    {
        const bool branch_taken_0x3da13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA13Cu;
        // 0x3da140: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da13c) {
            ctx->pc = 0x3DA190u;
            goto label_3da190;
        }
    }
    ctx->pc = 0x3DA144u;
    // 0x3da144: 0x0  nop
    ctx->pc = 0x3da144u;
    // NOP
label_3da148:
    // 0x3da148: 0xc0f6c64  jal         func_3DB190
    ctx->pc = 0x3DA148u;
    SET_GPR_U32(ctx, 31, 0x3DA150u);
    ctx->pc = 0x3DB190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB190u, 0x3DA148u, 0x3DA150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA150u;
label_3da150:
    // 0x3da150: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DA150u;
    {
        const bool branch_taken_0x3da150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3da150) {
            ctx->pc = 0x3DA178u;
            goto label_3da178;
        }
    }
    ctx->pc = 0x3DA158u;
    // 0x3da158: 0x92032be5  lbu         $v1, 0x2BE5($s0)
    ctx->pc = 0x3da158u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11237)));
    // 0x3da15c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3da15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3da160: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3DA160u;
    {
        const bool branch_taken_0x3da160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA160u;
        // 0x3da164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da160) {
            ctx->pc = 0x3DA190u;
            goto label_3da190;
        }
    }
    ctx->pc = 0x3DA168u;
    // 0x3da168: 0xc0f6d00  jal         func_3DB400
    ctx->pc = 0x3DA168u;
    SET_GPR_U32(ctx, 31, 0x3DA170u);
    ctx->pc = 0x3DB400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB400u, 0x3DA168u, 0x3DA170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA170u;
label_3da170:
    // 0x3da170: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DA170u;
    {
        const bool branch_taken_0x3da170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da170) {
            ctx->pc = 0x3DA190u;
            goto label_3da190;
        }
    }
    ctx->pc = 0x3DA178u;
label_3da178:
    // 0x3da178: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3da178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3da17c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3da17cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3da180: 0xa2032be3  sb          $v1, 0x2BE3($s0)
    ctx->pc = 0x3da180u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 3));
    // 0x3da184: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3da184u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3da188: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3da188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3da18c: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3da18cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3da190:
    // 0x3da190: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3da190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3da194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3da194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3da198: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA198u;
        // 0x3da19c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA1A0u;
}
