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

// Function: sub_002938C0
// Address: 0x2938c0 - 0x293ab0
void sub_002938C0_0x2938c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002938C0_0x2938c0");
#endif

    switch (ctx->pc) {
        case 0x2938c0u: goto label_2938c0;
        case 0x2938c4u: goto label_2938c4;
        case 0x2938c8u: goto label_2938c8;
        case 0x2938ccu: goto label_2938cc;
        case 0x2938d0u: goto label_2938d0;
        case 0x2938d4u: goto label_2938d4;
        case 0x2938d8u: goto label_2938d8;
        case 0x2938dcu: goto label_2938dc;
        case 0x2938e0u: goto label_2938e0;
        case 0x2938e4u: goto label_2938e4;
        case 0x2938e8u: goto label_2938e8;
        case 0x2938ecu: goto label_2938ec;
        case 0x2938f0u: goto label_2938f0;
        case 0x2938f4u: goto label_2938f4;
        case 0x2938f8u: goto label_2938f8;
        case 0x2938fcu: goto label_2938fc;
        case 0x293900u: goto label_293900;
        case 0x293904u: goto label_293904;
        case 0x293908u: goto label_293908;
        case 0x29390cu: goto label_29390c;
        case 0x293910u: goto label_293910;
        case 0x293914u: goto label_293914;
        case 0x293918u: goto label_293918;
        case 0x29391cu: goto label_29391c;
        case 0x293920u: goto label_293920;
        case 0x293924u: goto label_293924;
        case 0x293928u: goto label_293928;
        case 0x29392cu: goto label_29392c;
        case 0x293930u: goto label_293930;
        case 0x293934u: goto label_293934;
        case 0x293938u: goto label_293938;
        case 0x29393cu: goto label_29393c;
        case 0x293940u: goto label_293940;
        case 0x293944u: goto label_293944;
        case 0x293948u: goto label_293948;
        case 0x29394cu: goto label_29394c;
        case 0x293950u: goto label_293950;
        case 0x293954u: goto label_293954;
        case 0x293958u: goto label_293958;
        case 0x29395cu: goto label_29395c;
        case 0x293960u: goto label_293960;
        case 0x293964u: goto label_293964;
        case 0x293968u: goto label_293968;
        case 0x29396cu: goto label_29396c;
        case 0x293970u: goto label_293970;
        case 0x293974u: goto label_293974;
        case 0x293978u: goto label_293978;
        case 0x29397cu: goto label_29397c;
        case 0x293980u: goto label_293980;
        case 0x293984u: goto label_293984;
        case 0x293988u: goto label_293988;
        case 0x29398cu: goto label_29398c;
        case 0x293990u: goto label_293990;
        case 0x293994u: goto label_293994;
        case 0x293998u: goto label_293998;
        case 0x29399cu: goto label_29399c;
        case 0x2939a0u: goto label_2939a0;
        case 0x2939a4u: goto label_2939a4;
        case 0x2939a8u: goto label_2939a8;
        case 0x2939acu: goto label_2939ac;
        case 0x2939b0u: goto label_2939b0;
        case 0x2939b4u: goto label_2939b4;
        case 0x2939b8u: goto label_2939b8;
        case 0x2939bcu: goto label_2939bc;
        case 0x2939c0u: goto label_2939c0;
        case 0x2939c4u: goto label_2939c4;
        case 0x2939c8u: goto label_2939c8;
        case 0x2939ccu: goto label_2939cc;
        case 0x2939d0u: goto label_2939d0;
        case 0x2939d4u: goto label_2939d4;
        case 0x2939d8u: goto label_2939d8;
        case 0x2939dcu: goto label_2939dc;
        case 0x2939e0u: goto label_2939e0;
        case 0x2939e4u: goto label_2939e4;
        case 0x2939e8u: goto label_2939e8;
        case 0x2939ecu: goto label_2939ec;
        case 0x2939f0u: goto label_2939f0;
        case 0x2939f4u: goto label_2939f4;
        case 0x2939f8u: goto label_2939f8;
        case 0x2939fcu: goto label_2939fc;
        case 0x293a00u: goto label_293a00;
        case 0x293a04u: goto label_293a04;
        case 0x293a08u: goto label_293a08;
        case 0x293a0cu: goto label_293a0c;
        case 0x293a10u: goto label_293a10;
        case 0x293a14u: goto label_293a14;
        case 0x293a18u: goto label_293a18;
        case 0x293a1cu: goto label_293a1c;
        case 0x293a20u: goto label_293a20;
        case 0x293a24u: goto label_293a24;
        case 0x293a28u: goto label_293a28;
        case 0x293a2cu: goto label_293a2c;
        case 0x293a30u: goto label_293a30;
        case 0x293a34u: goto label_293a34;
        case 0x293a38u: goto label_293a38;
        case 0x293a3cu: goto label_293a3c;
        case 0x293a40u: goto label_293a40;
        case 0x293a44u: goto label_293a44;
        case 0x293a48u: goto label_293a48;
        case 0x293a4cu: goto label_293a4c;
        case 0x293a50u: goto label_293a50;
        case 0x293a54u: goto label_293a54;
        case 0x293a58u: goto label_293a58;
        case 0x293a5cu: goto label_293a5c;
        case 0x293a60u: goto label_293a60;
        case 0x293a64u: goto label_293a64;
        case 0x293a68u: goto label_293a68;
        case 0x293a6cu: goto label_293a6c;
        case 0x293a70u: goto label_293a70;
        case 0x293a74u: goto label_293a74;
        case 0x293a78u: goto label_293a78;
        case 0x293a7cu: goto label_293a7c;
        case 0x293a80u: goto label_293a80;
        case 0x293a84u: goto label_293a84;
        case 0x293a88u: goto label_293a88;
        case 0x293a8cu: goto label_293a8c;
        case 0x293a90u: goto label_293a90;
        case 0x293a94u: goto label_293a94;
        case 0x293a98u: goto label_293a98;
        case 0x293a9cu: goto label_293a9c;
        case 0x293aa0u: goto label_293aa0;
        case 0x293aa4u: goto label_293aa4;
        case 0x293aa8u: goto label_293aa8;
        case 0x293aacu: goto label_293aac;
        default: break;
    }

    ctx->pc = 0x2938c0u;

