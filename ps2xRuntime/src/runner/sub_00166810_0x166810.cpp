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

// Function: sub_00166810
// Address: 0x166810 - 0x166f78
void sub_00166810_0x166810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166810_0x166810");
#endif

    switch (ctx->pc) {
        case 0x166858u: goto label_166858;
        case 0x166898u: goto label_166898;
        case 0x1668a8u: goto label_1668a8;
        case 0x1668c0u: goto label_1668c0;
        case 0x1668d0u: goto label_1668d0;
        case 0x1669c4u: goto label_1669c4;
        case 0x166a18u: goto label_166a18;
        case 0x166a30u: goto label_166a30;
        case 0x166a74u: goto label_166a74;
        case 0x166a88u: goto label_166a88;
        case 0x166aa0u: goto label_166aa0;
        case 0x166ae8u: goto label_166ae8;
        case 0x166afcu: goto label_166afc;
        case 0x166b20u: goto label_166b20;
        case 0x166b68u: goto label_166b68;
        case 0x166b7cu: goto label_166b7c;
        case 0x166b90u: goto label_166b90;
        case 0x166d10u: goto label_166d10;
        case 0x166d3cu: goto label_166d3c;
        case 0x166d68u: goto label_166d68;
        case 0x166d88u: goto label_166d88;
        case 0x166db0u: goto label_166db0;
        case 0x166dd0u: goto label_166dd0;
        case 0x166de8u: goto label_166de8;
        case 0x166e48u: goto label_166e48;
        case 0x166e78u: goto label_166e78;
        case 0x166e9cu: goto label_166e9c;
        case 0x166ee4u: goto label_166ee4;
        case 0x166f1cu: goto label_166f1c;
        case 0x166f44u: goto label_166f44;
        default: break;
    }

    ctx->pc = 0x166810u;

    // 0x166810: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x166810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x166814: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x166814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x166818: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x166818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x16681c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x16681cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x166820: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x166820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x166824: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x166824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x166828: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x166828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16682c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16682cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x166830: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x166830u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166834: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x166834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x166838: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x166838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16683c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16683cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x166840: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x166844: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x166844u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x166848: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x166848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16684c: 0x9031cea4  lbu         $s1, -0x315C($at)
    ctx->pc = 0x16684cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x166850: 0xc0a83c8  jal         func_2A0F20
    ctx->pc = 0x166850u;
    SET_GPR_U32(ctx, 31, 0x166858u);
    ctx->pc = 0x166854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166850u;
    // 0x166854: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0F20u, 0x166850u, 0x166858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166858u;
label_166858:
    // 0x166858: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x166858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16685c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16685cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x166860: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x166860u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x166864: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x166864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x166868: 0x146001b7  bnez        $v1, . + 4 + (0x1B7 << 2)
    ctx->pc = 0x166868u;
    {
        const bool branch_taken_0x166868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166868u;
        // 0x16686c: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166868) {
            ctx->pc = 0x166F48u;
            goto label_166f48;
        }
    }
    ctx->pc = 0x166870u;
    // 0x166870: 0x8e630078  lw          $v1, 0x78($s3)
    ctx->pc = 0x166870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x166874: 0x8c2295b4  lw          $v0, -0x6A4C($at)
    ctx->pc = 0x166874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940084)));
    // 0x166878: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x166878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x16687c: 0x8e74007c  lw          $s4, 0x7C($s3)
    ctx->pc = 0x16687cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x166880: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x166880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x166884: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0
    ctx->pc = 0x166884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    // 0x166888: 0x27a700fc  addiu       $a3, $sp, 0xFC
    ctx->pc = 0x166888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x16688c: 0x24760010  addiu       $s6, $v1, 0x10
    ctx->pc = 0x16688cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x166890: 0xc04d81c  jal         func_136070
    ctx->pc = 0x166890u;
    SET_GPR_U32(ctx, 31, 0x166898u);
    ctx->pc = 0x166894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166890u;
    // 0x166894: 0x24460020  addiu       $a2, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136070u, 0x166890u, 0x166898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166898u;
label_166898:
    // 0x166898: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x166898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x16689c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16689cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1668a0: 0xc0c0fb8  jal         func_303EE0
    ctx->pc = 0x1668A0u;
    SET_GPR_U32(ctx, 31, 0x1668A8u);
    ctx->pc = 0x1668A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1668A0u;
    // 0x1668a4: 0x2484e080  addiu       $a0, $a0, -0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303EE0u, 0x1668A0u, 0x1668A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1668A8u;
label_1668a8:
    // 0x1668a8: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x1668a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x1668ac: 0xaea221a0  sw          $v0, 0x21A0($s5)
    ctx->pc = 0x1668acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8608), GPR_U32(ctx, 2));
    // 0x1668b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1668b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1668b4: 0x2484ff20  addiu       $a0, $a0, -0xE0
    ctx->pc = 0x1668b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967072));
    // 0x1668b8: 0xc0c2b28  jal         func_30ACA0
    ctx->pc = 0x1668B8u;
    SET_GPR_U32(ctx, 31, 0x1668C0u);
    ctx->pc = 0x1668BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1668B8u;
    // 0x1668bc: 0xa7a000c0  sh          $zero, 0xC0($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 192), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ACA0u, 0x1668B8u, 0x1668C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1668C0u;
