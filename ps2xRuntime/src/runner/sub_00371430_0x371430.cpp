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

// Function: sub_00371430
// Address: 0x371430 - 0x371774
void sub_00371430_0x371430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371430_0x371430");
#endif

    switch (ctx->pc) {
        case 0x3714f4u: goto label_3714f4;
        case 0x371504u: goto label_371504;
        case 0x371510u: goto label_371510;
        case 0x37151cu: goto label_37151c;
        case 0x37153cu: goto label_37153c;
        case 0x371548u: goto label_371548;
        case 0x371554u: goto label_371554;
        case 0x371560u: goto label_371560;
        case 0x371580u: goto label_371580;
        case 0x37158cu: goto label_37158c;
        case 0x371598u: goto label_371598;
        case 0x3715a4u: goto label_3715a4;
        case 0x3715c4u: goto label_3715c4;
        case 0x371600u: goto label_371600;
        case 0x371630u: goto label_371630;
        case 0x371658u: goto label_371658;
        case 0x37168cu: goto label_37168c;
        case 0x3716c8u: goto label_3716c8;
        case 0x3716f0u: goto label_3716f0;
        case 0x371710u: goto label_371710;
        case 0x37173cu: goto label_37173c;
        default: break;
    }

    ctx->pc = 0x371430u;

    // 0x371430: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x371430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x371434: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x371434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x371438: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x371438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x37143c: 0x240201f0  addiu       $v0, $zero, 0x1F0
    ctx->pc = 0x37143cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
    // 0x371440: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x371440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x371444: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x371444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x371448: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x371448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x37144c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x37144cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x371450: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x371450u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371454: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x371454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x371458: 0x55b823  subu        $s7, $v0, $s5
    ctx->pc = 0x371458u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x37145c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37145cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x371460: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x371460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x371464: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x371464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x371468: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x371468u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37146c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37146cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x371470: 0x26b3005a  addiu       $s3, $s5, 0x5A
    ctx->pc = 0x371470u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 90));
    // 0x371474: 0x9023fc8d  lbu         $v1, -0x373($at)
    ctx->pc = 0x371474u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966413)));
    // 0x371478: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x371478u;
    {
        const bool branch_taken_0x371478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371478u;
        // 0x37147c: 0x26b20102  addiu       $s2, $s5, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371478) {
            ctx->pc = 0x3714A8u;
            goto label_3714a8;
        }
    }
    ctx->pc = 0x371480u;
    // 0x371480: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x371480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x371484: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x371484u;
    {
        const bool branch_taken_0x371484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x371488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371484u;
        // 0x371488: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371484) {
            ctx->pc = 0x3714A8u;
            goto label_3714a8;
        }
    }
    ctx->pc = 0x37148Cu;
    // 0x37148c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37148Cu;
    {
        const bool branch_taken_0x37148c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x37148c) {
            ctx->pc = 0x3714A8u;
            goto label_3714a8;
        }
    }
    ctx->pc = 0x371494u;
    // 0x371494: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x371494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x371498: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x371498u;
    {
        const bool branch_taken_0x371498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x371498) {
            ctx->pc = 0x3714A8u;
            goto label_3714a8;
        }
    }
    ctx->pc = 0x3714A0u;
    // 0x3714a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3714A0u;
    {
        const bool branch_taken_0x3714a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3714a0) {
            ctx->pc = 0x3714B0u;
            goto label_3714b0;
        }
    }
    ctx->pc = 0x3714A8u;
label_3714a8:
    // 0x3714a8: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x3714a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x3714ac: 0x0  nop
    ctx->pc = 0x3714acu;
    // NOP
label_3714b0:
    // 0x3714b0: 0x24c20022  addiu       $v0, $a2, 0x22
    ctx->pc = 0x3714b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 34));
    // 0x3714b4: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x3714b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x3714b8: 0x27b00094  addiu       $s0, $sp, 0x94
    ctx->pc = 0x3714b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x3714bc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x3714bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3714c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3714c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3714c4: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x3714c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x3714c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3714c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3714cc: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x3714ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x3714d0: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x3714d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x3714d4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3714d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3714d8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3714d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3714dc: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x3714dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x3714e0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3714e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x3714e4: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x3714e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x3714e8: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x3714e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x3714ec: 0xc0d263c  jal         func_3498F0
    ctx->pc = 0x3714ECu;
    SET_GPR_U32(ctx, 31, 0x3714F4u);
    ctx->pc = 0x3714F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3714ECu;
    // 0x3714f0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3498F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3498F0u, 0x3714ECu, 0x3714F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3714F4u;