label_2938c0:
    // 0x2938c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2938c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2938c4:
    // 0x2938c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2938c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2938c8:
    // 0x2938c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2938c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2938cc:
    // 0x2938cc: 0xc0a4814  jal         func_292050
label_2938d0:
    if (ctx->pc == 0x2938D0u) {
        ctx->pc = 0x2938D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2938CCu;
        // 0x2938d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2938D4u;
        goto label_2938d4;
    }
    ctx->pc = 0x2938CCu;
    SET_GPR_U32(ctx, 31, 0x2938D4u);
    ctx->pc = 0x2938D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2938CCu;
    // 0x2938d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292050u, 0x2938CCu, 0x2938D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2938D4u;
label_2938d4:
    // 0x2938d4: 0x920308e8  lbu         $v1, 0x8E8($s0)
    ctx->pc = 0x2938d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
label_2938d8:
    // 0x2938d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2938d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2938dc:
    // 0x2938dc: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_2938e0:
    if (ctx->pc == 0x2938E0u) {
        ctx->pc = 0x2938E4u;
        goto label_2938e4;
    }
    ctx->pc = 0x2938DCu;
    {
        const bool branch_taken_0x2938dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2938dc) {
            ctx->pc = 0x293920u;
            goto label_293920;
        }
    }
    ctx->pc = 0x2938E4u;
