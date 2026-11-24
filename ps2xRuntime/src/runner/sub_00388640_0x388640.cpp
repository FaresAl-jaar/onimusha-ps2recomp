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

// Function: sub_00388640
// Address: 0x388640 - 0x388844
void sub_00388640_0x388640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388640_0x388640");
#endif

    switch (ctx->pc) {
        case 0x388660u: goto label_388660;
        case 0x3886e8u: goto label_3886e8;
        case 0x3886f4u: goto label_3886f4;
        case 0x388708u: goto label_388708;
        case 0x388730u: goto label_388730;
        case 0x388740u: goto label_388740;
        case 0x388750u: goto label_388750;
        case 0x38875cu: goto label_38875c;
        case 0x3887dcu: goto label_3887dc;
        case 0x38882cu: goto label_38882c;
        default: break;
    }

    ctx->pc = 0x388640u;

    // 0x388640: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x388640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x388644: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x388644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388648: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x388648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38864c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38864cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388650: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x388650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x388654: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x388654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x388658: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x388658u;
    SET_GPR_U32(ctx, 31, 0x388660u);
    ctx->pc = 0x38865Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388658u;
    // 0x38865c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x388658u, 0x388660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388660u;
label_388660:
    // 0x388660: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x388660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x388664: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x388664u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x388668: 0x10200071  beqz        $at, . + 4 + (0x71 << 2)
    ctx->pc = 0x388668u;
    {
        const bool branch_taken_0x388668 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x38866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388668u;
        // 0x38866c: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388668) {
            ctx->pc = 0x388830u;
            goto label_388830;
        }
    }
    ctx->pc = 0x388670u;
    // 0x388670: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x388670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x388674: 0x24841f60  addiu       $a0, $a0, 0x1F60
    ctx->pc = 0x388674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8032));
    // 0x388678: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x388678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38867c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x38867cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x388680: 0x600008  jr          $v1
    ctx->pc = 0x388680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x388688u: goto label_388688;
            case 0x3886B8u: goto label_3886b8;
            case 0x3886D0u: goto label_3886d0;
            case 0x388798u: goto label_388798;
            case 0x3887C8u: goto label_3887c8;
            case 0x3887E8u: goto label_3887e8;
            case 0x388818u: goto label_388818;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388680u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x388688u;
label_388688:
    // 0x388688: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x388688u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x38868c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x38868cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x388690: 0x2403009c  addiu       $v1, $zero, 0x9C
    ctx->pc = 0x388690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x388694: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x388694u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x388698: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x388698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38869c: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x38869cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3886a0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3886a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3886a4: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3886a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3886a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3886a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3886ac: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x3886acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x3886b0: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3886b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3886b4: 0x0  nop
    ctx->pc = 0x3886b4u;
    // NOP
label_3886b8:
    // 0x3886b8: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3886b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3886bc: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x3886BCu;
    {
        const bool branch_taken_0x3886bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3886C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3886BCu;
        // 0x3886c0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3886bc) {
            ctx->pc = 0x388830u;
            goto label_388830;
        }
    }
    ctx->pc = 0x3886C4u;
    // 0x3886c4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x3886C4u;
    {
        const bool branch_taken_0x3886c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3886C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3886C4u;
        // 0x3886c8: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3886c4) {
            ctx->pc = 0x388830u;
            goto label_388830;
        }
    }
    ctx->pc = 0x3886CCu;
    // 0x3886cc: 0x0  nop
    ctx->pc = 0x3886ccu;
    // NOP
label_3886d0:
    // 0x3886d0: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x3886D0u;
    {
        const bool branch_taken_0x3886d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3886d0) {
            ctx->pc = 0x388830u;
            goto label_388830;
        }
    }
    ctx->pc = 0x3886D8u;
    // 0x3886d8: 0x260207a0  addiu       $v0, $s0, 0x7A0
    ctx->pc = 0x3886d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1952));
    // 0x3886dc: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x3886dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x3886e0: 0xc0e1cf8  jal         func_3873E0
    ctx->pc = 0x3886E0u;
    SET_GPR_U32(ctx, 31, 0x3886E8u);
    ctx->pc = 0x3886E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3886E0u;
    // 0x3886e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3873E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3873E0u, 0x3886E0u, 0x3886E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3886E8u;
label_3886e8:
    // 0x3886e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3886e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3886ec: 0xc0e1d0c  jal         func_387430
    ctx->pc = 0x3886ECu;
    SET_GPR_U32(ctx, 31, 0x3886F4u);
    ctx->pc = 0x3886F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3886ECu;
    // 0x3886f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387430u, 0x3886ECu, 0x3886F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3886F4u;
label_3886f4:
    // 0x3886f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3886f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3886f8: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x3886F8u;
    {
        const bool branch_taken_0x3886f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3886FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3886F8u;
        // 0x3886fc: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3886f8) {
            ctx->pc = 0x388788u;
            goto label_388788;
        }
    }
    ctx->pc = 0x388700u;
    // 0x388700: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x388700u;
    SET_GPR_U32(ctx, 31, 0x388708u);
    ctx->pc = 0x388704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388700u;
    // 0x388704: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x388700u, 0x388708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388708u;
label_388708:
    // 0x388708: 0x3c03481c  lui         $v1, 0x481C
    ctx->pc = 0x388708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18460 << 16));
    // 0x38870c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x38870cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x388710: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x388710u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x388714: 0x0  nop
    ctx->pc = 0x388714u;
    // NOP
    // 0x388718: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x388718u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38871c: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x38871Cu;
    {
        const bool branch_taken_0x38871c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38871c) {
            ctx->pc = 0x388788u;
            goto label_388788;
        }
    }
    ctx->pc = 0x388724u;
    // 0x388724: 0x860500c2  lh          $a1, 0xC2($s0)
    ctx->pc = 0x388724u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x388728: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x388728u;
    SET_GPR_U32(ctx, 31, 0x388730u);
    ctx->pc = 0x38872Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388728u;
    // 0x38872c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x388728u, 0x388730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388730u;
