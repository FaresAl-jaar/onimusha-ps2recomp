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

// Function: sub_00381280
// Address: 0x381280 - 0x38161c
void sub_00381280_0x381280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381280_0x381280");
#endif

    switch (ctx->pc) {
        case 0x3812e0u: goto label_3812e0;
        case 0x3812f8u: goto label_3812f8;
        case 0x381330u: goto label_381330;
        case 0x3813a0u: goto label_3813a0;
        case 0x3813d4u: goto label_3813d4;
        case 0x381494u: goto label_381494;
        case 0x3814b4u: goto label_3814b4;
        case 0x381500u: goto label_381500;
        case 0x381518u: goto label_381518;
        case 0x381554u: goto label_381554;
        case 0x381578u: goto label_381578;
        case 0x38158cu: goto label_38158c;
        default: break;
    }

    ctx->pc = 0x381280u;

    // 0x381280: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x381280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x381284: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x381284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x381288: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x381288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x38128c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x38128cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x381290: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x381290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x381294: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x381294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x381298: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x381298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x38129c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38129cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3812a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3812a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3812a4: 0x3c117000  lui         $s1, 0x7000
    ctx->pc = 0x3812a4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)28672 << 16));
    // 0x3812a8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3812a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3812ac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3812acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3812b0: 0x90832b40  lbu         $v1, 0x2B40($a0)
    ctx->pc = 0x3812b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11072)));
    // 0x3812b4: 0x8c852b30  lw          $a1, 0x2B30($a0)
    ctx->pc = 0x3812b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11056)));
    // 0x3812b8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3812b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3812bc: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x3812bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3812c0: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x3812c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x3812c4: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3812C4u;
    {
        const bool branch_taken_0x3812c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3812C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3812C4u;
        // 0x3812c8: 0x24900010  addiu       $s0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3812c4) {
            ctx->pc = 0x3812F8u;
            goto label_3812f8;
        }
    }
    ctx->pc = 0x3812CCu;
    // 0x3812cc: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x3812ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3812d0: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3812d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3812d4: 0x8e452b38  lw          $a1, 0x2B38($s2)
    ctx->pc = 0x3812d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11064)));
    // 0x3812d8: 0xc0526e0  jal         func_149B80
    ctx->pc = 0x3812D8u;
    SET_GPR_U32(ctx, 31, 0x3812E0u);
    ctx->pc = 0x3812DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3812D8u;
    // 0x3812dc: 0x2303e  dsrl32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149B80u, 0x3812D8u, 0x3812E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3812E0u;
label_3812e0:
    // 0x3812e0: 0x8e422b30  lw          $v0, 0x2B30($s2)
    ctx->pc = 0x3812e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11056)));
    // 0x3812e4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x3812e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3812e8: 0x8e452b3c  lw          $a1, 0x2B3C($s2)
    ctx->pc = 0x3812e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11068)));
    // 0x3812ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3812ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3812f0: 0xc0526e0  jal         func_149B80
    ctx->pc = 0x3812F0u;
    SET_GPR_U32(ctx, 31, 0x3812F8u);
    ctx->pc = 0x3812F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3812F0u;
    // 0x3812f4: 0x2303e  dsrl32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149B80u, 0x3812F0u, 0x3812F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3812F8u;
label_3812f8:
    // 0x3812f8: 0x92432b40  lbu         $v1, 0x2B40($s2)
    ctx->pc = 0x3812f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11072)));
    // 0x3812fc: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3812fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x381300: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x381300u;
    {
        const bool branch_taken_0x381300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x381304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381300u;
        // 0x381304: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381300) {
            ctx->pc = 0x381310u;
            goto label_381310;
        }
    }
    ctx->pc = 0x381308u;
    // 0x381308: 0x8e552b30  lw          $s5, 0x2B30($s2)
    ctx->pc = 0x381308u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11056)));
    // 0x38130c: 0x0  nop
    ctx->pc = 0x38130cu;
    // NOP