label_3714f4:
    // 0x3714f4: 0x94560000  lhu         $s6, 0x0($v0)
    ctx->pc = 0x3714f4u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3714f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3714f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3714fc: 0xc0d271c  jal         func_349C70
    ctx->pc = 0x3714FCu;
    SET_GPR_U32(ctx, 31, 0x371504u);
    ctx->pc = 0x371500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3714FCu;
    // 0x371500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349C70u, 0x3714FCu, 0x371504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371504u;
label_371504:
    // 0x371504: 0x32c4ffff  andi        $a0, $s6, 0xFFFF
    ctx->pc = 0x371504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x371508: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x371508u;
    SET_GPR_U32(ctx, 31, 0x371510u);
    ctx->pc = 0x37150Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371508u;
    // 0x37150c: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x371508u, 0x371510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371510u;
label_371510:
    // 0x371510: 0x3056ffff  andi        $s6, $v0, 0xFFFF
    ctx->pc = 0x371510u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x371514: 0xc0d271c  jal         func_349C70
    ctx->pc = 0x371514u;
    SET_GPR_U32(ctx, 31, 0x37151Cu);
    ctx->pc = 0x371518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371514u;
    // 0x371518: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349C70u, 0x371514u, 0x37151Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37151Cu;
label_37151c:
    // 0x37151c: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x37151cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x371520: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x371520u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371524: 0x3c020104  lui         $v0, 0x104
    ctx->pc = 0x371524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)260 << 16));
    // 0x371528: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x371528u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37152c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37152cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371530: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x371530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371534: 0xc0dc4e0  jal         func_371380
    ctx->pc = 0x371534u;
    SET_GPR_U32(ctx, 31, 0x37153Cu);
    ctx->pc = 0x371538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371534u;
    // 0x371538: 0x34470052  ori         $a3, $v0, 0x52 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)82);
    ctx->in_delay_slot = false;
    ctx->pc = 0x371380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371380u, 0x371534u, 0x37153Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37153Cu;
label_37153c:
    // 0x37153c: 0x96360006  lhu         $s6, 0x6($s1)
    ctx->pc = 0x37153cu;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x371540: 0xc0d2734  jal         func_349CD0
    ctx->pc = 0x371540u;
    SET_GPR_U32(ctx, 31, 0x371548u);
    ctx->pc = 0x371544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371540u;
    // 0x371544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349CD0u, 0x371540u, 0x371548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371548u;
label_371548:
    // 0x371548: 0x32c4ffff  andi        $a0, $s6, 0xFFFF
    ctx->pc = 0x371548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x37154c: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x37154Cu;
    SET_GPR_U32(ctx, 31, 0x371554u);
    ctx->pc = 0x371550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37154Cu;
    // 0x371550: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x37154Cu, 0x371554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371554u;
label_371554:
    // 0x371554: 0x3056ffff  andi        $s6, $v0, 0xFFFF
    ctx->pc = 0x371554u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x371558: 0xc0d2734  jal         func_349CD0
    ctx->pc = 0x371558u;
    SET_GPR_U32(ctx, 31, 0x371560u);
    ctx->pc = 0x37155Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371558u;
    // 0x37155c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349CD0u, 0x371558u, 0x371560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371560u;
label_371560:
    // 0x371560: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x371560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x371564: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x371564u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371568: 0x3c020104  lui         $v0, 0x104
    ctx->pc = 0x371568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)260 << 16));
    // 0x37156c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x37156cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371570: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x371570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371574: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x371574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371578: 0xc0dc4e0  jal         func_371380
    ctx->pc = 0x371578u;
    SET_GPR_U32(ctx, 31, 0x371580u);
    ctx->pc = 0x37157Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371578u;
    // 0x37157c: 0x34470053  ori         $a3, $v0, 0x53 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)83);
    ctx->in_delay_slot = false;
    ctx->pc = 0x371380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371380u, 0x371578u, 0x371580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371580u;
label_371580:
    // 0x371580: 0x9630000a  lhu         $s0, 0xA($s1)
    ctx->pc = 0x371580u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x371584: 0xc0d2744  jal         func_349D10
    ctx->pc = 0x371584u;
    SET_GPR_U32(ctx, 31, 0x37158Cu);
    ctx->pc = 0x371588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371584u;
    // 0x371588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349D10u, 0x371584u, 0x37158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37158Cu;
label_37158c:
    // 0x37158c: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x37158cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x371590: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x371590u;
    SET_GPR_U32(ctx, 31, 0x371598u);
    ctx->pc = 0x371594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371590u;
    // 0x371594: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x371590u, 0x371598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371598u;
label_371598:
    // 0x371598: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x371598u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37159c: 0xc0d2744  jal         func_349D10
    ctx->pc = 0x37159Cu;
    SET_GPR_U32(ctx, 31, 0x3715A4u);
    ctx->pc = 0x3715A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37159Cu;
    // 0x3715a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349D10u, 0x37159Cu, 0x3715A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3715A4u;
