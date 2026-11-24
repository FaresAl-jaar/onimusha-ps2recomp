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

// Function: sub_00186310
// Address: 0x186310 - 0x186714
void sub_00186310_0x186310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186310_0x186310");
#endif

    switch (ctx->pc) {
        case 0x1863c4u: goto label_1863c4;
        case 0x186438u: goto label_186438;
        case 0x1864c4u: goto label_1864c4;
        case 0x186594u: goto label_186594;
        case 0x186608u: goto label_186608;
        case 0x186694u: goto label_186694;
        default: break;
    }

    ctx->pc = 0x186310u;

    // 0x186310: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x186310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x186314: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x186314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x186318: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x186318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x18631c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x18631cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x186320: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x186320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x186324: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x186324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x186328: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x186328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x18632c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18632cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x186330: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x186330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x186334: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x186334u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x186338: 0x908301f8  lbu         $v1, 0x1F8($a0)
    ctx->pc = 0x186338u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 504)));
    // 0x18633c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x18633cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x186340: 0x146000e9  bnez        $v1, . + 4 + (0xE9 << 2)
    ctx->pc = 0x186340u;
    {
        const bool branch_taken_0x186340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x186344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186340u;
        // 0x186344: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186340) {
            ctx->pc = 0x1866E8u;
            goto label_1866e8;
        }
    }
    ctx->pc = 0x186348u;
    // 0x186348: 0x92a301fa  lbu         $v1, 0x1FA($s5)
    ctx->pc = 0x186348u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 506)));
    // 0x18634c: 0x26a70110  addiu       $a3, $s5, 0x110
    ctx->pc = 0x18634cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 272));
    // 0x186350: 0x8f8280b0  lw          $v0, -0x7F50($gp)
    ctx->pc = 0x186350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934704)));
    // 0x186354: 0x8eb40048  lw          $s4, 0x48($s5)
    ctx->pc = 0x186354u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
    // 0x186358: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x186358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x18635c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18635cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x186360: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x186360u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x186364: 0x26a60190  addiu       $a2, $s5, 0x190
    ctx->pc = 0x186364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 400));
    // 0x186368: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x186368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18636c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18636cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x186370: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x186370u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x186374: 0x78e20010  lq          $v0, 0x10($a3)
    ctx->pc = 0x186374u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x186378: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x186378u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x18637c: 0x78e20020  lq          $v0, 0x20($a3)
    ctx->pc = 0x18637cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x186380: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x186380u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x186384: 0x78e20030  lq          $v0, 0x30($a3)
    ctx->pc = 0x186384u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x186388: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x186388u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x18638c: 0x92a301fa  lbu         $v1, 0x1FA($s5)
    ctx->pc = 0x18638cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 506)));
    // 0x186390: 0x8f8280b4  lw          $v0, -0x7F4C($gp)
    ctx->pc = 0x186390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934708)));
    // 0x186394: 0x78c70000  lq          $a3, 0x0($a2)
    ctx->pc = 0x186394u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x186398: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x186398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18639c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x18639cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1863a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1863a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1863a4: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x1863a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
    // 0x1863a8: 0x78c70010  lq          $a3, 0x10($a2)
    ctx->pc = 0x1863a8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1863ac: 0x7c470010  sq          $a3, 0x10($v0)
    ctx->pc = 0x1863acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 7));
    // 0x1863b0: 0x78c70020  lq          $a3, 0x20($a2)
    ctx->pc = 0x1863b0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1863b4: 0x7c470020  sq          $a3, 0x20($v0)
    ctx->pc = 0x1863b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 7));
    // 0x1863b8: 0x78c70030  lq          $a3, 0x30($a2)
    ctx->pc = 0x1863b8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1863bc: 0xc060d40  jal         func_183500
    ctx->pc = 0x1863BCu;
    SET_GPR_U32(ctx, 31, 0x1863C4u);
    ctx->pc = 0x1863C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1863BCu;
    // 0x1863c0: 0x7c470030  sq          $a3, 0x30($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183500u, 0x1863BCu, 0x1863C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1863C4u;
