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

// Function: sub_00273470
// Address: 0x273470 - 0x273a14
void sub_00273470_0x273470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273470_0x273470");
#endif

    switch (ctx->pc) {
        case 0x2734a8u: goto label_2734a8;
        case 0x2734d0u: goto label_2734d0;
        case 0x273558u: goto label_273558;
        case 0x273568u: goto label_273568;
        case 0x2735a4u: goto label_2735a4;
        case 0x2735b8u: goto label_2735b8;
        case 0x2735c0u: goto label_2735c0;
        case 0x2735c8u: goto label_2735c8;
        case 0x273600u: goto label_273600;
        case 0x273618u: goto label_273618;
        case 0x273734u: goto label_273734;
        case 0x27373cu: goto label_27373c;
        case 0x273744u: goto label_273744;
        case 0x27376cu: goto label_27376c;
        case 0x273774u: goto label_273774;
        case 0x27377cu: goto label_27377c;
        case 0x2737b0u: goto label_2737b0;
        case 0x2737bcu: goto label_2737bc;
        case 0x27385cu: goto label_27385c;
        case 0x27389cu: goto label_27389c;
        case 0x2738acu: goto label_2738ac;
        case 0x2738b8u: goto label_2738b8;
        case 0x2738d4u: goto label_2738d4;
        case 0x2738e8u: goto label_2738e8;
        case 0x2738fcu: goto label_2738fc;
        case 0x273918u: goto label_273918;
        case 0x273944u: goto label_273944;
        case 0x273950u: goto label_273950;
        case 0x273958u: goto label_273958;
        case 0x273980u: goto label_273980;
        case 0x2739a8u: goto label_2739a8;
        case 0x2739e8u: goto label_2739e8;
        case 0x2739fcu: goto label_2739fc;
        default: break;
    }

    ctx->pc = 0x273470u;

    // 0x273470: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x273470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x273474: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x273474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x273478: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x273478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27347c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27347cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x273480: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x273480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x273484: 0x838388a0  lb          $v1, -0x7760($gp)
    ctx->pc = 0x273484u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x273488: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x273488u;
    {
        const bool branch_taken_0x273488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x273488) {
            ctx->pc = 0x2734B0u;
            goto label_2734b0;
        }
    }
    ctx->pc = 0x273490u;
    // 0x273490: 0x978588b4  lhu         $a1, -0x774C($gp)
    ctx->pc = 0x273490u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936756)));
    // 0x273494: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x273494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x273498: 0x978688bc  lhu         $a2, -0x7744($gp)
    ctx->pc = 0x273498u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936764)));
    // 0x27349c: 0x978788c0  lhu         $a3, -0x7740($gp)
    ctx->pc = 0x27349cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936768)));
    // 0x2734a0: 0xc0b6578  jal         func_2D95E0
    ctx->pc = 0x2734A0u;
    SET_GPR_U32(ctx, 31, 0x2734A8u);
    ctx->pc = 0x2734A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2734A0u;
    // 0x2734a4: 0x24847100  addiu       $a0, $a0, 0x7100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D95E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D95E0u, 0x2734A0u, 0x2734A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2734A8u;
label_2734a8:
    // 0x2734a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2734A8u;
    {
        const bool branch_taken_0x2734a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2734a8) {
            ctx->pc = 0x2734D0u;
            goto label_2734d0;
        }
    }
    ctx->pc = 0x2734B0u;
label_2734b0:
    // 0x2734b0: 0x978788c0  lhu         $a3, -0x7740($gp)
    ctx->pc = 0x2734b0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936768)));
    // 0x2734b4: 0x978288bc  lhu         $v0, -0x7744($gp)
    ctx->pc = 0x2734b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936764)));
    // 0x2734b8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2734b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2734bc: 0x978588b4  lhu         $a1, -0x774C($gp)
    ctx->pc = 0x2734bcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936756)));
    // 0x2734c0: 0x24847100  addiu       $a0, $a0, 0x7100
    ctx->pc = 0x2734c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28928));
    // 0x2734c4: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x2734c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2734c8: 0xc0b6578  jal         func_2D95E0
    ctx->pc = 0x2734C8u;
    SET_GPR_U32(ctx, 31, 0x2734D0u);
    ctx->pc = 0x2734CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2734C8u;
    // 0x2734cc: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D95E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D95E0u, 0x2734C8u, 0x2734D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2734D0u;