label_1668c0:
    // 0x1668c0: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x1668c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x1668c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1668c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1668c8: 0x96620068  lhu         $v0, 0x68($s3)
    ctx->pc = 0x1668c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x1668cc: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1668ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_1668d0:
    // 0x1668d0: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1668d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1668d4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1668D4u;
    {
        const bool branch_taken_0x1668d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1668d4) {
            ctx->pc = 0x166930u;
            goto label_166930;
        }
    }
    ctx->pc = 0x1668DCu;
    // 0x1668dc: 0x97a200c0  lhu         $v0, 0xC0($sp)
    ctx->pc = 0x1668dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1668e0: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x1668e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1668e4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1668e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1668e8: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1668e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1668ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1668ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1668f0: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x1668f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1668f4: 0x1452000e  bne         $v0, $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x1668F4u;
    {
        const bool branch_taken_0x1668f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1668f4) {
            ctx->pc = 0x166930u;
            goto label_166930;
        }
    }
    ctx->pc = 0x1668FCu;
    // 0x1668fc: 0x97a200c0  lhu         $v0, 0xC0($sp)
    ctx->pc = 0x1668fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x166900: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x166900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x166904: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x166904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x166908: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x166908u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16690c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x16690cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x166910: 0xa7a200c0  sh          $v0, 0xC0($sp)
    ctx->pc = 0x166910u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 192), (uint16_t)GPR_U32(ctx, 2));
    // 0x166914: 0x97a200c0  lhu         $v0, 0xC0($sp)
    ctx->pc = 0x166914u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x166918: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x166918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16691c: 0x14400172  bnez        $v0, . + 4 + (0x172 << 2)
    ctx->pc = 0x16691Cu;
    {
        const bool branch_taken_0x16691c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16691c) {
            ctx->pc = 0x166EE8u;
            goto label_166ee8;
        }
    }
    ctx->pc = 0x166924u;
    // 0x166924: 0x10000170  b           . + 4 + (0x170 << 2)
    ctx->pc = 0x166924u;
    {
        const bool branch_taken_0x166924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166924u;
        // 0x166928: 0xafa000bc  sw          $zero, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166924) {
            ctx->pc = 0x166EE8u;
            goto label_166ee8;
        }
    }
    ctx->pc = 0x16692Cu;
    // 0x16692c: 0x0  nop
    ctx->pc = 0x16692cu;
    // NOP
label_166930:
    // 0x166930: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x166930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x166934: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x166934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x166938: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x166938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16693c: 0x1440016a  bnez        $v0, . + 4 + (0x16A << 2)
    ctx->pc = 0x16693Cu;
    {
        const bool branch_taken_0x16693c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16693Cu;
        // 0x166940: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16693c) {
            ctx->pc = 0x166EE8u;
            goto label_166ee8;
        }
    }
    ctx->pc = 0x166944u;
    // 0x166944: 0x24426ba0  addiu       $v0, $v0, 0x6BA0
    ctx->pc = 0x166944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27552));
    // 0x166948: 0x4be0022c  vsub.xyzw   $vf8, $vf0, $vf0
    ctx->pc = 0x166948u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x16694c: 0xdac90000  lqc2        $vf9, 0x0($s6)
    ctx->pc = 0x16694cu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x166950: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x166950u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166954: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x166954u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x166958: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x166958u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x16695c: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x16695cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x166960: 0x4be9403f  vaddaw.xyzw $ACC, $vf8, $vf9w
    ctx->pc = 0x166960u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x166964: 0x4be908fc  vmsubax.xyzw $ACC, $vf1, $vf9x
    ctx->pc = 0x166964u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x166968: 0x4be910fd  vmsubay.xyzw $ACC, $vf2, $vf9y
    ctx->pc = 0x166968u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16696c: 0x4be918fe  vmsubaz.xyzw $ACC, $vf3, $vf9z
    ctx->pc = 0x16696cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x166970: 0x4be0228f  vmsubw.xyzw $vf10, $vf4, $vf0w
    ctx->pc = 0x166970u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x166974: 0x4a0002ff  vnop
    ctx->pc = 0x166974u;
    // NOP operation, no action needed for VU0
    // 0x166978: 0x4a0002ff  vnop
    ctx->pc = 0x166978u;
    // NOP operation, no action needed for VU0
    // 0x16697c: 0x4a0002ff  vnop
    ctx->pc = 0x16697cu;
    // NOP operation, no action needed for VU0
    // 0x166980: 0x4a0002ff  vnop
    ctx->pc = 0x166980u;
    // NOP operation, no action needed for VU0
    // 0x166984: 0x4a0002ff  vnop
    ctx->pc = 0x166984u;
    // NOP operation, no action needed for VU0
    // 0x166988: 0x48448800  cfc2.ni     $a0, $vi17
    ctx->pc = 0x166988u;
    SET_GPR_U32(ctx, 4, ctx->vu0_mac_flags);
    // 0x16698c: 0x30628040  andi        $v0, $v1, 0x8040
    ctx->pc = 0x16698cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32832);
    // 0x166990: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x166990u;
    {
        const bool branch_taken_0x166990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166990u;
        // 0x166994: 0x308300f0  andi        $v1, $a0, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x166990) {
            ctx->pc = 0x1669A0u;
            goto label_1669a0;
        }
    }
    ctx->pc = 0x166998u;
    // 0x166998: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x166998u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16699c: 0x0  nop
    ctx->pc = 0x16699cu;
    // NOP
label_1669a0:
    // 0x1669a0: 0x14600151  bnez        $v1, . + 4 + (0x151 << 2)
    ctx->pc = 0x1669A0u;
    {
        const bool branch_taken_0x1669a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1669A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1669A0u;
        // 0x1669a4: 0x3c060069  lui         $a2, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1669a0) {
            ctx->pc = 0x166EE8u;
            goto label_166ee8;
        }
    }
    ctx->pc = 0x1669A8u;
    // 0x1669a8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1669a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1669ac: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1669acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1669b0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1669b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1669b4: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x1669b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x1669b8: 0x34471cec  ori         $a3, $v0, 0x1CEC
    ctx->pc = 0x1669b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7404);
    // 0x1669bc: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x1669BCu;
    SET_GPR_U32(ctx, 31, 0x1669C4u);
    ctx->pc = 0x1669C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1669BCu;
    // 0x1669c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x1669BCu, 0x1669C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1669C4u;