label_1863c4:
    // 0x1863c4: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1863C4u;
    {
        const bool branch_taken_0x1863c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1863c4) {
            ctx->pc = 0x1864E0u;
            goto label_1864e0;
        }
    }
    ctx->pc = 0x1863CCu;
    // 0x1863cc: 0x8c5011d4  lw          $s0, 0x11D4($v0)
    ctx->pc = 0x1863ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4564)));
    // 0x1863d0: 0x32030008  andi        $v1, $s0, 0x8
    ctx->pc = 0x1863d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
    // 0x1863d4: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1863D4u;
    {
        const bool branch_taken_0x1863d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1863d4) {
            ctx->pc = 0x1864E0u;
            goto label_1864e0;
        }
    }
    ctx->pc = 0x1863DCu;
    // 0x1863dc: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x1863dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1863e0: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1863e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1863e4: 0xc44011f4  lwc1        $f0, 0x11F4($v0)
    ctx->pc = 0x1863e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1863e8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1863e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1863ec: 0x2484d330  addiu       $a0, $a0, -0x2CD0
    ctx->pc = 0x1863ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955824));
    // 0x1863f0: 0x2463d334  addiu       $v1, $v1, -0x2CCC
    ctx->pc = 0x1863f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955828));
    // 0x1863f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1863f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1863f8: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x1863f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x1863fc: 0x22842  srl         $a1, $v0, 1
    ctx->pc = 0x1863fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x186400: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x186400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x186404: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x186404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x186408: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x186408u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18640c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x18640cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x186410: 0x2442d338  addiu       $v0, $v0, -0x2CC8
    ctx->pc = 0x186410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955832));
    // 0x186414: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x186414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x186418: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x186418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18641c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18641cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x186420: 0x8c960000  lw          $s6, 0x0($a0)
    ctx->pc = 0x186420u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x186424: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x186424u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186428: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x186428u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18642c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x18642Cu;
    {
        const bool branch_taken_0x18642c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18642Cu;
        // 0x186430: 0x46000d03  div.s       $f20, $f1, $f0 (Delay Slot)
        { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18642c) {
            ctx->pc = 0x1864D0u;
            goto label_1864d0;
        }
    }
    ctx->pc = 0x186434u;
    // 0x186434: 0x0  nop
    ctx->pc = 0x186434u;
    // NOP
label_186438:
    // 0x186438: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x186438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x18643c: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x18643cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x186440: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x186440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x186444: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x186444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x186448: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x186448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18644c: 0x944300c6  lhu         $v1, 0xC6($v0)
    ctx->pc = 0x18644cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 198)));
    // 0x186450: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x186450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x186454: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x186454u;
    {
        const bool branch_taken_0x186454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186454u;
        // 0x186458: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186454) {
            ctx->pc = 0x1864C8u;
            goto label_1864c8;
        }
    }
    ctx->pc = 0x18645Cu;
    // 0x18645c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x18645Cu;
    {
        const bool branch_taken_0x18645c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18645c) {
            ctx->pc = 0x1864C8u;
            goto label_1864c8;
        }
    }
    ctx->pc = 0x186464u;
    // 0x186464: 0x32020005  andi        $v0, $s0, 0x5
    ctx->pc = 0x186464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)5);
    // 0x186468: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x186468u;
    {
        const bool branch_taken_0x186468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186468u;
        // 0x18646c: 0x32020004  andi        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186468) {
            ctx->pc = 0x1864A0u;
            goto label_1864a0;
        }
    }
    ctx->pc = 0x186470u;
    // 0x186470: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x186470u;
    {
        const bool branch_taken_0x186470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186470) {
            ctx->pc = 0x186490u;
            goto label_186490;
        }
    }
    ctx->pc = 0x186478u;
    // 0x186478: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x186478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x18647c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x18647Cu;
    {
        const bool branch_taken_0x18647c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18647c) {
            ctx->pc = 0x1864C8u;
            goto label_1864c8;
        }
    }
    ctx->pc = 0x186484u;
    // 0x186484: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x186484u;
    {
        const bool branch_taken_0x186484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186484) {
            ctx->pc = 0x1864A0u;
            goto label_1864a0;
        }
    }
    ctx->pc = 0x18648Cu;
    // 0x18648c: 0x0  nop
    ctx->pc = 0x18648cu;
    // NOP
label_186490:
    // 0x186490: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x186490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x186494: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x186494u;
    {
        const bool branch_taken_0x186494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186494) {
            ctx->pc = 0x1864C8u;
            goto label_1864c8;
        }
    }
    ctx->pc = 0x18649Cu;
    // 0x18649c: 0x0  nop
    ctx->pc = 0x18649cu;
    // NOP
