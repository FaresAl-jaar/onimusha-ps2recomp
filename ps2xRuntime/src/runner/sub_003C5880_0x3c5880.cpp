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

// Function: sub_003C5880
// Address: 0x3c5880 - 0x3c5998
void sub_003C5880_0x3c5880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5880_0x3c5880");
#endif

    switch (ctx->pc) {
        case 0x3c58a0u: goto label_3c58a0;
        case 0x3c58f0u: goto label_3c58f0;
        case 0x3c5900u: goto label_3c5900;
        case 0x3c5910u: goto label_3c5910;
        case 0x3c5920u: goto label_3c5920;
        case 0x3c5930u: goto label_3c5930;
        case 0x3c5938u: goto label_3c5938;
        case 0x3c5954u: goto label_3c5954;
        default: break;
    }

    ctx->pc = 0x3c5880u;

    // 0x3c5880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c5880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c5884: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c5884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c5888: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c5888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c588c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c588cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5890: 0x8e050500  lw          $a1, 0x500($s0)
    ctx->pc = 0x3c5890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x3c5894: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3c5894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3c5898: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3C5898u;
    SET_GPR_U32(ctx, 31, 0x3C58A0u);
    ctx->pc = 0x3C589Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5898u;
    // 0x3c589c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3C5898u, 0x3C58A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C58A0u;
label_3c58a0:
    // 0x3c58a0: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3C58A0u;
    {
        const bool branch_taken_0x3c58a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c58a0) {
            ctx->pc = 0x3C5988u;
            goto label_3c5988;
        }
    }
    ctx->pc = 0x3C58A8u;
    // 0x3c58a8: 0x92030506  lbu         $v1, 0x506($s0)
    ctx->pc = 0x3c58a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1286)));
    // 0x3c58ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3c58acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3c58b0: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3C58B0u;
    {
        const bool branch_taken_0x3c58b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C58B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C58B0u;
        // 0x3c58b4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c58b0) {
            ctx->pc = 0x3C5928u;
            goto label_3c5928;
        }
    }
    ctx->pc = 0x3C58B8u;
    // 0x3c58b8: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3C58B8u;
    {
        const bool branch_taken_0x3c58b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c58b8) {
            ctx->pc = 0x3C5918u;
            goto label_3c5918;
        }
    }
    ctx->pc = 0x3C58C0u;
    // 0x3c58c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c58c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c58c4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3C58C4u;
    {
        const bool branch_taken_0x3c58c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C58C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C58C4u;
        // 0x3c58c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c58c4) {
            ctx->pc = 0x3C5908u;
            goto label_3c5908;
        }
    }
    ctx->pc = 0x3C58CCu;
    // 0x3c58cc: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3C58CCu;
    {
        const bool branch_taken_0x3c58cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c58cc) {
            ctx->pc = 0x3C58F8u;
            goto label_3c58f8;
        }
    }
    ctx->pc = 0x3C58D4u;
    // 0x3c58d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C58D4u;
    {
        const bool branch_taken_0x3c58d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c58d4) {
            ctx->pc = 0x3C58E8u;
            goto label_3c58e8;
        }
    }
    ctx->pc = 0x3C58DCu;
    // 0x3c58dc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3C58DCu;
    {
        const bool branch_taken_0x3c58dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c58dc) {
            ctx->pc = 0x3C5930u;
            goto label_3c5930;
        }
    }
    ctx->pc = 0x3C58E4u;
    // 0x3c58e4: 0x0  nop
    ctx->pc = 0x3c58e4u;
    // NOP
label_3c58e8:
    // 0x3c58e8: 0xc0f1684  jal         func_3C5A10
    ctx->pc = 0x3C58E8u;
    SET_GPR_U32(ctx, 31, 0x3C58F0u);
    ctx->pc = 0x3C58ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C58E8u;
    // 0x3c58ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5A10u, 0x3C58E8u, 0x3C58F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C58F0u;
label_3c58f0:
    // 0x3c58f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3C58F0u;
    {
        const bool branch_taken_0x3c58f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c58f0) {
            ctx->pc = 0x3C5930u;
            goto label_3c5930;
        }
    }
    ctx->pc = 0x3C58F8u;