label_1669c4:
    // 0x1669c4: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1669c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1669c8: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x1669c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1669cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1669CCu;
    {
        const bool branch_taken_0x1669cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1669D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1669CCu;
        // 0x1669d0: 0x8fb700e8  lw          $s7, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1669cc) {
            ctx->pc = 0x1669E0u;
            goto label_1669e0;
        }
    }
    ctx->pc = 0x1669D4u;
    // 0x1669d4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1669D4u;
    {
        const bool branch_taken_0x1669d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1669D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1669D4u;
        // 0x1669d8: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1669d4) {
            ctx->pc = 0x166A20u;
            goto label_166a20;
        }
    }
    ctx->pc = 0x1669DCu;
    // 0x1669dc: 0x0  nop
    ctx->pc = 0x1669dcu;
    // NOP
label_1669e0:
    // 0x1669e0: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1669e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1669e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1669E4u;
    {
        const bool branch_taken_0x1669e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1669E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1669E4u;
        // 0x1669e8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1669e4) {
            ctx->pc = 0x1669F8u;
            goto label_1669f8;
        }
    }
    ctx->pc = 0x1669ECu;
    // 0x1669ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1669ECu;
    {
        const bool branch_taken_0x1669ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1669ec) {
            ctx->pc = 0x166A00u;
            goto label_166a00;
        }
    }
    ctx->pc = 0x1669F4u;
    // 0x1669f4: 0x0  nop
    ctx->pc = 0x1669f4u;
    // NOP
label_1669f8:
    // 0x1669f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1669f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1669fc: 0x0  nop
    ctx->pc = 0x1669fcu;
    // NOP
label_166a00:
    // 0x166a00: 0x8ea221a0  lw          $v0, 0x21A0($s5)
    ctx->pc = 0x166a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8608)));
    // 0x166a04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x166A04u;
    {
        const bool branch_taken_0x166a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A04u;
        // 0x166a08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a04) {
            ctx->pc = 0x166A20u;
            goto label_166a20;
        }
    }
    ctx->pc = 0x166A0Cu;
    // 0x166a0c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x166a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166a10: 0xc059ce8  jal         func_1673A0
    ctx->pc = 0x166A10u;
    SET_GPR_U32(ctx, 31, 0x166A18u);
    ctx->pc = 0x166A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166A10u;
    // 0x166a14: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1673A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1673A0u, 0x166A10u, 0x166A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166A18u;
label_166a18:
    // 0x166a18: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x166a18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x166a1c: 0x0  nop
    ctx->pc = 0x166a1cu;
    // NOP
label_166a20:
    // 0x166a20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x166a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166a24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x166a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166a28: 0xc0a874c  jal         func_2A1D30
    ctx->pc = 0x166A28u;
    SET_GPR_U32(ctx, 31, 0x166A30u);
    ctx->pc = 0x166A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166A28u;
    // 0x166a2c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1D30u, 0x166A28u, 0x166A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166A30u;
label_166a30:
    // 0x166a30: 0x6e10003  bgez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x166A30u;
    {
        const bool branch_taken_0x166a30 = (GPR_S64(ctx, 23) >= 0);
        if (branch_taken_0x166a30) {
            ctx->pc = 0x166A40u;
            goto label_166a40;
        }
    }
    ctx->pc = 0x166A38u;
    // 0x166a38: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x166a38u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166a3c: 0x0  nop
    ctx->pc = 0x166a3cu;
    // NOP
label_166a40:
    // 0x166a40: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x166a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x166a44: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x166a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x166a48: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x166A48u;
    {
        const bool branch_taken_0x166a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166a48) {
            ctx->pc = 0x166A78u;
            goto label_166a78;
        }
    }
    ctx->pc = 0x166A50u;
    // 0x166a50: 0x96c7002e  lhu         $a3, 0x2E($s6)
    ctx->pc = 0x166a50u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 46)));
    // 0x166a54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x166a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166a58: 0x86cb002c  lh          $t3, 0x2C($s6)
    ctx->pc = 0x166a58u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x166a5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x166a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166a60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x166a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166a64: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x166a64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166a68: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x166a68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x166a6c: 0xc0a8724  jal         func_2A1C90
    ctx->pc = 0x166A6Cu;
    SET_GPR_U32(ctx, 31, 0x166A74u);
    ctx->pc = 0x166A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166A6Cu;
    // 0x166a70: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1C90u, 0x166A6Cu, 0x166A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166A74u;
label_166a74:
    // 0x166a74: 0x0  nop
    ctx->pc = 0x166a74u;
    // NOP
label_166a78:
    // 0x166a78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x166a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166a7c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x166a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166a80: 0xc0a8920  jal         func_2A2480
    ctx->pc = 0x166A80u;
    SET_GPR_U32(ctx, 31, 0x166A88u);
    ctx->pc = 0x166A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166A80u;
    // 0x166a84: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2480u, 0x166A80u, 0x166A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166A88u;
label_166a88:
    // 0x166a88: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x166a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x166a8c: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x166a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x166a90: 0x104000c9  beqz        $v0, . + 4 + (0xC9 << 2)
    ctx->pc = 0x166A90u;
    {
        const bool branch_taken_0x166a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A90u;
        // 0x166a94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a90) {
            ctx->pc = 0x166DB8u;
            goto label_166db8;
        }
    }
    ctx->pc = 0x166A98u;
    // 0x166a98: 0xc0a8274  jal         func_2A09D0
    ctx->pc = 0x166A98u;
    SET_GPR_U32(ctx, 31, 0x166AA0u);
    ctx->pc = 0x166A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166A98u;
    // 0x166a9c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A09D0u, 0x166A98u, 0x166AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166AA0u;