label_1864a0:
    // 0x1864a0: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x1864a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1864a4: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x1864a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1864a8: 0x2c23021  addu        $a2, $s6, $v0
    ctx->pc = 0x1864a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1864ac: 0x2423821  addu        $a3, $s2, $v0
    ctx->pc = 0x1864acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1864b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1864b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1864b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1864b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1864b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1864b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1864bc: 0xc06011c  jal         func_180470
    ctx->pc = 0x1864BCu;
    SET_GPR_U32(ctx, 31, 0x1864C4u);
    ctx->pc = 0x1864C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1864BCu;
    // 0x1864c0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180470u, 0x1864BCu, 0x1864C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1864C4u;
label_1864c4:
    // 0x1864c4: 0x0  nop
    ctx->pc = 0x1864c4u;
    // NOP
label_1864c8:
    // 0x1864c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1864c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1864cc: 0x0  nop
    ctx->pc = 0x1864ccu;
    // NOP
label_1864d0:
    // 0x1864d0: 0x9682006a  lhu         $v0, 0x6A($s4)
    ctx->pc = 0x1864d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 106)));
    // 0x1864d4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1864d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1864d8: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1864D8u;
    {
        const bool branch_taken_0x1864d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1864d8) {
            ctx->pc = 0x186438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186438;
        }
    }
    ctx->pc = 0x1864E0u;
label_1864e0:
    // 0x1864e0: 0x92a301fa  lbu         $v1, 0x1FA($s5)
    ctx->pc = 0x1864e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 506)));
    // 0x1864e4: 0x8f8280b0  lw          $v0, -0x7F50($gp)
    ctx->pc = 0x1864e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934704)));
    // 0x1864e8: 0x26a80110  addiu       $t0, $s5, 0x110
    ctx->pc = 0x1864e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 272));
    // 0x1864ec: 0x26a700d0  addiu       $a3, $s5, 0xD0
    ctx->pc = 0x1864ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
    // 0x1864f0: 0x26a60150  addiu       $a2, $s5, 0x150
    ctx->pc = 0x1864f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 336));
    // 0x1864f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1864f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1864f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1864f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1864fc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1864fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x186500: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x186500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x186504: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x186504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x186508: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x186508u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18650c: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x18650cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x186510: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x186510u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x186514: 0x7d020010  sq          $v0, 0x10($t0)
    ctx->pc = 0x186514u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 2));
    // 0x186518: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x186518u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18651c: 0x7d020020  sq          $v0, 0x20($t0)
    ctx->pc = 0x18651cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 2));
    // 0x186520: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x186520u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x186524: 0x7d020030  sq          $v0, 0x30($t0)
    ctx->pc = 0x186524u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), GPR_VEC(ctx, 2));
    // 0x186528: 0x92a301fa  lbu         $v1, 0x1FA($s5)
    ctx->pc = 0x186528u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 506)));
    // 0x18652c: 0x8f8280b0  lw          $v0, -0x7F50($gp)
    ctx->pc = 0x18652cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934704)));
    // 0x186530: 0x78e80000  lq          $t0, 0x0($a3)
    ctx->pc = 0x186530u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x186534: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x186534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x186538: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x186538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x18653c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18653cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x186540: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x186540u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x186544: 0x78e80010  lq          $t0, 0x10($a3)
    ctx->pc = 0x186544u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x186548: 0x7c480010  sq          $t0, 0x10($v0)
    ctx->pc = 0x186548u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 8));
    // 0x18654c: 0x78e80020  lq          $t0, 0x20($a3)
    ctx->pc = 0x18654cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x186550: 0x7c480020  sq          $t0, 0x20($v0)
    ctx->pc = 0x186550u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 8));
    // 0x186554: 0x78e80030  lq          $t0, 0x30($a3)
    ctx->pc = 0x186554u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x186558: 0x7c480030  sq          $t0, 0x30($v0)
    ctx->pc = 0x186558u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 8));
    // 0x18655c: 0x92a301fa  lbu         $v1, 0x1FA($s5)
    ctx->pc = 0x18655cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 506)));
    // 0x186560: 0x8f8280b4  lw          $v0, -0x7F4C($gp)
    ctx->pc = 0x186560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934708)));
    // 0x186564: 0x78c70000  lq          $a3, 0x0($a2)
    ctx->pc = 0x186564u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x186568: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x186568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18656c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x18656cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x186570: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x186570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x186574: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x186574u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
    // 0x186578: 0x78c70010  lq          $a3, 0x10($a2)
    ctx->pc = 0x186578u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x18657c: 0x7c470010  sq          $a3, 0x10($v0)
    ctx->pc = 0x18657cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 7));
    // 0x186580: 0x78c70020  lq          $a3, 0x20($a2)
    ctx->pc = 0x186580u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x186584: 0x7c470020  sq          $a3, 0x20($v0)
    ctx->pc = 0x186584u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 7));
    // 0x186588: 0x78c70030  lq          $a3, 0x30($a2)
    ctx->pc = 0x186588u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x18658c: 0xc060d40  jal         func_183500
    ctx->pc = 0x18658Cu;
    SET_GPR_U32(ctx, 31, 0x186594u);
    ctx->pc = 0x186590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18658Cu;
    // 0x186590: 0x7c470030  sq          $a3, 0x30($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183500u, 0x18658Cu, 0x186594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186594u;