label_2734d0:
    // 0x2734d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2734d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2734d4: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x2734d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2734d8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2734d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2734dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2734dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2734e0: 0x14600147  bnez        $v1, . + 4 + (0x147 << 2)
    ctx->pc = 0x2734E0u;
    {
        const bool branch_taken_0x2734e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2734e0) {
            ctx->pc = 0x273A00u;
            goto label_273a00;
        }
    }
    ctx->pc = 0x2734E8u;
    // 0x2734e8: 0x838488a4  lb          $a0, -0x775C($gp)
    ctx->pc = 0x2734e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936740)));
    // 0x2734ec: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2734ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2734f0: 0x10830135  beq         $a0, $v1, . + 4 + (0x135 << 2)
    ctx->pc = 0x2734F0u;
    {
        const bool branch_taken_0x2734f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2734f0) {
            ctx->pc = 0x2739C8u;
            goto label_2739c8;
        }
    }
    ctx->pc = 0x2734F8u;
    // 0x2734f8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2734f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2734fc: 0x10830108  beq         $a0, $v1, . + 4 + (0x108 << 2)
    ctx->pc = 0x2734FCu;
    {
        const bool branch_taken_0x2734fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2734fc) {
            ctx->pc = 0x273920u;
            goto label_273920;
        }
    }
    ctx->pc = 0x273504u;
    // 0x273504: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x273504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x273508: 0x108300c9  beq         $a0, $v1, . + 4 + (0xC9 << 2)
    ctx->pc = 0x273508u;
    {
        const bool branch_taken_0x273508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x273508) {
            ctx->pc = 0x273830u;
            goto label_273830;
        }
    }
    ctx->pc = 0x273510u;
    // 0x273510: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x273510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x273514: 0x1083009c  beq         $a0, $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x273514u;
    {
        const bool branch_taken_0x273514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x273514) {
            ctx->pc = 0x273788u;
            goto label_273788;
        }
    }
    ctx->pc = 0x27351Cu;
    // 0x27351c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x27351cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x273520: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x273520u;
    {
        const bool branch_taken_0x273520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x273520) {
            ctx->pc = 0x273560u;
            goto label_273560;
        }
    }
    ctx->pc = 0x273528u;
    // 0x273528: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x273528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27352c: 0x10830134  beq         $a0, $v1, . + 4 + (0x134 << 2)
    ctx->pc = 0x27352Cu;
    {
        const bool branch_taken_0x27352c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x27352c) {
            ctx->pc = 0x273A00u;
            goto label_273a00;
        }
    }
    ctx->pc = 0x273534u;
    // 0x273534: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x273534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273538: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x273538u;
    {
        const bool branch_taken_0x273538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x273538) {
            ctx->pc = 0x273550u;
            goto label_273550;
        }
    }
    ctx->pc = 0x273540u;
    // 0x273540: 0x1080012f  beqz        $a0, . + 4 + (0x12F << 2)
    ctx->pc = 0x273540u;
    {
        const bool branch_taken_0x273540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x273540) {
            ctx->pc = 0x273A00u;
            goto label_273a00;
        }
    }
    ctx->pc = 0x273548u;
    // 0x273548: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x273548u;
    {
        const bool branch_taken_0x273548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273548) {
            ctx->pc = 0x273A00u;
            goto label_273a00;
        }
    }
    ctx->pc = 0x273550u;
label_273550:
    // 0x273550: 0xc09d144  jal         func_274510
    ctx->pc = 0x273550u;
    SET_GPR_U32(ctx, 31, 0x273558u);
    ctx->pc = 0x274510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274510u, 0x273550u, 0x273558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273558u;
label_273558:
    // 0x273558: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x273558u;
    {
        const bool branch_taken_0x273558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273558) {
            ctx->pc = 0x273A00u;
            goto label_273a00;
        }
    }
    ctx->pc = 0x273560u;
label_273560:
    // 0x273560: 0xc0b2cd4  jal         func_2CB350
    ctx->pc = 0x273560u;
    SET_GPR_U32(ctx, 31, 0x273568u);
    ctx->pc = 0x2CB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB350u, 0x273560u, 0x273568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273568u;
label_273568:
    // 0x273568: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x273568u;
    {
        const bool branch_taken_0x273568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273568) {
            ctx->pc = 0x273580u;
            goto label_273580;
        }
    }
    ctx->pc = 0x273570u;
    // 0x273570: 0x978388b4  lhu         $v1, -0x774C($gp)
    ctx->pc = 0x273570u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936756)));
    // 0x273574: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x273574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x273578: 0xa78388b4  sh          $v1, -0x774C($gp)
    ctx->pc = 0x273578u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936756), (uint16_t)GPR_U32(ctx, 3));
    // 0x27357c: 0x0  nop
    ctx->pc = 0x27357cu;
    // NOP
label_273580:
    // 0x273580: 0x978388b4  lhu         $v1, -0x774C($gp)
    ctx->pc = 0x273580u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936756)));
    // 0x273584: 0x1c600012  bgtz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x273584u;
    {
        const bool branch_taken_0x273584 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x273584) {
            ctx->pc = 0x2735D0u;
            goto label_2735d0;
        }
    }
    ctx->pc = 0x27358Cu;
    // 0x27358c: 0x838388a0  lb          $v1, -0x7760($gp)
    ctx->pc = 0x27358cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x273590: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x273590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x273594: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x273594u;
    {
        const bool branch_taken_0x273594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x273594) {
            ctx->pc = 0x2735B0u;
            goto label_2735b0;
        }
    }
    ctx->pc = 0x27359Cu;
    // 0x27359c: 0xc09ccf4  jal         func_2733D0
    ctx->pc = 0x27359Cu;
    SET_GPR_U32(ctx, 31, 0x2735A4u);
    ctx->pc = 0x2733D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2733D0u, 0x27359Cu, 0x2735A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2735A4u;