label_166aa0:
    // 0x166aa0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x166aa0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166aa4: 0x13c00100  beqz        $fp, . + 4 + (0x100 << 2)
    ctx->pc = 0x166AA4u;
    {
        const bool branch_taken_0x166aa4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x166aa4) {
            ctx->pc = 0x166EA8u;
            goto label_166ea8;
        }
    }
    ctx->pc = 0x166AACu;
    // 0x166aac: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x166aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x166ab0: 0x92c40018  lbu         $a0, 0x18($s6)
    ctx->pc = 0x166ab0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x166ab4: 0x8ca20150  lw          $v0, 0x150($a1)
    ctx->pc = 0x166ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x166ab8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x166ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x166abc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x166abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x166ac0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x166ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x166ac4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x166ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x166ac8: 0x920200d0  lbu         $v0, 0xD0($s0)
    ctx->pc = 0x166ac8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x166acc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x166ACCu;
    {
        const bool branch_taken_0x166acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166acc) {
            ctx->pc = 0x166B08u;
            goto label_166b08;
        }
    }
    ctx->pc = 0x166AD4u;
    // 0x166ad4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x166ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x166ad8: 0x27c40010  addiu       $a0, $fp, 0x10
    ctx->pc = 0x166ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x166adc: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x166adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x166ae0: 0xc04144e  jal         func_105138
    ctx->pc = 0x166AE0u;
    SET_GPR_U32(ctx, 31, 0x166AE8u);
    ctx->pc = 0x166AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166AE0u;
    // 0x166ae4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x166AE0u, 0x166AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166AE8u;
label_166ae8:
    // 0x166ae8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x166ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x166aec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x166aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166af0: 0x27c40050  addiu       $a0, $fp, 0x50
    ctx->pc = 0x166af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x166af4: 0xc04144e  jal         func_105138
    ctx->pc = 0x166AF4u;
    SET_GPR_U32(ctx, 31, 0x166AFCu);
    ctx->pc = 0x166AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166AF4u;
    // 0x166af8: 0x24a569a0  addiu       $a1, $a1, 0x69A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x166AF4u, 0x166AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166AFCu;
label_166afc:
    // 0x166afc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x166AFCu;
    {
        const bool branch_taken_0x166afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166afc) {
            ctx->pc = 0x166B80u;
            goto label_166b80;
        }
    }
    ctx->pc = 0x166B04u;
    // 0x166b04: 0x0  nop
    ctx->pc = 0x166b04u;
    // NOP
label_166b08:
    // 0x166b08: 0x8cb00168  lw          $s0, 0x168($a1)
    ctx->pc = 0x166b08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 360)));
    // 0x166b0c: 0x120000e6  beqz        $s0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x166B0Cu;
    {
        const bool branch_taken_0x166b0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x166b0c) {
            ctx->pc = 0x166EA8u;
            goto label_166ea8;
        }
    }
    ctx->pc = 0x166B14u;
    // 0x166b14: 0x8ca3016c  lw          $v1, 0x16C($a1)
    ctx->pc = 0x166b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 364)));
    // 0x166b18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x166B18u;
    {
        const bool branch_taken_0x166b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B18u;
        // 0x166b1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b18) {
            ctx->pc = 0x166B38u;
            goto label_166b38;
        }
    }
    ctx->pc = 0x166B20u;
label_166b20:
    // 0x166b20: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x166b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x166b24: 0x10520008  beq         $v0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x166B24u;
    {
        const bool branch_taken_0x166b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x166b24) {
            ctx->pc = 0x166B48u;
            goto label_166b48;
        }
    }
    ctx->pc = 0x166B2Cu;
    // 0x166b2c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x166b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x166b30: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x166b30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x166b34: 0x0  nop
    ctx->pc = 0x166b34u;
    // NOP
label_166b38:
    // 0x166b38: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x166b38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x166b3c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x166B3Cu;
    {
        const bool branch_taken_0x166b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166b3c) {
            ctx->pc = 0x166B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166b20;
        }
    }
    ctx->pc = 0x166B44u;
    // 0x166b44: 0x0  nop
    ctx->pc = 0x166b44u;
    // NOP
label_166b48:
    // 0x166b48: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x166b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x166b4c: 0x8c42016c  lw          $v0, 0x16C($v0)
    ctx->pc = 0x166b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 364)));
    // 0x166b50: 0x108200d5  beq         $a0, $v0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x166B50u;
    {
        const bool branch_taken_0x166b50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x166B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B50u;
        // 0x166b54: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b50) {
            ctx->pc = 0x166EA8u;
            goto label_166ea8;
        }
    }
    ctx->pc = 0x166B58u;
    // 0x166b58: 0x27c40010  addiu       $a0, $fp, 0x10
    ctx->pc = 0x166b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x166b5c: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x166b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x166b60: 0xc04144e  jal         func_105138
    ctx->pc = 0x166B60u;
    SET_GPR_U32(ctx, 31, 0x166B68u);
    ctx->pc = 0x166B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166B60u;
    // 0x166b64: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x166B60u, 0x166B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166B68u;
label_166b68:
    // 0x166b68: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x166b68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x166b6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x166b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166b70: 0x27c40050  addiu       $a0, $fp, 0x50
    ctx->pc = 0x166b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x166b74: 0xc04144e  jal         func_105138
    ctx->pc = 0x166B74u;
    SET_GPR_U32(ctx, 31, 0x166B7Cu);
    ctx->pc = 0x166B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166B74u;
    // 0x166b78: 0x24a569a0  addiu       $a1, $a1, 0x69A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x166B74u, 0x166B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166B7Cu;
label_166b7c:
    // 0x166b7c: 0x0  nop
    ctx->pc = 0x166b7cu;
    // NOP
label_166b80:
    // 0x166b80: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x166b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x166b84: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x166b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x166b88: 0xc05e360  jal         func_178D80
    ctx->pc = 0x166B88u;
    SET_GPR_U32(ctx, 31, 0x166B90u);
    ctx->pc = 0x166B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166B88u;
    // 0x166b8c: 0x24050140  addiu       $a1, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x166B88u, 0x166B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166B90u;