label_381310:
    // 0x381310: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x381310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x381314: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x381314u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381318: 0x8c64006c  lw          $a0, 0x6C($v1)
    ctx->pc = 0x381318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x38131c: 0x90840008  lbu         $a0, 0x8($a0)
    ctx->pc = 0x38131cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x381320: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x381320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x381324: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x381324u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x381328: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x381328u;
    {
        const bool branch_taken_0x381328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381328u;
        // 0x38132c: 0x64a021  addu        $s4, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381328) {
            ctx->pc = 0x381460u;
            goto label_381460;
        }
    }
    ctx->pc = 0x381330u;
label_381330:
    // 0x381330: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x381330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x381334: 0x2442aff0  addiu       $v0, $v0, -0x5010
    ctx->pc = 0x381334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946800));
    // 0x381338: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x381338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x38133c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x38133cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65AFF0u));
    // 0x381340: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x381340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x381344: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x381344u;
    {
        const bool branch_taken_0x381344 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x381348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381344u;
        // 0x381348: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381344) {
            ctx->pc = 0x381358u;
            goto label_381358;
        }
    }
    ctx->pc = 0x38134Cu;
    // 0x38134c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38134cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x381350: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x381350u;
    {
        const bool branch_taken_0x381350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381350u;
        // 0x381354: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x381350) {
            ctx->pc = 0x381374u;
            goto label_381374;
        }
    }
    ctx->pc = 0x381358u;
label_381358:
    // 0x381358: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x381358u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x38135c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38135cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x381360: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x381360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x381364: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x381364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x381368: 0x0  nop
    ctx->pc = 0x381368u;
    // NOP
    // 0x38136c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x38136cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x381370: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x381370u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_381374:
    // 0x381374: 0xc6412b34  lwc1        $f1, 0x2B34($s2)
    ctx->pc = 0x381374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x381378: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x381378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x38137c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x38137cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x381380: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x381380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381384: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x381384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x381388: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x381388u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x38138c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x38138cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x381390: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x381390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x381394: 0x8e422b38  lw          $v0, 0x2B38($s2)
    ctx->pc = 0x381394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11064)));
    // 0x381398: 0xc041442  jal         func_105108
    ctx->pc = 0x381398u;
    SET_GPR_U32(ctx, 31, 0x3813A0u);
    ctx->pc = 0x38139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381398u;
    // 0x38139c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x381398u, 0x3813A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3813A0u;
label_3813a0:
    // 0x3813a0: 0x8e422b3c  lw          $v0, 0x2B3C($s2)
    ctx->pc = 0x3813a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11068)));
    // 0x3813a4: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x3813a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x3813a8: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x3813a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x3813ac: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x3813acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3813b0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3813b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3813b4: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x3813b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x3813b8: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x3813b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x3813bc: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3813bcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x3813c0: 0x8e442b3c  lw          $a0, 0x2B3C($s2)
    ctx->pc = 0x3813c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11068)));
    // 0x3813c4: 0x8e422b3c  lw          $v0, 0x2B3C($s2)
    ctx->pc = 0x3813c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11068)));
    // 0x3813c8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3813c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3813cc: 0xc041472  jal         func_1051C8
    ctx->pc = 0x3813CCu;
    SET_GPR_U32(ctx, 31, 0x3813D4u);
    ctx->pc = 0x3813D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3813CCu;
    // 0x3813d0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x3813CCu, 0x3813D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3813D4u;
label_3813d4:
    // 0x3813d4: 0x6600004  bltz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3813D4u;
    {
        const bool branch_taken_0x3813d4 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x3813D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3813D4u;
        // 0x3813d8: 0x132042  srl         $a0, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3813d4) {
            ctx->pc = 0x3813E8u;
            goto label_3813e8;
        }
    }
    ctx->pc = 0x3813DCu;
    // 0x3813dc: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x3813dcu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3813e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3813E0u;
    {
        const bool branch_taken_0x3813e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3813E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3813E0u;
        // 0x3813e4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3813e0) {
            ctx->pc = 0x381400u;
            goto label_381400;
        }
    }
    ctx->pc = 0x3813E8u;