label_2938e4:
    // 0x2938e4: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x2938e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_2938e8:
    // 0x2938e8: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x2938e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_2938ec:
    // 0x2938ec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2938ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2938f0:
    // 0x2938f0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2938f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2938f4:
    // 0x2938f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2938f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2938f8:
    // 0x2938f8: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_2938fc:
    if (ctx->pc == 0x2938FCu) {
        ctx->pc = 0x2938FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2938F8u;
        // 0x2938fc: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293900u;
        goto label_293900;
    }
    ctx->pc = 0x2938F8u;
    {
        const bool branch_taken_0x2938f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2938FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2938F8u;
        // 0x2938fc: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2938f8) {
            ctx->pc = 0x2939B0u;
            goto label_2939b0;
        }
    }
    ctx->pc = 0x293900u;
label_293900:
    // 0x293900: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x293900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_293904:
    // 0x293904: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x293904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
label_293908:
    // 0x293908: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x293908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_29390c:
    // 0x29390c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_293910:
    if (ctx->pc == 0x293910u) {
        ctx->pc = 0x293910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29390Cu;
        // 0x293910: 0x34820001  ori         $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x293914u;
        goto label_293914;
    }
    ctx->pc = 0x29390Cu;
    {
        const bool branch_taken_0x29390c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29390Cu;
        // 0x293910: 0x34820001  ori         $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29390c) {
            ctx->pc = 0x2939B0u;
            goto label_2939b0;
        }
    }
    ctx->pc = 0x293914u;
label_293914:
    // 0x293914: 0x10000026  b           . + 4 + (0x26 << 2)
label_293918:
    if (ctx->pc == 0x293918u) {
        ctx->pc = 0x293918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293914u;
        // 0x293918: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29391Cu;
        goto label_29391c;
    }
    ctx->pc = 0x293914u;
    {
        const bool branch_taken_0x293914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293914u;
        // 0x293918: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293914) {
            ctx->pc = 0x2939B0u;
            goto label_2939b0;
        }
    }
    ctx->pc = 0x29391Cu;
label_29391c:
    // 0x29391c: 0x0  nop
    ctx->pc = 0x29391cu;
    // NOP
label_293920:
    // 0x293920: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x293920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_293924:
    // 0x293924: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x293924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
label_293928:
    // 0x293928: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x293928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_29392c:
    // 0x29392c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x29392cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_293930:
    // 0x293930: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_293934:
    if (ctx->pc == 0x293934u) {
        ctx->pc = 0x293938u;
        goto label_293938;
    }
    ctx->pc = 0x293930u;
    {
        const bool branch_taken_0x293930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x293930) {
            ctx->pc = 0x293948u;
            goto label_293948;
        }
    }
    ctx->pc = 0x293938u;
label_293938:
    // 0x293938: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x293938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_29393c:
    // 0x29393c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x29393cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_293940:
    // 0x293940: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x293940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_293944:
    // 0x293944: 0x0  nop
    ctx->pc = 0x293944u;
    // NOP
label_293948:
    // 0x293948: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x293948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_29394c:
    // 0x29394c: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x29394cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
label_293950:
    // 0x293950: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x293950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_293954:
    // 0x293954: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x293954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_293958:
    // 0x293958: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_29395c:
    if (ctx->pc == 0x29395Cu) {
        ctx->pc = 0x293960u;
        goto label_293960;
    }
    ctx->pc = 0x293958u;
    {
        const bool branch_taken_0x293958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x293958) {
            ctx->pc = 0x293978u;
            goto label_293978;
        }
    }
    ctx->pc = 0x293960u;
label_293960:
    // 0x293960: 0x920208e8  lbu         $v0, 0x8E8($s0)
    ctx->pc = 0x293960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
label_293964:
    // 0x293964: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_293968:
    if (ctx->pc == 0x293968u) {
        ctx->pc = 0x29396Cu;
        goto label_29396c;
    }
    ctx->pc = 0x293964u;
    {
        const bool branch_taken_0x293964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293964) {
            ctx->pc = 0x293978u;
            goto label_293978;
        }
    }
    ctx->pc = 0x29396Cu;