label_3c58f8:
    // 0x3c58f8: 0xc0f16b8  jal         func_3C5AE0
    ctx->pc = 0x3C58F8u;
    SET_GPR_U32(ctx, 31, 0x3C5900u);
    ctx->pc = 0x3C58FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C58F8u;
    // 0x3c58fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5AE0u, 0x3C58F8u, 0x3C5900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5900u;
label_3c5900:
    // 0x3c5900: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3C5900u;
    {
        const bool branch_taken_0x3c5900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5900) {
            ctx->pc = 0x3C5930u;
            goto label_3c5930;
        }
    }
    ctx->pc = 0x3C5908u;
label_3c5908:
    // 0x3c5908: 0xc0f17a8  jal         func_3C5EA0
    ctx->pc = 0x3C5908u;
    SET_GPR_U32(ctx, 31, 0x3C5910u);
    ctx->pc = 0x3C590Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5908u;
    // 0x3c590c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5EA0u, 0x3C5908u, 0x3C5910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5910u;
label_3c5910:
    // 0x3c5910: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C5910u;
    {
        const bool branch_taken_0x3c5910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5910) {
            ctx->pc = 0x3C5930u;
            goto label_3c5930;
        }
    }
    ctx->pc = 0x3C5918u;
label_3c5918:
    // 0x3c5918: 0xc0f1814  jal         func_3C6050
    ctx->pc = 0x3C5918u;
    SET_GPR_U32(ctx, 31, 0x3C5920u);
    ctx->pc = 0x3C591Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5918u;
    // 0x3c591c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6050u, 0x3C5918u, 0x3C5920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5920u;
label_3c5920:
    // 0x3c5920: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C5920u;
    {
        const bool branch_taken_0x3c5920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5920) {
            ctx->pc = 0x3C5930u;
            goto label_3c5930;
        }
    }
    ctx->pc = 0x3C5928u;
label_3c5928:
    // 0x3c5928: 0xc0f18d4  jal         func_3C6350
    ctx->pc = 0x3C5928u;
    SET_GPR_U32(ctx, 31, 0x3C5930u);
    ctx->pc = 0x3C592Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5928u;
    // 0x3c592c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6350u, 0x3C5928u, 0x3C5930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5930u;
label_3c5930:
    // 0x3c5930: 0xc0f1a28  jal         func_3C68A0
    ctx->pc = 0x3C5930u;
    SET_GPR_U32(ctx, 31, 0x3C5938u);
    ctx->pc = 0x3C5934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5930u;
    // 0x3c5934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C68A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C68A0u, 0x3C5930u, 0x3C5938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5938u;
label_3c5938:
    // 0x3c5938: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x3c5938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x3c593c: 0x260500c0  addiu       $a1, $s0, 0xC0
    ctx->pc = 0x3c593cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x3c5940: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x3c5940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x3c5944: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x3c5944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x3c5948: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3c5948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c594c: 0xc0defa0  jal         func_37BE80
    ctx->pc = 0x3C594Cu;
    SET_GPR_U32(ctx, 31, 0x3C5954u);
    ctx->pc = 0x3C5950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C594Cu;
    // 0x3c5950: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37BE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37BE80u, 0x3C594Cu, 0x3C5954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5954u;
label_3c5954:
    // 0x3c5954: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x3c5954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5958: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x3c5958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c595c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3c595cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x3c5960: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x3c5960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x3c5964: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x3c5964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5968: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x3c5968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c596c: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x3c596cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x3c5970: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x3c5970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5974: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x3c5974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c5978: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x3c5978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x3c597c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x3c597cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c5980: 0xac64004c  sw          $a0, 0x4C($v1)
    ctx->pc = 0x3c5980u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 4));
    // 0x3c5984: 0x0  nop
    ctx->pc = 0x3c5984u;
    // NOP
label_3c5988:
    // 0x3c5988: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c5988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c598c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c598cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c5990: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5990u;
        // 0x3c5994: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5998u;
}