label_166b90:
    // 0x166b90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x166b90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166b94: 0x120000c4  beqz        $s0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x166B94u;
    {
        const bool branch_taken_0x166b94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x166B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B94u;
        // 0x166b98: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b94) {
            ctx->pc = 0x166EA8u;
            goto label_166ea8;
        }
    }
    ctx->pc = 0x166B9Cu;
    // 0x166b9c: 0x3c026c08  lui         $v0, 0x6C08
    ctx->pc = 0x166b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27656 << 16));
    // 0x166ba0: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x166ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x166ba4: 0x344203f0  ori         $v0, $v0, 0x3F0
    ctx->pc = 0x166ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1008);
    // 0x166ba8: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x166ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x166bac: 0x26090010  addiu       $t1, $s0, 0x10
    ctx->pc = 0x166bacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x166bb0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x166bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x166bb4: 0x27c80050  addiu       $t0, $fp, 0x50
    ctx->pc = 0x166bb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x166bb8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x166bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x166bbc: 0x79070000  lq          $a3, 0x0($t0)
    ctx->pc = 0x166bbcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x166bc0: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x166bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x166bc4: 0x8fae00b8  lw          $t6, 0xB8($sp)
    ctx->pc = 0x166bc4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x166bc8: 0x2213c  dsll32      $a0, $v0, 4
    ctx->pc = 0x166bc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 4));
    // 0x166bcc: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x166bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x166bd0: 0x27c50010  addiu       $a1, $fp, 0x10
    ctx->pc = 0x166bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x166bd4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x166bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x166bd8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x166bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x166bdc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x166bdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x166be0: 0x344c0008  ori         $t4, $v0, 0x8
    ctx->pc = 0x166be0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x166be4: 0x3c026c08  lui         $v0, 0x6C08
    ctx->pc = 0x166be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27656 << 16));
    // 0x166be8: 0x3c0f0069  lui         $t7, 0x69
    ctx->pc = 0x166be8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)105 << 16));
    // 0x166bec: 0x344b03f0  ori         $t3, $v0, 0x3F0
    ctx->pc = 0x166becu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1008);
    // 0x166bf0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x166bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x166bf4: 0x7d270000  sq          $a3, 0x0($t1)
    ctx->pc = 0x166bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 7));
    // 0x166bf8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x166bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x166bfc: 0x8fae00b4  lw          $t6, 0xB4($sp)
    ctx->pc = 0x166bfcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x166c00: 0x836825  or          $t5, $a0, $v1
    ctx->pc = 0x166c00u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x166c04: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x166c04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x166c08: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x166c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x166c0c: 0x925023  subu        $t2, $a0, $s2
    ctx->pc = 0x166c0cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x166c10: 0x79070010  lq          $a3, 0x10($t0)
    ctx->pc = 0x166c10u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x166c14: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x166c14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x166c18: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x166c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x166c1c: 0x244269a0  addiu       $v0, $v0, 0x69A0
    ctx->pc = 0x166c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27040));
    // 0x166c20: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x166c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x166c24: 0x25ef6a20  addiu       $t7, $t7, 0x6A20
    ctx->pc = 0x166c24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 27168));
    // 0x166c28: 0x261800f0  addiu       $t8, $s0, 0xF0
    ctx->pc = 0x166c28u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x166c2c: 0x8fae00b0  lw          $t6, 0xB0($sp)
    ctx->pc = 0x166c2cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x166c30: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x166c30u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x166c34: 0x11f080  sll         $fp, $s1, 2
    ctx->pc = 0x166c34u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x166c38: 0x7fa400a0  sq          $a0, 0xA0($sp)
    ctx->pc = 0x166c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
    // 0x166c3c: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x166c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x166c40: 0x922023  subu        $a0, $a0, $s2
    ctx->pc = 0x166c40u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x166c44: 0x4c900  sll         $t9, $a0, 4
    ctx->pc = 0x166c44u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x166c48: 0x7d270010  sq          $a3, 0x10($t1)
    ctx->pc = 0x166c48u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), GPR_VEC(ctx, 7));
    // 0x166c4c: 0x79070020  lq          $a3, 0x20($t0)
    ctx->pc = 0x166c4cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x166c50: 0x7d270020  sq          $a3, 0x20($t1)
    ctx->pc = 0x166c50u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 32), GPR_VEC(ctx, 7));
    // 0x166c54: 0x79070030  lq          $a3, 0x30($t0)
    ctx->pc = 0x166c54u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x166c58: 0x7d270030  sq          $a3, 0x30($t1)
    ctx->pc = 0x166c58u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 48), GPR_VEC(ctx, 7));
    // 0x166c5c: 0x78ae0000  lq          $t6, 0x0($a1)
    ctx->pc = 0x166c5cu;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x166c60: 0x7cce0000  sq          $t6, 0x0($a2)
    ctx->pc = 0x166c60u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 14));
    // 0x166c64: 0x78ae0010  lq          $t6, 0x10($a1)
    ctx->pc = 0x166c64u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x166c68: 0x7cce0010  sq          $t6, 0x10($a2)
    ctx->pc = 0x166c68u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 14));
    // 0x166c6c: 0x78ae0020  lq          $t6, 0x20($a1)
    ctx->pc = 0x166c6cu;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x166c70: 0x7cce0020  sq          $t6, 0x20($a2)
    ctx->pc = 0x166c70u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 14));
    // 0x166c74: 0x78ae0030  lq          $t6, 0x30($a1)
    ctx->pc = 0x166c74u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x166c78: 0x7cce0030  sq          $t6, 0x30($a2)
    ctx->pc = 0x166c78u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 14));
    // 0x166c7c: 0xfe0d0090  sd          $t5, 0x90($s0)
    ctx->pc = 0x166c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 144), GPR_U64(ctx, 13));
    // 0x166c80: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x166c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x166c84: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x166c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x166c88: 0xfe0c00a0  sd          $t4, 0xA0($s0)
    ctx->pc = 0x166c88u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 160), GPR_U64(ctx, 12));
    // 0x166c8c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x166c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x166c90: 0xae0b00ac  sw          $t3, 0xAC($s0)
    ctx->pc = 0x166c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 11));
    // 0x166c94: 0x784e0000  lq          $t6, 0x0($v0)
    ctx->pc = 0x166c94u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166c98: 0x7c6e0000  sq          $t6, 0x0($v1)
    ctx->pc = 0x166c98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 14));
    // 0x166c9c: 0x784e0010  lq          $t6, 0x10($v0)
    ctx->pc = 0x166c9cu;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x166ca0: 0x7c6e0010  sq          $t6, 0x10($v1)
    ctx->pc = 0x166ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 14));
    // 0x166ca4: 0x784e0020  lq          $t6, 0x20($v0)
    ctx->pc = 0x166ca4u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x166ca8: 0x7c6e0020  sq          $t6, 0x20($v1)
    ctx->pc = 0x166ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 14));
    // 0x166cac: 0x784e0030  lq          $t6, 0x30($v0)
    ctx->pc = 0x166cacu;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x166cb0: 0x7c6e0030  sq          $t6, 0x30($v1)
    ctx->pc = 0x166cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 14));
    // 0x166cb4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x166cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x166cb8: 0x79ee0000  lq          $t6, 0x0($t7)
    ctx->pc = 0x166cb8u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x166cbc: 0x7f0e0000  sq          $t6, 0x0($t8)
    ctx->pc = 0x166cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 24), 0), GPR_VEC(ctx, 14));
    // 0x166cc0: 0x79ee0010  lq          $t6, 0x10($t7)
    ctx->pc = 0x166cc0u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 15), 16)));
    // 0x166cc4: 0x7f0e0010  sq          $t6, 0x10($t8)
    ctx->pc = 0x166cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 16), GPR_VEC(ctx, 14));
    // 0x166cc8: 0x79ee0020  lq          $t6, 0x20($t7)
    ctx->pc = 0x166cc8u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 15), 32)));
    // 0x166ccc: 0x7f0e0020  sq          $t6, 0x20($t8)
    ctx->pc = 0x166cccu;
    WRITE128(ADD32(GPR_U32(ctx, 24), 32), GPR_VEC(ctx, 14));
    // 0x166cd0: 0x79ee0030  lq          $t6, 0x30($t7)
    ctx->pc = 0x166cd0u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 15), 48)));
    // 0x166cd4: 0x7f0e0030  sq          $t6, 0x30($t8)
    ctx->pc = 0x166cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 48), GPR_VEC(ctx, 14));
    // 0x166cd8: 0xfe020130  sd          $v0, 0x130($s0)
    ctx->pc = 0x166cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 304), GPR_U64(ctx, 2));
    // 0x166cdc: 0xae000138  sw          $zero, 0x138($s0)
    ctx->pc = 0x166cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
    // 0x166ce0: 0xae00013c  sw          $zero, 0x13C($s0)
    ctx->pc = 0x166ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 0));
    // 0x166ce4: 0x8e62007c  lw          $v0, 0x7C($s3)
    ctx->pc = 0x166ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x166ce8: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x166ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x166cec: 0x1422821  addu        $a1, $t2, $v0
    ctx->pc = 0x166cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x166cf0: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x166cf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x166cf4: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x166cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x166cf8: 0x3231021  addu        $v0, $t9, $v1
    ctx->pc = 0x166cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x166cfc: 0x8ca50078  lw          $a1, 0x78($a1)
    ctx->pc = 0x166cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 120)));
    // 0x166d00: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x166d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x166d04: 0x8c460058  lw          $a2, 0x58($v0)
    ctx->pc = 0x166d04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x166d08: 0xc05e480  jal         func_179200
    ctx->pc = 0x166D08u;
    SET_GPR_U32(ctx, 31, 0x166D10u);
    ctx->pc = 0x166D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166D08u;
    // 0x166d0c: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179200u, 0x166D08u, 0x166D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166D10u;