label_388730:
    // 0x388730: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x388730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x388734: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x388734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x388738: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x388738u;
    SET_GPR_U32(ctx, 31, 0x388740u);
    ctx->pc = 0x38873Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388738u;
    // 0x38873c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x388738u, 0x388740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388740u;
label_388740:
    // 0x388740: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x388740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x388744: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x388744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x388748: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x388748u;
    SET_GPR_U32(ctx, 31, 0x388750u);
    ctx->pc = 0x38874Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388748u;
    // 0x38874c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x388748u, 0x388750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388750u;
label_388750:
    // 0x388750: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x388750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x388754: 0xc076654  jal         func_1D9950
    ctx->pc = 0x388754u;
    SET_GPR_U32(ctx, 31, 0x38875Cu);
    ctx->pc = 0x388758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388754u;
    // 0x388758: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x388754u, 0x38875Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38875Cu;
label_38875c:
    // 0x38875c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x38875cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x388760: 0x0  nop
    ctx->pc = 0x388760u;
    // NOP
    // 0x388764: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x388764u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x388768: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x388768u;
    {
        const bool branch_taken_0x388768 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x38876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388768u;
        // 0x38876c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388768) {
            ctx->pc = 0x388778u;
            goto label_388778;
        }
    }
    ctx->pc = 0x388770u;
    // 0x388770: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x388770u;
    {
        const bool branch_taken_0x388770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388770u;
        // 0x388774: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388770) {
            ctx->pc = 0x388830u;
            goto label_388830;
        }
    }
    ctx->pc = 0x388778u;
label_388778:
    // 0x388778: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x388778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38877c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x38877Cu;
    {
        const bool branch_taken_0x38877c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38877Cu;
        // 0x388780: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38877c) {
            ctx->pc = 0x388830u;
            goto label_388830;
        }
    }
    ctx->pc = 0x388784u;
    // 0x388784: 0x0  nop
    ctx->pc = 0x388784u;
    // NOP
label_388788:
    // 0x388788: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x388788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38878c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x38878Cu;
    {
        const bool branch_taken_0x38878c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38878Cu;
        // 0x388790: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38878c) {
            ctx->pc = 0x388830u;
            goto label_388830;
        }
    }
    ctx->pc = 0x388794u;
    // 0x388794: 0x0  nop
    ctx->pc = 0x388794u;
    // NOP
label_388798:
    // 0x388798: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x388798u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x38879c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x38879cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3887a0: 0x240300c9  addiu       $v1, $zero, 0xC9
    ctx->pc = 0x3887a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x3887a4: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3887a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3887a8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3887a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3887ac: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x3887acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3887b0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3887b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3887b4: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3887b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3887b8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3887b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3887bc: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x3887bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x3887c0: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3887c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3887c4: 0x0  nop
    ctx->pc = 0x3887c4u;
    // NOP
label_3887c8:
    // 0x3887c8: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3887c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3887cc: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3887CCu;
    {
        const bool branch_taken_0x3887cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3887D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3887CCu;
        // 0x3887d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3887cc) {
            ctx->pc = 0x388830u;
            goto label_388830;
        }
    }
    ctx->pc = 0x3887D4u;
    // 0x3887d4: 0xc0a012c  jal         func_2804B0
    ctx->pc = 0x3887D4u;
    SET_GPR_U32(ctx, 31, 0x3887DCu);
    ctx->pc = 0x2804B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2804B0u, 0x3887D4u, 0x3887DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3887DCu;
label_3887dc:
    // 0x3887dc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3887DCu;
    {
        const bool branch_taken_0x3887dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3887dc) {
            ctx->pc = 0x388830u;
            goto label_388830;
        }
    }
    ctx->pc = 0x3887E4u;
    // 0x3887e4: 0x0  nop
    ctx->pc = 0x3887e4u;
    // NOP
label_3887e8:
    // 0x3887e8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3887e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3887ec: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3887ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3887f0: 0x2403005f  addiu       $v1, $zero, 0x5F
    ctx->pc = 0x3887f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x3887f4: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3887f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3887f8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3887f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3887fc: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x3887fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x388800: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x388800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x388804: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x388804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x388808: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x388808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x38880c: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x38880cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x388810: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x388810u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x388814: 0x0  nop
    ctx->pc = 0x388814u;
    // NOP
label_388818:
    // 0x388818: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x388818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x38881c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38881Cu;
    {
        const bool branch_taken_0x38881c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x388820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38881Cu;
        // 0x388820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38881c) {
            ctx->pc = 0x388830u;
            goto label_388830;
        }
    }
    ctx->pc = 0x388824u;
    // 0x388824: 0xc0a012c  jal         func_2804B0
    ctx->pc = 0x388824u;
    SET_GPR_U32(ctx, 31, 0x38882Cu);
    ctx->pc = 0x2804B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2804B0u, 0x388824u, 0x38882Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38882Cu;
label_38882c:
    // 0x38882c: 0x0  nop
    ctx->pc = 0x38882cu;
    // NOP
label_388830:
    // 0x388830: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x388830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x388834: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x388834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x388838: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x388838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38883c: 0x3e00008  jr          $ra
    ctx->pc = 0x38883Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x388840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38883Cu;
        // 0x388840: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38883Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x388844u;
}