label_3813e8:
    // 0x3813e8: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x3813e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x3813ec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3813ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3813f0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3813f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3813f4: 0x0  nop
    ctx->pc = 0x3813f4u;
    // NOP
    // 0x3813f8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3813f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3813fc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3813fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_381400:
    // 0x381400: 0xc6402b34  lwc1        $f0, 0x2B34($s2)
    ctx->pc = 0x381400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x381404: 0x8e442b38  lw          $a0, 0x2B38($s2)
    ctx->pc = 0x381404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11064)));
    // 0x381408: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x381408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x38140c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x38140cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x381410: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x381410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x381414: 0x6600004  bltz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x381414u;
    {
        const bool branch_taken_0x381414 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x381418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381414u;
        // 0x381418: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x381414) {
            ctx->pc = 0x381428u;
            goto label_381428;
        }
    }
    ctx->pc = 0x38141Cu;
    // 0x38141c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x38141cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x381420: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x381420u;
    {
        const bool branch_taken_0x381420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381420u;
        // 0x381424: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x381420) {
            ctx->pc = 0x381444u;
            goto label_381444;
        }
    }
    ctx->pc = 0x381428u;
label_381428:
    // 0x381428: 0x132042  srl         $a0, $s3, 1
    ctx->pc = 0x381428u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x38142c: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x38142cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x381430: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x381430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x381434: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x381434u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x381438: 0x0  nop
    ctx->pc = 0x381438u;
    // NOP
    // 0x38143c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x38143cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x381440: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x381440u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_381444:
    // 0x381444: 0xc6402b34  lwc1        $f0, 0x2B34($s2)
    ctx->pc = 0x381444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x381448: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x381448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x38144c: 0x8e442b3c  lw          $a0, 0x2B3C($s2)
    ctx->pc = 0x38144cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11068)));
    // 0x381450: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x381450u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x381454: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x381454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x381458: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x381458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38145c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x38145cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_381460:
    // 0x381460: 0x275182b  sltu        $v1, $s3, $s5
    ctx->pc = 0x381460u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x381464: 0x1460ffb2  bnez        $v1, . + 4 + (-0x4E << 2)
    ctx->pc = 0x381464u;
    {
        const bool branch_taken_0x381464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x381464) {
            ctx->pc = 0x381330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_381330;
        }
    }
    ctx->pc = 0x38146Cu;
    // 0x38146c: 0x92442b40  lbu         $a0, 0x2B40($s2)
    ctx->pc = 0x38146cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11072)));
    // 0x381470: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x381470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x381474: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x381474u;
    {
        const bool branch_taken_0x381474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x381478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381474u;
        // 0x381478: 0x308300fd  andi        $v1, $a0, 0xFD (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)253);
        ctx->in_delay_slot = false;
        if (branch_taken_0x381474) {
            ctx->pc = 0x381488u;
            goto label_381488;
        }
    }
    ctx->pc = 0x38147Cu;
    // 0x38147c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x38147Cu;
    {
        const bool branch_taken_0x38147c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38147Cu;
        // 0x381480: 0xa2432b40  sb          $v1, 0x2B40($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 11072), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38147c) {
            ctx->pc = 0x3815F0u;
            goto label_3815f0;
        }
    }
    ctx->pc = 0x381484u;
    // 0x381484: 0x0  nop
    ctx->pc = 0x381484u;
    // NOP
label_381488:
    // 0x381488: 0x8e442b38  lw          $a0, 0x2B38($s2)
    ctx->pc = 0x381488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11064)));
    // 0x38148c: 0xc04d80c  jal         func_136030
    ctx->pc = 0x38148Cu;
    SET_GPR_U32(ctx, 31, 0x381494u);
    ctx->pc = 0x381490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38148Cu;
    // 0x381490: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136030u, 0x38148Cu, 0x381494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381494u;