label_166d10:
    // 0x166d10: 0x8ec3001c  lw          $v1, 0x1C($s6)
    ctx->pc = 0x166d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x166d14: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x166d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x166d18: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x166D18u;
    {
        const bool branch_taken_0x166d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D18u;
        // 0x166d1c: 0x30621000  andi        $v0, $v1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d18) {
            ctx->pc = 0x166D90u;
            goto label_166d90;
        }
    }
    ctx->pc = 0x166D20u;
    // 0x166d20: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x166D20u;
    {
        const bool branch_taken_0x166d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D20u;
        // 0x166d24: 0x3c040069  lui         $a0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d20) {
            ctx->pc = 0x166D48u;
            goto label_166d48;
        }
    }
    ctx->pc = 0x166D28u;
    // 0x166d28: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x166d28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d2c: 0x24846d20  addiu       $a0, $a0, 0x6D20
    ctx->pc = 0x166d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    // 0x166d30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x166d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d34: 0xc04c0c8  jal         func_130320
    ctx->pc = 0x166D34u;
    SET_GPR_U32(ctx, 31, 0x166D3Cu);
    ctx->pc = 0x166D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166D34u;
    // 0x166d38: 0x26060130  addiu       $a2, $s0, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130320u, 0x166D34u, 0x166D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166D3Cu;
label_166d3c:
    // 0x166d3c: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x166D3Cu;
    {
        const bool branch_taken_0x166d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166d3c) {
            ctx->pc = 0x166EE8u;
            goto label_166ee8;
        }
    }
    ctx->pc = 0x166D44u;
    // 0x166d44: 0x0  nop
    ctx->pc = 0x166d44u;
    // NOP