label_2735a4:
    // 0x2735a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2735A4u;
    {
        const bool branch_taken_0x2735a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2735a4) {
            ctx->pc = 0x2735C0u;
            goto label_2735c0;
        }
    }
    ctx->pc = 0x2735ACu;
    // 0x2735ac: 0x0  nop
    ctx->pc = 0x2735acu;
    // NOP
label_2735b0:
    // 0x2735b0: 0xc09cca8  jal         func_2732A0
    ctx->pc = 0x2735B0u;
    SET_GPR_U32(ctx, 31, 0x2735B8u);
    ctx->pc = 0x2732A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2732A0u, 0x2735B0u, 0x2735B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2735B8u;
label_2735b8:
    // 0x2735b8: 0xc0b2bc8  jal         func_2CAF20
    ctx->pc = 0x2735B8u;
    SET_GPR_U32(ctx, 31, 0x2735C0u);
    ctx->pc = 0x2735BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2735B8u;
    // 0x2735bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF20u, 0x2735B8u, 0x2735C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2735C0u;
label_2735c0:
    // 0x2735c0: 0xc09cc8c  jal         func_273230
    ctx->pc = 0x2735C0u;
    SET_GPR_U32(ctx, 31, 0x2735C8u);
    ctx->pc = 0x273230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273230u, 0x2735C0u, 0x2735C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2735C8u;
label_2735c8:
    // 0x2735c8: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x2735C8u;
    {
        const bool branch_taken_0x2735c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2735c8) {
            ctx->pc = 0x273A00u;
            goto label_273a00;
        }
    }
    ctx->pc = 0x2735D0u;
label_2735d0:
    // 0x2735d0: 0x838488a0  lb          $a0, -0x7760($gp)
    ctx->pc = 0x2735d0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x2735d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2735d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2735d8: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2735D8u;
    {
        const bool branch_taken_0x2735d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2735d8) {
            ctx->pc = 0x2735F0u;
            goto label_2735f0;
        }
    }
    ctx->pc = 0x2735E0u;
    // 0x2735e0: 0x938388cc  lbu         $v1, -0x7734($gp)
    ctx->pc = 0x2735e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936780)));
    // 0x2735e4: 0x10600106  beqz        $v1, . + 4 + (0x106 << 2)
    ctx->pc = 0x2735E4u;
    {
        const bool branch_taken_0x2735e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2735e4) {
            ctx->pc = 0x273A00u;
            goto label_273a00;
        }
    }
    ctx->pc = 0x2735ECu;
    // 0x2735ec: 0x0  nop
    ctx->pc = 0x2735ecu;
    // NOP
label_2735f0:
    // 0x2735f0: 0x3c10008c  lui         $s0, 0x8C
    ctx->pc = 0x2735f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)140 << 16));
    // 0x2735f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2735f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2735f8: 0x26100850  addiu       $s0, $s0, 0x850
    ctx->pc = 0x2735f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2128));
    // 0x2735fc: 0x0  nop
    ctx->pc = 0x2735fcu;
    // NOP
label_273600:
    // 0x273600: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x273600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x273604: 0x10a00036  beqz        $a1, . + 4 + (0x36 << 2)
    ctx->pc = 0x273604u;
    {
        const bool branch_taken_0x273604 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x273604) {
            ctx->pc = 0x2736E0u;
            goto label_2736e0;
        }
    }
    ctx->pc = 0x27360Cu;
    // 0x27360c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x27360cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x273610: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x273610u;
    SET_GPR_U32(ctx, 31, 0x273618u);
    ctx->pc = 0x273614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273610u;
    // 0x273614: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x273610u, 0x273618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273618u;
label_273618:
    // 0x273618: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x273618u;
    {
        const bool branch_taken_0x273618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273618) {
            ctx->pc = 0x273690u;
            goto label_273690;
        }
    }
    ctx->pc = 0x273620u;
    // 0x273620: 0x8c4329c0  lw          $v1, 0x29C0($v0)
    ctx->pc = 0x273620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10688)));
    // 0x273624: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x273624u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x273628: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x273628u;
    {
        const bool branch_taken_0x273628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x273628) {
            ctx->pc = 0x273690u;
            goto label_273690;
        }
    }
    ctx->pc = 0x273630u;
    // 0x273630: 0x9044000a  lbu         $a0, 0xA($v0)
    ctx->pc = 0x273630u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x273634: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x273634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x273638: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x273638u;
    {
        const bool branch_taken_0x273638 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x273638) {
            ctx->pc = 0x273650u;
            goto label_273650;
        }
    }
    ctx->pc = 0x273640u;
    // 0x273640: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x273640u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x273644: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x273644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x273648: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x273648u;
    {
        const bool branch_taken_0x273648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273648u;
        // 0x27364c: 0x7c230840  sq          $v1, 0x840($at) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 1), 2112), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273648) {
            ctx->pc = 0x2736E0u;
            goto label_2736e0;
        }
    }
    ctx->pc = 0x273650u;