label_186594:
    // 0x186594: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x186594u;
    {
        const bool branch_taken_0x186594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186594) {
            ctx->pc = 0x1866B0u;
            goto label_1866b0;
        }
    }
    ctx->pc = 0x18659Cu;
    // 0x18659c: 0x8c5011d4  lw          $s0, 0x11D4($v0)
    ctx->pc = 0x18659cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4564)));
    // 0x1865a0: 0x32030008  andi        $v1, $s0, 0x8
    ctx->pc = 0x1865a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
    // 0x1865a4: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1865A4u;
    {
        const bool branch_taken_0x1865a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1865a4) {
            ctx->pc = 0x1866B0u;
            goto label_1866b0;
        }
    }
    ctx->pc = 0x1865ACu;
    // 0x1865ac: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x1865acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1865b0: 0x32030002  andi        $v1, $s0, 0x2
    ctx->pc = 0x1865b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x1865b4: 0xc44011f4  lwc1        $f0, 0x11F4($v0)
    ctx->pc = 0x1865b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1865b8: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x1865b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1865bc: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x1865bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1865c0: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1865c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1865c4: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x1865c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1865c8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1865c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1865cc: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1865ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1865d0: 0x24a5d330  addiu       $a1, $a1, -0x2CD0
    ctx->pc = 0x1865d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955824));
    // 0x1865d4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1865d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1865d8: 0x2484d334  addiu       $a0, $a0, -0x2CCC
    ctx->pc = 0x1865d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955828));
    // 0x1865dc: 0x2463d338  addiu       $v1, $v1, -0x2CC8
    ctx->pc = 0x1865dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955832));
    // 0x1865e0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1865e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1865e4: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1865e4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1865e8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1865e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1865ec: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1865ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1865f0: 0x8cb60000  lw          $s6, 0x0($a1)
    ctx->pc = 0x1865f0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1865f4: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x1865f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1865f8: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x1865f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1865fc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1865FCu;
    {
        const bool branch_taken_0x1865fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1865FCu;
        // 0x186600: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1865fc) {
            ctx->pc = 0x1866A0u;
            goto label_1866a0;
        }
    }
    ctx->pc = 0x186604u;
    // 0x186604: 0x0  nop
    ctx->pc = 0x186604u;
    // NOP