label_166d48:
    // 0x166d48: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x166d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x166d4c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x166D4Cu;
    {
        const bool branch_taken_0x166d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D4Cu;
        // 0x166d50: 0x3c040069  lui         $a0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d4c) {
            ctx->pc = 0x166D70u;
            goto label_166d70;
        }
    }
    ctx->pc = 0x166D54u;
    // 0x166d54: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x166d54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d58: 0x24846d20  addiu       $a0, $a0, 0x6D20
    ctx->pc = 0x166d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    // 0x166d5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x166d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d60: 0xc04c0d4  jal         func_130350
    ctx->pc = 0x166D60u;
    SET_GPR_U32(ctx, 31, 0x166D68u);
    ctx->pc = 0x166D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166D60u;
    // 0x166d64: 0x26060130  addiu       $a2, $s0, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130350u, 0x166D60u, 0x166D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166D68u;
label_166d68:
    // 0x166d68: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x166D68u;
    {
        const bool branch_taken_0x166d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166d68) {
            ctx->pc = 0x166EE8u;
            goto label_166ee8;
        }
    }
    ctx->pc = 0x166D70u;
label_166d70:
    // 0x166d70: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x166d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x166d74: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x166d74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d78: 0x24846d20  addiu       $a0, $a0, 0x6D20
    ctx->pc = 0x166d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    // 0x166d7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x166d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d80: 0xc04c0e4  jal         func_130390
    ctx->pc = 0x166D80u;
    SET_GPR_U32(ctx, 31, 0x166D88u);
    ctx->pc = 0x166D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166D80u;
    // 0x166d84: 0x26060130  addiu       $a2, $s0, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130390u, 0x166D80u, 0x166D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166D88u;
label_166d88:
    // 0x166d88: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x166D88u;
    {
        const bool branch_taken_0x166d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166d88) {
            ctx->pc = 0x166EE8u;
            goto label_166ee8;
        }
    }
    ctx->pc = 0x166D90u;
label_166d90:
    // 0x166d90: 0x111200  sll         $v0, $s1, 8
    ctx->pc = 0x166d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 8));
    // 0x166d94: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x166d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x166d98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x166d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d9c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x166d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x166da0: 0x26060130  addiu       $a2, $s0, 0x130
    ctx->pc = 0x166da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x166da4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x166da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x166da8: 0xc05e480  jal         func_179200
    ctx->pc = 0x166DA8u;
    SET_GPR_U32(ctx, 31, 0x166DB0u);
    ctx->pc = 0x166DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166DA8u;
    // 0x166dac: 0x24440180  addiu       $a0, $v0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179200u, 0x166DA8u, 0x166DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166DB0u;
label_166db0:
    // 0x166db0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x166DB0u;
    {
        const bool branch_taken_0x166db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166db0) {
            ctx->pc = 0x166EE8u;
            goto label_166ee8;
        }
    }
    ctx->pc = 0x166DB8u;
label_166db8:
    // 0x166db8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x166db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x166dbc: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x166DBCu;
    {
        const bool branch_taken_0x166dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166DBCu;
        // 0x166dc0: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166dbc) {
            ctx->pc = 0x166EA8u;
            goto label_166ea8;
        }
    }
    ctx->pc = 0x166DC4u;
    // 0x166dc4: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x166dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x166dc8: 0xc05e360  jal         func_178D80
    ctx->pc = 0x166DC8u;
    SET_GPR_U32(ctx, 31, 0x166DD0u);
    ctx->pc = 0x166DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166DC8u;
    // 0x166dcc: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x166DC8u, 0x166DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166DD0u;
label_166dd0:
    // 0x166dd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x166dd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166dd4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x166dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166dd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x166dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166ddc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x166ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166de0: 0xc0a8ab8  jal         func_2A2AE0
    ctx->pc = 0x166DE0u;
    SET_GPR_U32(ctx, 31, 0x166DE8u);
    ctx->pc = 0x166DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166DE0u;
    // 0x166de4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2AE0u, 0x166DE0u, 0x166DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166DE8u;
label_166de8:
    // 0x166de8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x166de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x166dec: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x166decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x166df0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x166DF0u;
    {
        const bool branch_taken_0x166df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166DF0u;
        // 0x166df4: 0x30620005  andi        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x166df0) {
            ctx->pc = 0x166E08u;
            goto label_166e08;
        }
    }
    ctx->pc = 0x166DF8u;
    // 0x166df8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x166DF8u;
    {
        const bool branch_taken_0x166df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166df8) {
            ctx->pc = 0x166E08u;
            goto label_166e08;
        }
    }
    ctx->pc = 0x166E00u;
    // 0x166e00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166e04: 0xa2820002  sb          $v0, 0x2($s4)
    ctx->pc = 0x166e04u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 2));
label_166e08:
    // 0x166e08: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x166e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x166e0c: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x166e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x166e10: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x166e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x166e14: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x166e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x166e18: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x166e18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x166e1c: 0x8ec3001c  lw          $v1, 0x1C($s6)
    ctx->pc = 0x166e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x166e20: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x166e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x166e24: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x166E24u;
    {
        const bool branch_taken_0x166e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166e24) {
            ctx->pc = 0x166E50u;
            goto label_166e50;
        }
    }
    ctx->pc = 0x166E2Cu;
    // 0x166e2c: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x166e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x166e30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x166e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e34: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x166e34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e38: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x166e38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x166e3c: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x166e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x166e40: 0xc04c0c8  jal         func_130320
    ctx->pc = 0x166E40u;
    SET_GPR_U32(ctx, 31, 0x166E48u);
    ctx->pc = 0x166E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166E40u;
    // 0x166e44: 0x24846d20  addiu       $a0, $a0, 0x6D20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130320u, 0x166E40u, 0x166E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166E48u;
label_166e48:
    // 0x166e48: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x166E48u;
    {
        const bool branch_taken_0x166e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166e48) {
            ctx->pc = 0x166EE8u;
            goto label_166ee8;
        }
    }
    ctx->pc = 0x166E50u;