label_273650:
    // 0x273650: 0x944329de  lhu         $v1, 0x29DE($v0)
    ctx->pc = 0x273650u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10718)));
    // 0x273654: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x273654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x273658: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x273658u;
    {
        const bool branch_taken_0x273658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x273658) {
            ctx->pc = 0x273680u;
            goto label_273680;
        }
    }
    ctx->pc = 0x273660u;
    // 0x273660: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x273660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x273664: 0x978388bc  lhu         $v1, -0x7744($gp)
    ctx->pc = 0x273664u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936764)));
    // 0x273668: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x273668u;
    {
        const bool branch_taken_0x273668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x273668) {
            ctx->pc = 0x2736E0u;
            goto label_2736e0;
        }
    }
    ctx->pc = 0x273670u;
    // 0x273670: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x273670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x273674: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x273674u;
    {
        const bool branch_taken_0x273674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273674u;
        // 0x273678: 0xa78388bc  sh          $v1, -0x7744($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936764), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273674) {
            ctx->pc = 0x2736E0u;
            goto label_2736e0;
        }
    }
    ctx->pc = 0x27367Cu;
    // 0x27367c: 0x0  nop
    ctx->pc = 0x27367cu;
    // NOP
label_273680:
    // 0x273680: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x273680u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x273684: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x273684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x273688: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x273688u;
    {
        const bool branch_taken_0x273688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273688u;
        // 0x27368c: 0x7c230840  sq          $v1, 0x840($at) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 1), 2112), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273688) {
            ctx->pc = 0x2736E0u;
            goto label_2736e0;
        }
    }
    ctx->pc = 0x273690u;
label_273690:
    // 0x273690: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x273690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x273694: 0x838488a0  lb          $a0, -0x7760($gp)
    ctx->pc = 0x273694u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x273698: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x273698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27369c: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x27369Cu;
    {
        const bool branch_taken_0x27369c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x27369c) {
            ctx->pc = 0x2736E0u;
            goto label_2736e0;
        }
    }
    ctx->pc = 0x2736A4u;
    // 0x2736a4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2736a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2736a8: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2736A8u;
    {
        const bool branch_taken_0x2736a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2736a8) {
            ctx->pc = 0x2736E0u;
            goto label_2736e0;
        }
    }
    ctx->pc = 0x2736B0u;
    // 0x2736b0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2736b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2736b4: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2736B4u;
    {
        const bool branch_taken_0x2736b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2736b4) {
            ctx->pc = 0x2736E0u;
            goto label_2736e0;
        }
    }
    ctx->pc = 0x2736BCu;
    // 0x2736bc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2736bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2736c0: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2736C0u;
    {
        const bool branch_taken_0x2736c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2736c0) {
            ctx->pc = 0x2736E0u;
            goto label_2736e0;
        }
    }
    ctx->pc = 0x2736C8u;
    // 0x2736c8: 0x978388bc  lhu         $v1, -0x7744($gp)
    ctx->pc = 0x2736c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936764)));
    // 0x2736cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2736CCu;
    {
        const bool branch_taken_0x2736cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2736cc) {
            ctx->pc = 0x2736E0u;
            goto label_2736e0;
        }
    }
    ctx->pc = 0x2736D4u;
    // 0x2736d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2736d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2736d8: 0xa78388bc  sh          $v1, -0x7744($gp)
    ctx->pc = 0x2736d8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936764), (uint16_t)GPR_U32(ctx, 3));
    // 0x2736dc: 0x0  nop
    ctx->pc = 0x2736dcu;
    // NOP