label_186608:
    // 0x186608: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x186608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x18660c: 0x712023  subu        $a0, $v1, $s1
    ctx->pc = 0x18660cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x186610: 0x8e830080  lw          $v1, 0x80($s4)
    ctx->pc = 0x186610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x186614: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x186614u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x186618: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x186618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18661c: 0x946400c6  lhu         $a0, 0xC6($v1)
    ctx->pc = 0x18661cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 198)));
    // 0x186620: 0x30830020  andi        $v1, $a0, 0x20
    ctx->pc = 0x186620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x186624: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x186624u;
    {
        const bool branch_taken_0x186624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x186628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186624u;
        // 0x186628: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186624) {
            ctx->pc = 0x186698u;
            goto label_186698;
        }
    }
    ctx->pc = 0x18662Cu;
    // 0x18662c: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x18662Cu;
    {
        const bool branch_taken_0x18662c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18662c) {
            ctx->pc = 0x186698u;
            goto label_186698;
        }
    }
    ctx->pc = 0x186634u;
    // 0x186634: 0x32030005  andi        $v1, $s0, 0x5
    ctx->pc = 0x186634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)5);
    // 0x186638: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x186638u;
    {
        const bool branch_taken_0x186638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186638u;
        // 0x18663c: 0x32030004  andi        $v1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186638) {
            ctx->pc = 0x186670u;
            goto label_186670;
        }
    }
    ctx->pc = 0x186640u;
    // 0x186640: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x186640u;
    {
        const bool branch_taken_0x186640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x186640) {
            ctx->pc = 0x186660u;
            goto label_186660;
        }
    }
    ctx->pc = 0x186648u;
    // 0x186648: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x186648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x18664c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x18664Cu;
    {
        const bool branch_taken_0x18664c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18664c) {
            ctx->pc = 0x186698u;
            goto label_186698;
        }
    }
    ctx->pc = 0x186654u;
    // 0x186654: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x186654u;
    {
        const bool branch_taken_0x186654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186654) {
            ctx->pc = 0x186670u;
            goto label_186670;
        }
    }
    ctx->pc = 0x18665Cu;
    // 0x18665c: 0x0  nop
    ctx->pc = 0x18665cu;
    // NOP
label_186660:
    // 0x186660: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x186660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x186664: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x186664u;
    {
        const bool branch_taken_0x186664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x186664) {
            ctx->pc = 0x186698u;
            goto label_186698;
        }
    }
    ctx->pc = 0x18666Cu;
    // 0x18666c: 0x0  nop
    ctx->pc = 0x18666cu;
    // NOP
label_186670:
    // 0x186670: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x186670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x186674: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x186674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x186678: 0x2c23021  addu        $a2, $s6, $v0
    ctx->pc = 0x186678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x18667c: 0x2423821  addu        $a3, $s2, $v0
    ctx->pc = 0x18667cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x186680: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x186680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186684: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x186684u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x186688: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x186688u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18668c: 0xc06011c  jal         func_180470
    ctx->pc = 0x18668Cu;
    SET_GPR_U32(ctx, 31, 0x186694u);
    ctx->pc = 0x186690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18668Cu;
    // 0x186690: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180470u, 0x18668Cu, 0x186694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186694u;
label_186694:
    // 0x186694: 0x0  nop
    ctx->pc = 0x186694u;
    // NOP
label_186698:
    // 0x186698: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x186698u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18669c: 0x0  nop
    ctx->pc = 0x18669cu;
    // NOP
label_1866a0:
    // 0x1866a0: 0x9683006a  lhu         $v1, 0x6A($s4)
    ctx->pc = 0x1866a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 106)));
    // 0x1866a4: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x1866a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1866a8: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1866A8u;
    {
        const bool branch_taken_0x1866a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1866a8) {
            ctx->pc = 0x186608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186608;
        }
    }
    ctx->pc = 0x1866B0u;
label_1866b0:
    // 0x1866b0: 0x92a401fa  lbu         $a0, 0x1FA($s5)
    ctx->pc = 0x1866b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 506)));
    // 0x1866b4: 0x8f8380b0  lw          $v1, -0x7F50($gp)
    ctx->pc = 0x1866b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934704)));
    // 0x1866b8: 0x26a500d0  addiu       $a1, $s5, 0xD0
    ctx->pc = 0x1866b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
    // 0x1866bc: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1866bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1866c0: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x1866c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x1866c4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1866c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1866c8: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x1866c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1866cc: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x1866ccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x1866d0: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x1866d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1866d4: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x1866d4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x1866d8: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x1866d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1866dc: 0x7ca30020  sq          $v1, 0x20($a1)
    ctx->pc = 0x1866dcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 3));
    // 0x1866e0: 0x78830030  lq          $v1, 0x30($a0)
    ctx->pc = 0x1866e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1866e4: 0x7ca30030  sq          $v1, 0x30($a1)
    ctx->pc = 0x1866e4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 3));
label_1866e8:
    // 0x1866e8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1866e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1866ec: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1866ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1866f0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1866f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1866f4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1866f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1866f8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1866f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1866fc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1866fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x186700: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x186700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x186704: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x186704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186708: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x186708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18670c: 0x3e00008  jr          $ra
    ctx->pc = 0x18670Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18670Cu;
        // 0x186710: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18670Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186714u;
}