label_381494:
    // 0x381494: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x381494u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x381498: 0x0  nop
    ctx->pc = 0x381498u;
    // NOP
    // 0x38149c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x38149cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3814a0: 0x45010053  bc1t        . + 4 + (0x53 << 2)
    ctx->pc = 0x3814A0u;
    {
        const bool branch_taken_0x3814a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3814a0) {
            ctx->pc = 0x3815F0u;
            goto label_3815f0;
        }
    }
    ctx->pc = 0x3814A8u;
    // 0x3814a8: 0x8e442b38  lw          $a0, 0x2B38($s2)
    ctx->pc = 0x3814a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11064)));
    // 0x3814ac: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x3814ACu;
    SET_GPR_U32(ctx, 31, 0x3814B4u);
    ctx->pc = 0x3814B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3814ACu;
    // 0x3814b0: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F20u, 0x3814ACu, 0x3814B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3814B4u;
label_3814b4:
    // 0x3814b4: 0x8e442b38  lw          $a0, 0x2B38($s2)
    ctx->pc = 0x3814b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11064)));
    // 0x3814b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3814b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3814bc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3814bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3814c0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3814c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3814c4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3814c4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x3814c8: 0x4600ad07  neg.s       $f20, $f21
    ctx->pc = 0x3814c8u;
    ctx->f[20] = FPU_NEG_S(ctx->f[21]);
    // 0x3814cc: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x3814ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3814d0: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x3814d0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x3814d4: 0x8e432b3c  lw          $v1, 0x2B3C($s2)
    ctx->pc = 0x3814d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11068)));
    // 0x3814d8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3814d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3814dc: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x3814dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x3814e0: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x3814e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3814e4: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x3814e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x3814e8: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x3814e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x3814ec: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x3814ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3814f0: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x3814f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x3814f4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x3814F4u;
    {
        const bool branch_taken_0x3814f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3814F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3814F4u;
        // 0x3814f8: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3814f4) {
            ctx->pc = 0x3815E0u;
            goto label_3815e0;
        }
    }
    ctx->pc = 0x3814FCu;
    // 0x3814fc: 0x0  nop
    ctx->pc = 0x3814fcu;
    // NOP
label_381500:
    // 0x381500: 0x8e432b30  lw          $v1, 0x2B30($s2)
    ctx->pc = 0x381500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11056)));
    // 0x381504: 0xc6402b34  lwc1        $f0, 0x2B34($s2)
    ctx->pc = 0x381504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x381508: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x381508u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38150c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x38150cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x381510: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x381510u;
    {
        const bool branch_taken_0x381510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381510u;
        // 0x381514: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x381510) {
            ctx->pc = 0x3815C8u;
            goto label_3815c8;
        }
    }
    ctx->pc = 0x381518u;
label_381518:
    // 0x381518: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x381518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x38151c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x38151cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x381520: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x381520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x381524: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x381524u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x381528: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x381528u;
    {
        const bool branch_taken_0x381528 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x381528) {
            ctx->pc = 0x3815C0u;
            goto label_3815c0;
        }
    }
    ctx->pc = 0x381530u;
    // 0x381530: 0x8e422b30  lw          $v0, 0x2B30($s2)
    ctx->pc = 0x381530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11056)));
    // 0x381534: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x381534u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x381538: 0x8e432b38  lw          $v1, 0x2B38($s2)
    ctx->pc = 0x381538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11064)));
    // 0x38153c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38153cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381540: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x381540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381544: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x381544u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x381548: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x381548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x38154c: 0xc0ded9c  jal         func_37B670
    ctx->pc = 0x38154Cu;
    SET_GPR_U32(ctx, 31, 0x381554u);
    ctx->pc = 0x381550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38154Cu;
    // 0x381550: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B670u, 0x38154Cu, 0x381554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381554u;