label_2736e0:
    // 0x2736e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2736e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2736e4: 0x2e230020  sltiu       $v1, $s1, 0x20
    ctx->pc = 0x2736e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2736e8: 0x1460ffc5  bnez        $v1, . + 4 + (-0x3B << 2)
    ctx->pc = 0x2736E8u;
    {
        const bool branch_taken_0x2736e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2736ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2736E8u;
        // 0x2736ec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2736e8) {
            ctx->pc = 0x273600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273600;
        }
    }
    ctx->pc = 0x2736F0u;
    // 0x2736f0: 0x838388a0  lb          $v1, -0x7760($gp)
    ctx->pc = 0x2736f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x2736f4: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x2736f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2736f8: 0x102000c1  beqz        $at, . + 4 + (0xC1 << 2)
    ctx->pc = 0x2736F8u;
    {
        const bool branch_taken_0x2736f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2736f8) {
            ctx->pc = 0x273A00u;
            goto label_273a00;
        }
    }
    ctx->pc = 0x273700u;
    // 0x273700: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x273700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x273704: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x273704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x273708: 0x248459e0  addiu       $a0, $a0, 0x59E0
    ctx->pc = 0x273708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23008));
    // 0x27370c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27370cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273710: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x273710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x273714: 0x600008  jr          $v1
    ctx->pc = 0x273714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x273720u: goto label_273720;
            case 0x273750u: goto label_273750;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273714u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27371Cu;
    // 0x27371c: 0x0  nop
    ctx->pc = 0x27371cu;
    // NOP
label_273720:
    // 0x273720: 0x978388bc  lhu         $v1, -0x7744($gp)
    ctx->pc = 0x273720u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936764)));
    // 0x273724: 0x1c6000b6  bgtz        $v1, . + 4 + (0xB6 << 2)
    ctx->pc = 0x273724u;
    {
        const bool branch_taken_0x273724 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x273724) {
            ctx->pc = 0x273A00u;
            goto label_273a00;
        }
    }
    ctx->pc = 0x27372Cu;
    // 0x27372c: 0xc09ccd0  jal         func_273340
    ctx->pc = 0x27372Cu;
    SET_GPR_U32(ctx, 31, 0x273734u);
    ctx->pc = 0x273340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273340u, 0x27372Cu, 0x273734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273734u;
label_273734:
    // 0x273734: 0xc09ccf4  jal         func_2733D0
    ctx->pc = 0x273734u;
    SET_GPR_U32(ctx, 31, 0x27373Cu);
    ctx->pc = 0x2733D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2733D0u, 0x273734u, 0x27373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27373Cu;
label_27373c:
    // 0x27373c: 0xc09cc8c  jal         func_273230
    ctx->pc = 0x27373Cu;
    SET_GPR_U32(ctx, 31, 0x273744u);
    ctx->pc = 0x273230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273230u, 0x27373Cu, 0x273744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273744u;
label_273744:
    // 0x273744: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x273744u;
    {
        const bool branch_taken_0x273744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273744) {
            ctx->pc = 0x273A00u;
            goto label_273a00;
        }
    }
    ctx->pc = 0x27374Cu;
    // 0x27374c: 0x0  nop
    ctx->pc = 0x27374cu;
    // NOP
label_273750:
    // 0x273750: 0x978488bc  lhu         $a0, -0x7744($gp)
    ctx->pc = 0x273750u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936764)));
    // 0x273754: 0x978388c0  lhu         $v1, -0x7740($gp)
    ctx->pc = 0x273754u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936768)));
    // 0x273758: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x273758u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27375c: 0x102000a8  beqz        $at, . + 4 + (0xA8 << 2)
    ctx->pc = 0x27375Cu;
    {
        const bool branch_taken_0x27375c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27375c) {
            ctx->pc = 0x273A00u;
            goto label_273a00;
        }
    }
    ctx->pc = 0x273764u;
    // 0x273764: 0xc09cca8  jal         func_2732A0
    ctx->pc = 0x273764u;
    SET_GPR_U32(ctx, 31, 0x27376Cu);
    ctx->pc = 0x2732A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2732A0u, 0x273764u, 0x27376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27376Cu;
label_27376c:
    // 0x27376c: 0xc0b2bc8  jal         func_2CAF20
    ctx->pc = 0x27376Cu;
    SET_GPR_U32(ctx, 31, 0x273774u);
    ctx->pc = 0x273770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27376Cu;
    // 0x273770: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF20u, 0x27376Cu, 0x273774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273774u;
label_273774:
    // 0x273774: 0xc09cc8c  jal         func_273230
    ctx->pc = 0x273774u;
    SET_GPR_U32(ctx, 31, 0x27377Cu);
    ctx->pc = 0x273230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273230u, 0x273774u, 0x27377Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27377Cu;
label_27377c:
    // 0x27377c: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x27377Cu;
    {
        const bool branch_taken_0x27377c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27377c) {
            ctx->pc = 0x273A00u;
            goto label_273a00;
        }
    }
    ctx->pc = 0x273784u;
    // 0x273784: 0x0  nop
    ctx->pc = 0x273784u;
    // NOP
