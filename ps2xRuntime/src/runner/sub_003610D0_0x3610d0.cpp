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

// Function: sub_003610D0
// Address: 0x3610d0 - 0x3611e4
void sub_003610D0_0x3610d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003610D0_0x3610d0");
#endif

    switch (ctx->pc) {
        case 0x3610e8u: goto label_3610e8;
        case 0x3610fcu: goto label_3610fc;
        case 0x361108u: goto label_361108;
        case 0x361114u: goto label_361114;
        case 0x361120u: goto label_361120;
        case 0x361154u: goto label_361154;
        case 0x361190u: goto label_361190;
        default: break;
    }

    ctx->pc = 0x3610d0u;

    // 0x3610d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3610d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3610d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3610d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3610d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3610d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3610dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3610dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3610e0: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x3610E0u;
    SET_GPR_U32(ctx, 31, 0x3610E8u);
    ctx->pc = 0x3610E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3610E0u;
    // 0x3610e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x3610E0u, 0x3610E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3610E8u;
label_3610e8:
    // 0x3610e8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3610e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3610ec: 0xa2022b24  sb          $v0, 0x2B24($s0)
    ctx->pc = 0x3610ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11044), (uint8_t)GPR_U32(ctx, 2));
    // 0x3610f0: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x3610f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3610f4: 0xc0a8524  jal         func_2A1490
    ctx->pc = 0x3610F4u;
    SET_GPR_U32(ctx, 31, 0x3610FCu);
    ctx->pc = 0x3610F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3610F4u;
    // 0x3610f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1490u, 0x3610F4u, 0x3610FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3610FCu;
label_3610fc:
    // 0x3610fc: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x3610fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x361100: 0xc0a8524  jal         func_2A1490
    ctx->pc = 0x361100u;
    SET_GPR_U32(ctx, 31, 0x361108u);
    ctx->pc = 0x361104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361100u;
    // 0x361104: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1490u, 0x361100u, 0x361108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361108u;
label_361108:
    // 0x361108: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x361108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x36110c: 0xc0a8524  jal         func_2A1490
    ctx->pc = 0x36110Cu;
    SET_GPR_U32(ctx, 31, 0x361114u);
    ctx->pc = 0x361110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36110Cu;
    // 0x361110: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1490u, 0x36110Cu, 0x361114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361114u;
label_361114:
    // 0x361114: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x361114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x361118: 0xc0a8508  jal         func_2A1420
    ctx->pc = 0x361118u;
    SET_GPR_U32(ctx, 31, 0x361120u);
    ctx->pc = 0x36111Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361118u;
    // 0x36111c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1420u, 0x361118u, 0x361120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361120u;
label_361120:
    // 0x361120: 0x920207d8  lbu         $v0, 0x7D8($s0)
    ctx->pc = 0x361120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2008)));
    // 0x361124: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x361124u;
    {
        const bool branch_taken_0x361124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x361128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361124u;
        // 0x361128: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361124) {
            ctx->pc = 0x361130u;
            goto label_361130;
        }
    }
    ctx->pc = 0x36112Cu;
    // 0x36112c: 0xa20207d8  sb          $v0, 0x7D8($s0)
    ctx->pc = 0x36112cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2008), (uint8_t)GPR_U32(ctx, 2));
label_361130:
    // 0x361130: 0x920207d8  lbu         $v0, 0x7D8($s0)
    ctx->pc = 0x361130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2008)));
    // 0x361134: 0x28410064  slti        $at, $v0, 0x64
    ctx->pc = 0x361134u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x361138: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x361138u;
    {
        const bool branch_taken_0x361138 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x36113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361138u;
        // 0x36113c: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361138) {
            ctx->pc = 0x361148u;
            goto label_361148;
        }
    }
    ctx->pc = 0x361140u;
    // 0x361140: 0xa20207d8  sb          $v0, 0x7D8($s0)
    ctx->pc = 0x361140u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2008), (uint8_t)GPR_U32(ctx, 2));
    // 0x361144: 0x0  nop
    ctx->pc = 0x361144u;
    // NOP
label_361148:
    // 0x361148: 0x921107d8  lbu         $s1, 0x7D8($s0)
    ctx->pc = 0x361148u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2008)));
    // 0x36114c: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x36114Cu;
    SET_GPR_U32(ctx, 31, 0x361154u);
    ctx->pc = 0x361150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36114Cu;
    // 0x361150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x36114Cu, 0x361154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361154u;
label_361154:
    // 0x361154: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x361154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x361158: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x361158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36115c: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x36115cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x361160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x361160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361164: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x361164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x361168: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x361168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x36116c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x36116cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x361170: 0x0  nop
    ctx->pc = 0x361170u;
    // NOP
    // 0x361174: 0x0  nop
    ctx->pc = 0x361174u;
    // NOP
    // 0x361178: 0x1010  mfhi        $v0
    ctx->pc = 0x361178u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x36117c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x36117cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x361180: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x361180u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x361184: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x361184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361188: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x361188u;
    SET_GPR_U32(ctx, 31, 0x361190u);
    ctx->pc = 0x36118Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361188u;
    // 0x36118c: 0xa6022b20  sh          $v0, 0x2B20($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 11040), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x361188u, 0x361190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361190u;
label_361190:
    // 0x361190: 0x96052b20  lhu         $a1, 0x2B20($s0)
    ctx->pc = 0x361190u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x361194: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x361194u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x361198: 0x3c033fcc  lui         $v1, 0x3FCC
    ctx->pc = 0x361198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16332 << 16));
    // 0x36119c: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x36119cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3611a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3611a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3611a4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3611a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3611a8: 0xe52823  subu        $a1, $a3, $a1
    ctx->pc = 0x3611a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3611ac: 0xa6052b22  sh          $a1, 0x2B22($s0)
    ctx->pc = 0x3611acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 5));
    // 0x3611b0: 0x8e0529c0  lw          $a1, 0x29C0($s0)
    ctx->pc = 0x3611b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3611b4: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x3611b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x3611b8: 0x8e0529c0  lw          $a1, 0x29C0($s0)
    ctx->pc = 0x3611b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3611bc: 0xa4a60002  sh          $a2, 0x2($a1)
    ctx->pc = 0x3611bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x3611c0: 0xa20029d1  sb          $zero, 0x29D1($s0)
    ctx->pc = 0x3611c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10705), (uint8_t)GPR_U32(ctx, 0));
    // 0x3611c4: 0xa2042b26  sb          $a0, 0x2B26($s0)
    ctx->pc = 0x3611c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11046), (uint8_t)GPR_U32(ctx, 4));
    // 0x3611c8: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x3611c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x3611cc: 0xae0306c0  sw          $v1, 0x6C0($s0)
    ctx->pc = 0x3611ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 3));
    // 0x3611d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3611d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3611d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3611d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3611d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3611d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3611dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3611DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3611E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3611DCu;
        // 0x3611e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3611DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3611E4u;
}