label_29396c:
    // 0x29396c: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x29396cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_293970:
    // 0x293970: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x293970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_293974:
    // 0x293974: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x293974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_293978:
    // 0x293978: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x293978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_29397c:
    // 0x29397c: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x29397cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
label_293980:
    // 0x293980: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x293980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_293984:
    // 0x293984: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x293984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_293988:
    // 0x293988: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_29398c:
    if (ctx->pc == 0x29398Cu) {
        ctx->pc = 0x293990u;
        goto label_293990;
    }
    ctx->pc = 0x293988u;
    {
        const bool branch_taken_0x293988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x293988) {
            ctx->pc = 0x2939B0u;
            goto label_2939b0;
        }
    }
    ctx->pc = 0x293990u;
label_293990:
    // 0x293990: 0x920308e8  lbu         $v1, 0x8E8($s0)
    ctx->pc = 0x293990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
label_293994:
    // 0x293994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x293994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_293998:
    // 0x293998: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_29399c:
    if (ctx->pc == 0x29399Cu) {
        ctx->pc = 0x2939A0u;
        goto label_2939a0;
    }
    ctx->pc = 0x293998u;
    {
        const bool branch_taken_0x293998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x293998) {
            ctx->pc = 0x2939B0u;
            goto label_2939b0;
        }
    }
    ctx->pc = 0x2939A0u;
label_2939a0:
    // 0x2939a0: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x2939a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_2939a4:
    // 0x2939a4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2939a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2939a8:
    // 0x2939a8: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x2939a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_2939ac:
    // 0x2939ac: 0x0  nop
    ctx->pc = 0x2939acu;
    // NOP
label_2939b0:
    // 0x2939b0: 0x920307d6  lbu         $v1, 0x7D6($s0)
    ctx->pc = 0x2939b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2006)));
label_2939b4:
    // 0x2939b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2939b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2939b8:
    // 0x2939b8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_2939bc:
    if (ctx->pc == 0x2939BCu) {
        ctx->pc = 0x2939C0u;
        goto label_2939c0;
    }
    ctx->pc = 0x2939B8u;
    {
        const bool branch_taken_0x2939b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2939b8) {
            ctx->pc = 0x2939E0u;
            goto label_2939e0;
        }
    }
    ctx->pc = 0x2939C0u;
label_2939c0:
    // 0x2939c0: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x2939c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_2939c4:
    // 0x2939c4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x2939c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_2939c8:
    // 0x2939c8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2939c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_2939cc:
    // 0x2939cc: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x2939ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
label_2939d0:
    // 0x2939d0: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x2939d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_2939d4:
    // 0x2939d4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2939d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2939d8:
    // 0x2939d8: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x2939d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_2939dc:
    // 0x2939dc: 0x0  nop
    ctx->pc = 0x2939dcu;
    // NOP
label_2939e0:
    // 0x2939e0: 0xc0a6d70  jal         func_29B5C0
label_2939e4:
    if (ctx->pc == 0x2939E4u) {
        ctx->pc = 0x2939E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2939E0u;
        // 0x2939e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2939E8u;
        goto label_2939e8;
    }
    ctx->pc = 0x2939E0u;
    SET_GPR_U32(ctx, 31, 0x2939E8u);
    ctx->pc = 0x2939E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2939E0u;
    // 0x2939e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B5C0u, 0x2939E0u, 0x2939E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2939E8u;
label_2939e8:
    // 0x2939e8: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x2939e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_2939ec:
    // 0x2939ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2939ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2939f0:
    // 0x2939f0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2939f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2939f4:
    // 0x2939f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2939f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2939f8:
    // 0x2939f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2939f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2939fc:
    // 0x2939fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_293a00:
    if (ctx->pc == 0x293A00u) {
        ctx->pc = 0x293A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2939FCu;
        // 0x293a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293A04u;
        goto label_293a04;
    }
    ctx->pc = 0x2939FCu;
    {
        const bool branch_taken_0x2939fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2939FCu;
        // 0x293a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2939fc) {
            ctx->pc = 0x293A18u;
            goto label_293a18;
        }
    }
    ctx->pc = 0x293A04u;