label_273788:
    // 0x273788: 0x878388d0  lh          $v1, -0x7730($gp)
    ctx->pc = 0x273788u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936784)));
    // 0x27378c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27378cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x273790: 0xa78388d0  sh          $v1, -0x7730($gp)
    ctx->pc = 0x273790u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936784), (uint16_t)GPR_U32(ctx, 3));
    // 0x273794: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x273794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x273798: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x273798u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x27379c: 0x1c600098  bgtz        $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x27379Cu;
    {
        const bool branch_taken_0x27379c = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x27379c) {
            ctx->pc = 0x273A00u;
            goto label_273a00;
        }
    }
    ctx->pc = 0x2737A4u;
    // 0x2737a4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2737a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2737a8: 0xc0b65f0  jal         func_2D97C0
    ctx->pc = 0x2737A8u;
    SET_GPR_U32(ctx, 31, 0x2737B0u);
    ctx->pc = 0x2737ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2737A8u;
    // 0x2737ac: 0x24847100  addiu       $a0, $a0, 0x7100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D97C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D97C0u, 0x2737A8u, 0x2737B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2737B0u;
label_2737b0:
    // 0x2737b0: 0x978588a8  lhu         $a1, -0x7758($gp)
    ctx->pc = 0x2737b0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936744)));
    // 0x2737b4: 0xc0ba400  jal         func_2E9000
    ctx->pc = 0x2737B4u;
    SET_GPR_U32(ctx, 31, 0x2737BCu);
    ctx->pc = 0x2737B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2737B4u;
    // 0x2737b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9000u, 0x2737B4u, 0x2737BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2737BCu;
label_2737bc:
    // 0x2737bc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2737bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2737c0: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x2737c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x2737c4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2737c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2737c8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2737c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2737cc: 0xa38488a4  sb          $a0, -0x775C($gp)
    ctx->pc = 0x2737ccu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936740), (uint8_t)GPR_U32(ctx, 4));
    // 0x2737d0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2737d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2737d4: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x2737d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2737d8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2737d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2737dc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2737dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2737e0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2737e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2737e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2737e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2737e8: 0x0  nop
    ctx->pc = 0x2737e8u;
    // NOP
    // 0x2737ec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2737ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2737f0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2737f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2737f4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2737F4u;
    {
        const bool branch_taken_0x2737f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2737f4) {
            ctx->pc = 0x27380Cu;
            goto label_27380c;
        }
    }
    ctx->pc = 0x2737FCu;
    // 0x2737fc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2737fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x273800: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x273800u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x273804: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x273804u;
    {
        const bool branch_taken_0x273804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273804u;
        // 0x273808: 0xa78488c4  sh          $a0, -0x773C($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936772), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273804) {
            ctx->pc = 0x273828u;
            goto label_273828;
        }
    }
    ctx->pc = 0x27380Cu;
label_27380c:
    // 0x27380c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27380cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x273810: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x273810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x273814: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x273814u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x273818: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x273818u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x27381c: 0x0  nop
    ctx->pc = 0x27381cu;
    // NOP
    // 0x273820: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x273820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x273824: 0xa78488c4  sh          $a0, -0x773C($gp)
    ctx->pc = 0x273824u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936772), (uint16_t)GPR_U32(ctx, 4));
label_273828:
    // 0x273828: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x273828u;
    {
        const bool branch_taken_0x273828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273828) {
            ctx->pc = 0x273A00u;
            goto label_273a00;
        }
    }
    ctx->pc = 0x273830u;
label_273830:
    // 0x273830: 0x978388c4  lhu         $v1, -0x773C($gp)
    ctx->pc = 0x273830u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936772)));
    // 0x273834: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x273834u;
    {
        const bool branch_taken_0x273834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x273834) {
            ctx->pc = 0x273878u;
            goto label_273878;
        }
    }
    ctx->pc = 0x27383Cu;
    // 0x27383c: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x27383cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x273840: 0x978388c8  lhu         $v1, -0x7738($gp)
    ctx->pc = 0x273840u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936776)));
    // 0x273844: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x273844u;
    {
        const bool branch_taken_0x273844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x273848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273844u;
        // 0x273848: 0xa78488c4  sh          $a0, -0x773C($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936772), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273844) {
            ctx->pc = 0x273868u;
            goto label_273868;
        }
    }
    ctx->pc = 0x27384Cu;
    // 0x27384c: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x27384cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x273850: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x273850u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x273854: 0xc07cc2c  jal         func_1F30B0
    ctx->pc = 0x273854u;
    SET_GPR_U32(ctx, 31, 0x27385Cu);
    ctx->pc = 0x273858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273854u;
    // 0x273858: 0x2484f820  addiu       $a0, $a0, -0x7E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F30B0u, 0x273854u, 0x27385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27385Cu;
label_27385c:
    // 0x27385c: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x27385Cu;
    {
        const bool branch_taken_0x27385c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27385c) {
            ctx->pc = 0x273A00u;
            goto label_273a00;
        }
    }
    ctx->pc = 0x273864u;
    // 0x273864: 0xa78088c4  sh          $zero, -0x773C($gp)
    ctx->pc = 0x273864u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936772), (uint16_t)GPR_U32(ctx, 0));