label_3715a4:
    // 0x3715a4: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x3715a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3715a8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3715a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3715ac: 0x3c020104  lui         $v0, 0x104
    ctx->pc = 0x3715acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)260 << 16));
    // 0x3715b0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3715b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3715b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3715b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3715b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3715b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3715bc: 0xc0dc4e0  jal         func_371380
    ctx->pc = 0x3715BCu;
    SET_GPR_U32(ctx, 31, 0x3715C4u);
    ctx->pc = 0x3715C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3715BCu;
    // 0x3715c0: 0x34470054  ori         $a3, $v0, 0x54 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)84);
    ctx->in_delay_slot = false;
    ctx->pc = 0x371380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371380u, 0x3715BCu, 0x3715C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3715C4u;
label_3715c4:
    // 0x3715c4: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x3715c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3715c8: 0x28410064  slti        $at, $v0, 0x64
    ctx->pc = 0x3715c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x3715cc: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x3715CCu;
    {
        const bool branch_taken_0x3715cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3715D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3715CCu;
        // 0x3715d0: 0x27b0009c  addiu       $s0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3715cc) {
            ctx->pc = 0x371660u;
            goto label_371660;
        }
    }
    ctx->pc = 0x3715D4u;
    // 0x3715d4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3715d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3715d8: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x3715d8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3715dc: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x3715dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x3715e0: 0x3c020104  lui         $v0, 0x104
    ctx->pc = 0x3715e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)260 << 16));
    // 0x3715e4: 0x3265ffff  andi        $a1, $s3, 0xFFFF
    ctx->pc = 0x3715e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x3715e8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3715e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3715ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3715ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3715f0: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x3715f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3715f4: 0x25291948  addiu       $t1, $t1, 0x1948
    ctx->pc = 0x3715f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6472));
    // 0x3715f8: 0xc095f88  jal         func_257E20
    ctx->pc = 0x3715F8u;
    SET_GPR_U32(ctx, 31, 0x371600u);
    ctx->pc = 0x3715FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3715F8u;
    // 0x3715fc: 0x344a003c  ori         $t2, $v0, 0x3C (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x3715F8u, 0x371600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371600u;
label_371600:
    // 0x371600: 0x92260004  lbu         $a2, 0x4($s1)
    ctx->pc = 0x371600u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x371604: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x371604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x371608: 0x24630d04  addiu       $v1, $v1, 0xD04
    ctx->pc = 0x371608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3332));
    // 0x37160c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x37160cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x371610: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x371610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371614: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x371614u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x371618: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x371618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x37161c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x37161cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x371620: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x371620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x371624: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x371624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x371628: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x371628u;
    SET_GPR_U32(ctx, 31, 0x371630u);
    ctx->pc = 0x37162Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371628u;
    // 0x37162c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x371628u, 0x371630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371630u;
label_371630:
    // 0x371630: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x371630u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x371634: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x371634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x371638: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x371638u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x37163c: 0x3245ffff  andi        $a1, $s2, 0xFFFF
    ctx->pc = 0x37163cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x371640: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x371640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x371644: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x371644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371648: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x371648u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x37164c: 0x25291960  addiu       $t1, $t1, 0x1960
    ctx->pc = 0x37164cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6496));
    // 0x371650: 0xc095f88  jal         func_257E20
    ctx->pc = 0x371650u;
    SET_GPR_U32(ctx, 31, 0x371658u);
    ctx->pc = 0x371654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371650u;
    // 0x371654: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x371650u, 0x371658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371658u;
label_371658:
    // 0x371658: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x371658u;
    {
        const bool branch_taken_0x371658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x371658) {
            ctx->pc = 0x371690u;
            goto label_371690;
        }
    }
    ctx->pc = 0x371660u;
label_371660:
    // 0x371660: 0x97a6009c  lhu         $a2, 0x9C($sp)
    ctx->pc = 0x371660u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x371664: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x371664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x371668: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x371668u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x37166c: 0x3c020104  lui         $v0, 0x104
    ctx->pc = 0x37166cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)260 << 16));
    // 0x371670: 0x3265ffff  andi        $a1, $s3, 0xFFFF
    ctx->pc = 0x371670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x371674: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x371674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x371678: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x371678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37167c: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x37167cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x371680: 0x25291948  addiu       $t1, $t1, 0x1948
    ctx->pc = 0x371680u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6472));
    // 0x371684: 0xc095f88  jal         func_257E20
    ctx->pc = 0x371684u;
    SET_GPR_U32(ctx, 31, 0x37168Cu);
    ctx->pc = 0x371688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371684u;
    // 0x371688: 0x344a003c  ori         $t2, $v0, 0x3C (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x371684u, 0x37168Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37168Cu;
