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

// Function: sub_00331060
// Address: 0x331060 - 0x331190
void sub_00331060_0x331060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331060_0x331060");
#endif

    switch (ctx->pc) {
        case 0x3310a0u: goto label_3310a0;
        case 0x3310d4u: goto label_3310d4;
        case 0x331138u: goto label_331138;
        case 0x331154u: goto label_331154;
        default: break;
    }

    ctx->pc = 0x331060u;

    // 0x331060: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x331060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x331064: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x331064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x331068: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x331068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x33106c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33106cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x331070: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x331070u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331074: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x331074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x331078: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x331078u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33107c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33107cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x331080: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x331080u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x331084: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x331084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x331088: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x331088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33108c: 0x94720002  lhu         $s2, 0x2($v1)
    ctx->pc = 0x33108cu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x331090: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x331090u;
    {
        const bool branch_taken_0x331090 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x331094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331090u;
        // 0x331094: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331090) {
            ctx->pc = 0x331170u;
            goto label_331170;
        }
    }
    ctx->pc = 0x331098u;
    // 0x331098: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x331098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33109c: 0x0  nop
    ctx->pc = 0x33109cu;
    // NOP
label_3310a0:
    // 0x3310a0: 0x92830002  lbu         $v1, 0x2($s4)
    ctx->pc = 0x3310a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x3310a4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3310a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3310a8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3310A8u;
    {
        const bool branch_taken_0x3310a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3310a8) {
            ctx->pc = 0x3310B8u;
            goto label_3310b8;
        }
    }
    ctx->pc = 0x3310B0u;
    // 0x3310b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3310B0u;
    {
        const bool branch_taken_0x3310b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3310b0) {
            ctx->pc = 0x3310E0u;
            goto label_3310e0;
        }
    }
    ctx->pc = 0x3310B8u;
label_3310b8:
    // 0x3310b8: 0x96051c72  lhu         $a1, 0x1C72($s0)
    ctx->pc = 0x3310b8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 7282)));
    // 0x3310bc: 0x96880000  lhu         $t0, 0x0($s4)
    ctx->pc = 0x3310bcu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3310c0: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3310c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x3310c4: 0x24841400  addiu       $a0, $a0, 0x1400
    ctx->pc = 0x3310c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5120));
    // 0x3310c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3310c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3310cc: 0xc0dc6b4  jal         func_371AD0
    ctx->pc = 0x3310CCu;
    SET_GPR_U32(ctx, 31, 0x3310D4u);
    ctx->pc = 0x3310D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3310CCu;
    // 0x3310d0: 0x3407fff5  ori         $a3, $zero, 0xFFF5 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    ctx->in_delay_slot = false;
    ctx->pc = 0x371AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371AD0u, 0x3310CCu, 0x3310D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3310D4u;
label_3310d4:
    // 0x3310d4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3310D4u;
    {
        const bool branch_taken_0x3310d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3310d4) {
            ctx->pc = 0x331158u;
            goto label_331158;
        }
    }
    ctx->pc = 0x3310DCu;
    // 0x3310dc: 0x0  nop
    ctx->pc = 0x3310dcu;
    // NOP
label_3310e0:
    // 0x3310e0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3310e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3310e4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3310e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3310e8: 0x96051c72  lhu         $a1, 0x1C72($s0)
    ctx->pc = 0x3310e8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 7282)));
    // 0x3310ec: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x3310ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x3310f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3310f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3310f4: 0x24426940  addiu       $v0, $v0, 0x6940
    ctx->pc = 0x3310f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26944));
    // 0x3310f8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x3310f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3310fc: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x3310fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x331100: 0x84830008  lh          $v1, 0x8($a0)
    ctx->pc = 0x331100u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x331104: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x331104u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x331108: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x331108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x33110c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33110Cu;
    {
        const bool branch_taken_0x33110c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x331110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33110Cu;
        // 0x331110: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33110c) {
            ctx->pc = 0x33111Cu;
            goto label_33111c;
        }
    }
    ctx->pc = 0x331114u;
    // 0x331114: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x331114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x331118: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x331118u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_33111c:
    // 0x33111c: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x33111cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x331120: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x331120u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331124: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x331124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x331128: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x331128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33112c: 0x3408fff5  ori         $t0, $zero, 0xFFF5
    ctx->pc = 0x33112cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x331130: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x331130u;
    SET_GPR_U32(ctx, 31, 0x331138u);
    ctx->pc = 0x331134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331130u;
    // 0x331134: 0x34498080  ori         $t1, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x331130u, 0x331138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331138u;
label_331138:
    // 0x331138: 0x96051c72  lhu         $a1, 0x1C72($s0)
    ctx->pc = 0x331138u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 7282)));
    // 0x33113c: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x33113cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x331140: 0x96880000  lhu         $t0, 0x0($s4)
    ctx->pc = 0x331140u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x331144: 0x24841400  addiu       $a0, $a0, 0x1400
    ctx->pc = 0x331144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5120));
    // 0x331148: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x331148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33114c: 0xc0dc6b4  jal         func_371AD0
    ctx->pc = 0x33114Cu;
    SET_GPR_U32(ctx, 31, 0x331154u);
    ctx->pc = 0x331150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33114Cu;
    // 0x331150: 0x3407fff5  ori         $a3, $zero, 0xFFF5 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    ctx->in_delay_slot = false;
    ctx->pc = 0x371AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371AD0u, 0x33114Cu, 0x331154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331154u;
label_331154:
    // 0x331154: 0x0  nop
    ctx->pc = 0x331154u;
    // NOP
label_331158:
    // 0x331158: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x331158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x33115c: 0x233182a  slt         $v1, $s1, $s3
    ctx->pc = 0x33115cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x331160: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x331160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x331164: 0x1460ffce  bnez        $v1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x331164u;
    {
        const bool branch_taken_0x331164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x331168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331164u;
        // 0x331168: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331164) {
            ctx->pc = 0x3310A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3310a0;
        }
    }
    ctx->pc = 0x33116Cu;
    // 0x33116c: 0x0  nop
    ctx->pc = 0x33116cu;
    // NOP
label_331170:
    // 0x331170: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x331170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x331174: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x331174u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x331178: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x331178u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33117c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33117cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x331180: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x331180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331184: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x331184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331188: 0x3e00008  jr          $ra
    ctx->pc = 0x331188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331188u;
        // 0x33118c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331190u;
}