label_293a04:
    // 0x293a04: 0xc0a6674  jal         func_2999D0
label_293a08:
    if (ctx->pc == 0x293A08u) {
        ctx->pc = 0x293A0Cu;
        goto label_293a0c;
    }
    ctx->pc = 0x293A04u;
    SET_GPR_U32(ctx, 31, 0x293A0Cu);
    ctx->pc = 0x2999D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2999D0u, 0x293A04u, 0x293A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A0Cu;
label_293a0c:
    // 0x293a0c: 0x10000006  b           . + 4 + (0x6 << 2)
label_293a10:
    if (ctx->pc == 0x293A10u) {
        ctx->pc = 0x293A14u;
        goto label_293a14;
    }
    ctx->pc = 0x293A0Cu;
    {
        const bool branch_taken_0x293a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293a0c) {
            ctx->pc = 0x293A28u;
            goto label_293a28;
        }
    }
    ctx->pc = 0x293A14u;
label_293a14:
    // 0x293a14: 0x0  nop
    ctx->pc = 0x293a14u;
    // NOP
label_293a18:
    // 0x293a18: 0xc0a6300  jal         func_298C00
label_293a1c:
    if (ctx->pc == 0x293A1Cu) {
        ctx->pc = 0x293A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293A18u;
        // 0x293a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293A20u;
        goto label_293a20;
    }
    ctx->pc = 0x293A18u;
    SET_GPR_U32(ctx, 31, 0x293A20u);
    ctx->pc = 0x293A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293A18u;
    // 0x293a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298C00u, 0x293A18u, 0x293A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A20u;
label_293a20:
    // 0x293a20: 0xc0a6834  jal         func_29A0D0
label_293a24:
    if (ctx->pc == 0x293A24u) {
        ctx->pc = 0x293A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293A20u;
        // 0x293a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293A28u;
        goto label_293a28;
    }
    ctx->pc = 0x293A20u;
    SET_GPR_U32(ctx, 31, 0x293A28u);
    ctx->pc = 0x293A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293A20u;
    // 0x293a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A0D0u, 0x293A20u, 0x293A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A28u;
label_293a28:
    // 0x293a28: 0xc0a6b20  jal         func_29AC80
label_293a2c:
    if (ctx->pc == 0x293A2Cu) {
        ctx->pc = 0x293A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293A28u;
        // 0x293a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293A30u;
        goto label_293a30;
    }
    ctx->pc = 0x293A28u;
    SET_GPR_U32(ctx, 31, 0x293A30u);
    ctx->pc = 0x293A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293A28u;
    // 0x293a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AC80u, 0x293A28u, 0x293A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A30u;
label_293a30:
    // 0x293a30: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x293a30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_293a34:
    // 0x293a34: 0x8f390084  lw          $t9, 0x84($t9)
    ctx->pc = 0x293a34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 132)));
label_293a38:
    // 0x293a38: 0x320f809  jalr        $t9
label_293a3c:
    if (ctx->pc == 0x293A3Cu) {
        ctx->pc = 0x293A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293A38u;
        // 0x293a3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293A40u;
        goto label_293a40;
    }
    ctx->pc = 0x293A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x293A40u);
        ctx->pc = 0x293A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293A38u;
        // 0x293a3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293A38u, 0x293A40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x293A40u;