label_273868:
    // 0x273868: 0x978388c4  lhu         $v1, -0x773C($gp)
    ctx->pc = 0x273868u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936772)));
    // 0x27386c: 0x14600064  bnez        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x27386Cu;
    {
        const bool branch_taken_0x27386c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27386c) {
            ctx->pc = 0x273A00u;
            goto label_273a00;
        }
    }
    ctx->pc = 0x273874u;
    // 0x273874: 0x0  nop
    ctx->pc = 0x273874u;
    // NOP
label_273878:
    // 0x273878: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x273878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x27387c: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x27387cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x273880: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x273880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x273884: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x273884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x273888: 0x979088a8  lhu         $s0, -0x7758($gp)
    ctx->pc = 0x273888u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936744)));
    // 0x27388c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27388cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x273890: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x273890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x273894: 0xc09cc68  jal         func_2731A0
    ctx->pc = 0x273894u;
    SET_GPR_U32(ctx, 31, 0x27389Cu);
    ctx->pc = 0x273898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273894u;
    // 0x273898: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2731A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2731A0u, 0x273894u, 0x27389Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27389Cu;
label_27389c:
    // 0x27389c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x27389cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2738a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2738a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2738a4: 0xc0ce208  jal         func_338820
    ctx->pc = 0x2738A4u;
    SET_GPR_U32(ctx, 31, 0x2738ACu);
    ctx->pc = 0x2738A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2738A4u;
    // 0x2738a8: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338820u, 0x2738A4u, 0x2738ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2738ACu;
label_2738ac:
    // 0x2738ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2738acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2738b0: 0xc0dad88  jal         func_36B620
    ctx->pc = 0x2738B0u;
    SET_GPR_U32(ctx, 31, 0x2738B8u);
    ctx->pc = 0x2738B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2738B0u;
    // 0x2738b4: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36B620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B620u, 0x2738B0u, 0x2738B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2738B8u;
label_2738b8:
    // 0x2738b8: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x2738b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2738bc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2738bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2738c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2738c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2738c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2738c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2738c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2738c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2738cc: 0xc0d0ac4  jal         func_342B10
    ctx->pc = 0x2738CCu;
    SET_GPR_U32(ctx, 31, 0x2738D4u);
    ctx->pc = 0x2738D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2738CCu;
    // 0x2738d0: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B10u, 0x2738CCu, 0x2738D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2738D4u;
label_2738d4:
    // 0x2738d4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2738d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2738d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2738d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2738dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2738dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2738e0: 0xc0d0ac4  jal         func_342B10
    ctx->pc = 0x2738E0u;
    SET_GPR_U32(ctx, 31, 0x2738E8u);
    ctx->pc = 0x2738E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2738E0u;
    // 0x2738e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B10u, 0x2738E0u, 0x2738E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2738E8u;
label_2738e8:
    // 0x2738e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2738e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2738ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2738ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2738f0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2738f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2738f4: 0xc0d0ae0  jal         func_342B80
    ctx->pc = 0x2738F4u;
    SET_GPR_U32(ctx, 31, 0x2738FCu);
    ctx->pc = 0x2738F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2738F4u;
    // 0x2738f8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B80u, 0x2738F4u, 0x2738FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2738FCu;
label_2738fc:
    // 0x2738fc: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x2738fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x273900: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x273900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x273904: 0x2484ea40  addiu       $a0, $a0, -0x15C0
    ctx->pc = 0x273904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961728));
    // 0x273908: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x273908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27390c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x27390cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x273910: 0xc0c84c8  jal         func_321320
    ctx->pc = 0x273910u;
    SET_GPR_U32(ctx, 31, 0x273918u);
    ctx->pc = 0x273914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273910u;
    // 0x273914: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321320u, 0x273910u, 0x273918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273918u;
label_273918:
    // 0x273918: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x273918u;
    {
        const bool branch_taken_0x273918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273918) {
            ctx->pc = 0x273A00u;
            goto label_273a00;
        }
    }
    ctx->pc = 0x273920u;
label_273920:
    // 0x273920: 0x878288d0  lh          $v0, -0x7730($gp)
    ctx->pc = 0x273920u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936784)));
    // 0x273924: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x273924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x273928: 0xa78288d0  sh          $v0, -0x7730($gp)
    ctx->pc = 0x273928u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936784), (uint16_t)GPR_U32(ctx, 2));
    // 0x27392c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x27392cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x273930: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x273930u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x273934: 0x1c400010  bgtz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x273934u;
    {
        const bool branch_taken_0x273934 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x273934) {
            ctx->pc = 0x273978u;
            goto label_273978;
        }
    }
    ctx->pc = 0x27393Cu;
    // 0x27393c: 0xc09cfd8  jal         func_273F60
    ctx->pc = 0x27393Cu;
    SET_GPR_U32(ctx, 31, 0x273944u);
    ctx->pc = 0x273F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273F60u, 0x27393Cu, 0x273944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273944u;