label_37168c:
    // 0x37168c: 0x0  nop
    ctx->pc = 0x37168cu;
    // NOP
label_371690:
    // 0x371690: 0x3290ffff  andi        $s0, $s4, 0xFFFF
    ctx->pc = 0x371690u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x371694: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x371694u;
    {
        const bool branch_taken_0x371694 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x371698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371694u;
        // 0x371698: 0x3265ffff  andi        $a1, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x371694) {
            ctx->pc = 0x3716F0u;
            goto label_3716f0;
        }
    }
    ctx->pc = 0x37169Cu;
    // 0x37169c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x37169cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3716a0: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x3716a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3716a4: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x3716a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x3716a8: 0x96660000  lhu         $a2, 0x0($s3)
    ctx->pc = 0x3716a8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3716ac: 0x3c020104  lui         $v0, 0x104
    ctx->pc = 0x3716acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)260 << 16));
    // 0x3716b0: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3716b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3716b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3716b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3716b8: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x3716b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3716bc: 0x25291948  addiu       $t1, $t1, 0x1948
    ctx->pc = 0x3716bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6472));
    // 0x3716c0: 0xc095f88  jal         func_257E20
    ctx->pc = 0x3716C0u;
    SET_GPR_U32(ctx, 31, 0x3716C8u);
    ctx->pc = 0x3716C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3716C0u;
    // 0x3716c4: 0x344a003e  ori         $t2, $v0, 0x3E (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x3716C0u, 0x3716C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3716C8u;
label_3716c8:
    // 0x3716c8: 0x96660000  lhu         $a2, 0x0($s3)
    ctx->pc = 0x3716c8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3716cc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3716ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3716d0: 0x8e2a0020  lw          $t2, 0x20($s1)
    ctx->pc = 0x3716d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3716d4: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x3716d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x3716d8: 0x3245ffff  andi        $a1, $s2, 0xFFFF
    ctx->pc = 0x3716d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x3716dc: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3716dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3716e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3716e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3716e4: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x3716e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3716e8: 0xc095f88  jal         func_257E20
    ctx->pc = 0x3716E8u;
    SET_GPR_U32(ctx, 31, 0x3716F0u);
    ctx->pc = 0x3716ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3716E8u;
    // 0x3716ec: 0x25291960  addiu       $t1, $t1, 0x1960 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x3716E8u, 0x3716F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3716F0u;
label_3716f0:
    // 0x3716f0: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x3716f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3716f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3716f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3716f8: 0x70880b  movn        $s1, $v1, $s0
    ctx->pc = 0x3716f8u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x3716fc: 0x6200012  bltz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3716FCu;
    {
        const bool branch_taken_0x3716fc = (GPR_S64(ctx, 17) < 0);
        if (branch_taken_0x3716fc) {
            ctx->pc = 0x371748u;
            goto label_371748;
        }
    }
    ctx->pc = 0x371704u;
    // 0x371704: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x371704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x371708: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x371708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x37170c: 0x24500090  addiu       $s0, $v0, 0x90
    ctx->pc = 0x37170cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_371710:
    // 0x371710: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x371710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x371714: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x371714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x371718: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x371718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x37171c: 0x2484703c  addiu       $a0, $a0, 0x703C
    ctx->pc = 0x37171cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28732));
    // 0x371720: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x371720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371724: 0x3407fff5  ori         $a3, $zero, 0xFFF5
    ctx->pc = 0x371724u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x371728: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x371728u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37172c: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x37172cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x371730: 0x344a8080  ori         $t2, $v0, 0x8080
    ctx->pc = 0x371730u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x371734: 0xc09c844  jal         func_272110
    ctx->pc = 0x371734u;
    SET_GPR_U32(ctx, 31, 0x37173Cu);
    ctx->pc = 0x371738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371734u;
    // 0x371738: 0x24660001  addiu       $a2, $v1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272110u, 0x371734u, 0x37173Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37173Cu;
label_37173c:
    // 0x37173c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x37173cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x371740: 0x621fff3  bgez        $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x371740u;
    {
        const bool branch_taken_0x371740 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x371744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371740u;
        // 0x371744: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371740) {
            ctx->pc = 0x371710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371710;
        }
    }
    ctx->pc = 0x371748u;
label_371748:
    // 0x371748: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x371748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x37174c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x37174cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x371750: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x371750u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x371754: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x371754u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x371758: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x371758u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37175c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x37175cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x371760: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x371760u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x371764: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x371764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371768: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x371768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37176c: 0x3e00008  jr          $ra
    ctx->pc = 0x37176Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37176Cu;
        // 0x371770: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37176Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371774u;
}