label_381554:
    // 0x381554: 0x8e422b30  lw          $v0, 0x2B30($s2)
    ctx->pc = 0x381554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11056)));
    // 0x381558: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x381558u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x38155c: 0x8e432b3c  lw          $v1, 0x2B3C($s2)
    ctx->pc = 0x38155cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11068)));
    // 0x381560: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x381560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381564: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x381564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381568: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x381568u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x38156c: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x38156cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x381570: 0xc0ded9c  jal         func_37B670
    ctx->pc = 0x381570u;
    SET_GPR_U32(ctx, 31, 0x381578u);
    ctx->pc = 0x381574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381570u;
    // 0x381574: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B670u, 0x381570u, 0x381578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381578u;
label_381578:
    // 0x381578: 0x8e422b3c  lw          $v0, 0x2B3C($s2)
    ctx->pc = 0x381578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11068)));
    // 0x38157c: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x38157cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x381580: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x381580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x381584: 0xc041472  jal         func_1051C8
    ctx->pc = 0x381584u;
    SET_GPR_U32(ctx, 31, 0x38158Cu);
    ctx->pc = 0x381588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381584u;
    // 0x381588: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x381584u, 0x38158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38158Cu;
label_38158c:
    // 0x38158c: 0x8e432b38  lw          $v1, 0x2B38($s2)
    ctx->pc = 0x38158cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11064)));
    // 0x381590: 0x142900  sll         $a1, $s4, 4
    ctx->pc = 0x381590u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x381594: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x381594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x381598: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x381598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38159c: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x38159cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x3815a0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3815a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x3815a4: 0x8e442b38  lw          $a0, 0x2B38($s2)
    ctx->pc = 0x3815a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11064)));
    // 0x3815a8: 0x8e432b3c  lw          $v1, 0x2B3C($s2)
    ctx->pc = 0x3815a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11068)));
    // 0x3815ac: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3815acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3815b0: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3815b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3815b4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3815b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3815b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3815B8u;
    {
        const bool branch_taken_0x3815b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3815BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3815B8u;
        // 0x3815bc: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3815b8) {
            ctx->pc = 0x3815D8u;
            goto label_3815d8;
        }
    }
    ctx->pc = 0x3815C0u;
label_3815c0:
    // 0x3815c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3815c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3815c4: 0x0  nop
    ctx->pc = 0x3815c4u;
    // NOP
label_3815c8:
    // 0x3815c8: 0x264182b  sltu        $v1, $s3, $a0
    ctx->pc = 0x3815c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3815cc: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x3815CCu;
    {
        const bool branch_taken_0x3815cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3815cc) {
            ctx->pc = 0x381518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_381518;
        }
    }
    ctx->pc = 0x3815D4u;
    // 0x3815d4: 0x0  nop
    ctx->pc = 0x3815d4u;
    // NOP
label_3815d8:
    // 0x3815d8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3815d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3815dc: 0x0  nop
    ctx->pc = 0x3815dcu;
    // NOP
label_3815e0:
    // 0x3815e0: 0x8e432b30  lw          $v1, 0x2B30($s2)
    ctx->pc = 0x3815e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11056)));
    // 0x3815e4: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x3815e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3815e8: 0x1460ffc5  bnez        $v1, . + 4 + (-0x3B << 2)
    ctx->pc = 0x3815E8u;
    {
        const bool branch_taken_0x3815e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3815e8) {
            ctx->pc = 0x381500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_381500;
        }
    }
    ctx->pc = 0x3815F0u;
label_3815f0:
    // 0x3815f0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3815f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3815f4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3815f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3815f8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3815f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3815fc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3815fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x381600: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x381600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x381604: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x381604u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x381608: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x381608u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38160c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38160cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x381610: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x381610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x381614: 0x3e00008  jr          $ra
    ctx->pc = 0x381614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381614u;
        // 0x381618: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38161Cu;
}