label_273944:
    // 0x273944: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x273944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x273948: 0xc0b65f0  jal         func_2D97C0
    ctx->pc = 0x273948u;
    SET_GPR_U32(ctx, 31, 0x273950u);
    ctx->pc = 0x27394Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273948u;
    // 0x27394c: 0x24847100  addiu       $a0, $a0, 0x7100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D97C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D97C0u, 0x273948u, 0x273950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273950u;
label_273950:
    // 0x273950: 0xc09cc68  jal         func_2731A0
    ctx->pc = 0x273950u;
    SET_GPR_U32(ctx, 31, 0x273958u);
    ctx->pc = 0x2731A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2731A0u, 0x273950u, 0x273958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273958u;
label_273958:
    // 0x273958: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x273958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x27395c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x27395cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x273960: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x273960u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x273964: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x273964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x273968: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x273968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27396c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x27396cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x273970: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x273970u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x273974: 0x0  nop
    ctx->pc = 0x273974u;
    // NOP
label_273978:
    // 0x273978: 0xc0d9044  jal         func_364110
    ctx->pc = 0x273978u;
    SET_GPR_U32(ctx, 31, 0x273980u);
    ctx->pc = 0x364110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364110u, 0x273978u, 0x273980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273980u;
label_273980:
    // 0x273980: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x273980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x273984: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x273984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273988: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x273988u;
    {
        const bool branch_taken_0x273988 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x273988) {
            ctx->pc = 0x273A00u;
            goto label_273a00;
        }
    }
    ctx->pc = 0x273990u;
    // 0x273990: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x273990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x273994: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x273994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x273998: 0x2484e000  addiu       $a0, $a0, -0x2000
    ctx->pc = 0x273998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    // 0x27399c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27399cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2739a0: 0xc0bd35c  jal         func_2F4D70
    ctx->pc = 0x2739A0u;
    SET_GPR_U32(ctx, 31, 0x2739A8u);
    ctx->pc = 0x2739A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2739A0u;
    // 0x2739a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D70u, 0x2739A0u, 0x2739A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2739A8u;
label_2739a8:
    // 0x2739a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2739a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2739ac: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2739acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2739b0: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x2739b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2739b4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2739b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2739b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2739b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2739bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2739BCu;
    {
        const bool branch_taken_0x2739bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2739C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2739BCu;
        // 0x2739c0: 0xac23cebc  sw          $v1, -0x3144($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2739bc) {
            ctx->pc = 0x273A00u;
            goto label_273a00;
        }
    }
    ctx->pc = 0x2739C4u;
    // 0x2739c4: 0x0  nop
    ctx->pc = 0x2739c4u;
    // NOP
label_2739c8:
    // 0x2739c8: 0x938788e4  lbu         $a3, -0x771C($gp)
    ctx->pc = 0x2739c8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936804)));
    // 0x2739cc: 0x938888e8  lbu         $t0, -0x7718($gp)
    ctx->pc = 0x2739ccu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936808)));
    // 0x2739d0: 0x978488d8  lhu         $a0, -0x7728($gp)
    ctx->pc = 0x2739d0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936792)));
    // 0x2739d4: 0x978588dc  lhu         $a1, -0x7724($gp)
    ctx->pc = 0x2739d4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936796)));
    // 0x2739d8: 0x978688e0  lhu         $a2, -0x7720($gp)
    ctx->pc = 0x2739d8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936800)));
    // 0x2739dc: 0x978988ec  lhu         $t1, -0x7714($gp)
    ctx->pc = 0x2739dcu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936812)));
    // 0x2739e0: 0xc09cf10  jal         func_273C40
    ctx->pc = 0x2739E0u;
    SET_GPR_U32(ctx, 31, 0x2739E8u);
    ctx->pc = 0x2739E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2739E0u;
    // 0x2739e4: 0xa38088a4  sb          $zero, -0x775C($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936740), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273C40u, 0x2739E0u, 0x2739E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2739E8u;
label_2739e8:
    // 0x2739e8: 0x978388f0  lhu         $v1, -0x7710($gp)
    ctx->pc = 0x2739e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936816)));
    // 0x2739ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2739ECu;
    {
        const bool branch_taken_0x2739ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2739ec) {
            ctx->pc = 0x273A00u;
            goto label_273a00;
        }
    }
    ctx->pc = 0x2739F4u;
    // 0x2739f4: 0xc09cfa4  jal         func_273E90
    ctx->pc = 0x2739F4u;
    SET_GPR_U32(ctx, 31, 0x2739FCu);
    ctx->pc = 0x273E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273E90u, 0x2739F4u, 0x2739FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2739FCu;
label_2739fc:
    // 0x2739fc: 0x0  nop
    ctx->pc = 0x2739fcu;
    // NOP
label_273a00:
    // 0x273a00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x273a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273a04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x273a04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273a08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x273a08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x273A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A0Cu;
        // 0x273a10: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273A14u;
}