label_166e50:
    // 0x166e50: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x166e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x166e54: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x166E54u;
    {
        const bool branch_taken_0x166e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166e54) {
            ctx->pc = 0x166E80u;
            goto label_166e80;
        }
    }
    ctx->pc = 0x166E5Cu;
    // 0x166e5c: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x166e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x166e60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x166e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e64: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x166e64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e68: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x166e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x166e6c: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x166e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x166e70: 0xc04c0d4  jal         func_130350
    ctx->pc = 0x166E70u;
    SET_GPR_U32(ctx, 31, 0x166E78u);
    ctx->pc = 0x166E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166E70u;
    // 0x166e74: 0x24846d20  addiu       $a0, $a0, 0x6D20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130350u, 0x166E70u, 0x166E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166E78u;
label_166e78:
    // 0x166e78: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x166E78u;
    {
        const bool branch_taken_0x166e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166e78) {
            ctx->pc = 0x166EE8u;
            goto label_166ee8;
        }
    }
    ctx->pc = 0x166E80u;
label_166e80:
    // 0x166e80: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x166e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x166e84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x166e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e88: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x166e88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e8c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x166e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x166e90: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x166e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x166e94: 0xc04c0e4  jal         func_130390
    ctx->pc = 0x166E94u;
    SET_GPR_U32(ctx, 31, 0x166E9Cu);
    ctx->pc = 0x166E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166E94u;
    // 0x166e98: 0x24846d20  addiu       $a0, $a0, 0x6D20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130390u, 0x166E94u, 0x166E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166E9Cu;
label_166e9c:
    // 0x166e9c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x166E9Cu;
    {
        const bool branch_taken_0x166e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166e9c) {
            ctx->pc = 0x166EE8u;
            goto label_166ee8;
        }
    }
    ctx->pc = 0x166EA4u;
    // 0x166ea4: 0x0  nop
    ctx->pc = 0x166ea4u;
    // NOP
label_166ea8:
    // 0x166ea8: 0x111200  sll         $v0, $s1, 8
    ctx->pc = 0x166ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 8));
    // 0x166eac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x166eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x166eb0: 0x8e65007c  lw          $a1, 0x7C($s3)
    ctx->pc = 0x166eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x166eb4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x166eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x166eb8: 0x121140  sll         $v0, $s2, 5
    ctx->pc = 0x166eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x166ebc: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x166ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x166ec0: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x166ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x166ec4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x166ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x166ec8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x166ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x166ecc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x166eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x166ed0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x166ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x166ed4: 0x8c450078  lw          $a1, 0x78($v0)
    ctx->pc = 0x166ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x166ed8: 0x8c460058  lw          $a2, 0x58($v0)
    ctx->pc = 0x166ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x166edc: 0xc05e480  jal         func_179200
    ctx->pc = 0x166EDCu;
    SET_GPR_U32(ctx, 31, 0x166EE4u);
    ctx->pc = 0x166EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166EDCu;
    // 0x166ee0: 0x24840180  addiu       $a0, $a0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179200u, 0x166EDCu, 0x166EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166EE4u;
label_166ee4:
    // 0x166ee4: 0x0  nop
    ctx->pc = 0x166ee4u;
    // NOP
label_166ee8:
    // 0x166ee8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x166ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x166eec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x166eecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x166ef0: 0x269401f0  addiu       $s4, $s4, 0x1F0
    ctx->pc = 0x166ef0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 496));
    // 0x166ef4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x166ef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x166ef8: 0x1440fe75  bnez        $v0, . + 4 + (-0x18B << 2)
    ctx->pc = 0x166EF8u;
    {
        const bool branch_taken_0x166ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166EF8u;
        // 0x166efc: 0x26d60050  addiu       $s6, $s6, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166ef8) {
            ctx->pc = 0x1668D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1668d0;
        }
    }
    ctx->pc = 0x166F00u;
    // 0x166f00: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x166f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x166f04: 0x111200  sll         $v0, $s1, 8
    ctx->pc = 0x166f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 8));
    // 0x166f08: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x166f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x166f0c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x166f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x166f10: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x166f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x166f14: 0xc059d18  jal         func_167460
    ctx->pc = 0x166F14u;
    SET_GPR_U32(ctx, 31, 0x166F1Cu);
    ctx->pc = 0x166F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F14u;
    // 0x166f18: 0x24450180  addiu       $a1, $v0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167460u, 0x166F14u, 0x166F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F1Cu;
label_166f1c:
    // 0x166f1c: 0x8ea721a4  lw          $a3, 0x21A4($s5)
    ctx->pc = 0x166f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8612)));
    // 0x166f20: 0x111200  sll         $v0, $s1, 8
    ctx->pc = 0x166f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 8));
    // 0x166f24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x166f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x166f28: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x166f28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x166f2c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x166f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x166f30: 0x24846d20  addiu       $a0, $a0, 0x6D20
    ctx->pc = 0x166f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    // 0x166f34: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x166f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x166f38: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x166f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x166f3c: 0xc04c090  jal         func_130240
    ctx->pc = 0x166F3Cu;
    SET_GPR_U32(ctx, 31, 0x166F44u);
    ctx->pc = 0x166F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F3Cu;
    // 0x166f40: 0x24461180  addiu       $a2, $v0, 0x1180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130240u, 0x166F3Cu, 0x166F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F44u;
label_166f44:
    // 0x166f44: 0x0  nop
    ctx->pc = 0x166f44u;
    // NOP
label_166f48:
    // 0x166f48: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x166f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x166f4c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x166f4cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x166f50: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x166f50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x166f54: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x166f54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x166f58: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x166f58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x166f5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x166f5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166f60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x166f60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166f64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x166f64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166f68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x166f68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166f6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166f6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166f70: 0x3e00008  jr          $ra
    ctx->pc = 0x166F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F70u;
        // 0x166f74: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166F78u;
}