label_293a40:
    // 0x293a40: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x293a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_293a44:
    // 0x293a44: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x293a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_293a48:
    // 0x293a48: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x293a48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_293a4c:
    // 0x293a4c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x293a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_293a50:
    // 0x293a50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293a54:
    // 0x293a54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_293a58:
    if (ctx->pc == 0x293A58u) {
        ctx->pc = 0x293A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293A54u;
        // 0x293a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293A5Cu;
        goto label_293a5c;
    }
    ctx->pc = 0x293A54u;
    {
        const bool branch_taken_0x293a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293A54u;
        // 0x293a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293a54) {
            ctx->pc = 0x293A68u;
            goto label_293a68;
        }
    }
    ctx->pc = 0x293A5Cu;
label_293a5c:
    // 0x293a5c: 0xc0a6e60  jal         func_29B980
label_293a60:
    if (ctx->pc == 0x293A60u) {
        ctx->pc = 0x293A64u;
        goto label_293a64;
    }
    ctx->pc = 0x293A5Cu;
    SET_GPR_U32(ctx, 31, 0x293A64u);
    ctx->pc = 0x29B980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B980u, 0x293A5Cu, 0x293A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A64u;
label_293a64:
    // 0x293a64: 0x0  nop
    ctx->pc = 0x293a64u;
    // NOP
label_293a68:
    // 0x293a68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x293a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_293a6c:
    // 0x293a6c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x293a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_293a70:
    // 0x293a70: 0x8c830858  lw          $v1, 0x858($a0)
    ctx->pc = 0x293a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2136)));
label_293a74:
    // 0x293a74: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_293a78:
    if (ctx->pc == 0x293A78u) {
        ctx->pc = 0x293A7Cu;
        goto label_293a7c;
    }
    ctx->pc = 0x293A74u;
    {
        const bool branch_taken_0x293a74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x293a74) {
            ctx->pc = 0x293A88u;
            goto label_293a88;
        }
    }
    ctx->pc = 0x293A7Cu;
label_293a7c:
    // 0x293a7c: 0x92020160  lbu         $v0, 0x160($s0)
    ctx->pc = 0x293a7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 352)));
label_293a80:
    // 0x293a80: 0xa0620160  sb          $v0, 0x160($v1)
    ctx->pc = 0x293a80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 352), (uint8_t)GPR_U32(ctx, 2));
label_293a84:
    // 0x293a84: 0x0  nop
    ctx->pc = 0x293a84u;
    // NOP
label_293a88:
    // 0x293a88: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x293a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_293a8c:
    // 0x293a8c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x293a8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_293a90:
    // 0x293a90: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_293a94:
    if (ctx->pc == 0x293A94u) {
        ctx->pc = 0x293A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293A90u;
        // 0x293a94: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293A98u;
        goto label_293a98;
    }
    ctx->pc = 0x293A90u;
    {
        const bool branch_taken_0x293a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293A90u;
        // 0x293a94: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293a90) {
            ctx->pc = 0x293A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293a70;
        }
    }
    ctx->pc = 0x293A98u;
label_293a98:
    // 0x293a98: 0xc0a62f0  jal         func_298BC0
label_293a9c:
    if (ctx->pc == 0x293A9Cu) {
        ctx->pc = 0x293A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293A98u;
        // 0x293a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293AA0u;
        goto label_293aa0;
    }
    ctx->pc = 0x293A98u;
    SET_GPR_U32(ctx, 31, 0x293AA0u);
    ctx->pc = 0x293A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293A98u;
    // 0x293a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298BC0u, 0x293A98u, 0x293AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293AA0u;
label_293aa0:
    // 0x293aa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x293aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_293aa4:
    // 0x293aa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x293aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_293aa8:
    // 0x293aa8: 0x3e00008  jr          $ra
label_293aac:
    if (ctx->pc == 0x293AACu) {
        ctx->pc = 0x293AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293AA8u;
        // 0x293aac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293AB0u;
        goto label_fallthrough_0x293aa8;
    }
    ctx->pc = 0x293AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293AA8u;
        // 0x293aac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x293aa8:
    ctx->pc = 0x293AB0u;
}
