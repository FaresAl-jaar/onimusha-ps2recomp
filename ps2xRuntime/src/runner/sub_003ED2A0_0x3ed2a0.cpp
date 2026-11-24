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

// Function: sub_003ED2A0
// Address: 0x3ed2a0 - 0x3ed7a8
void sub_003ED2A0_0x3ed2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED2A0_0x3ed2a0");
#endif

    switch (ctx->pc) {
        case 0x3ed2b4u: goto label_3ed2b4;
        case 0x3ed2ccu: goto label_3ed2cc;
        case 0x3ed3dcu: goto label_3ed3dc;
        case 0x3ed3ecu: goto label_3ed3ec;
        case 0x3ed428u: goto label_3ed428;
        case 0x3ed450u: goto label_3ed450;
        case 0x3ed478u: goto label_3ed478;
        case 0x3ed4a4u: goto label_3ed4a4;
        case 0x3ed4d0u: goto label_3ed4d0;
        case 0x3ed4fcu: goto label_3ed4fc;
        case 0x3ed52cu: goto label_3ed52c;
        case 0x3ed560u: goto label_3ed560;
        case 0x3ed590u: goto label_3ed590;
        case 0x3ed5c0u: goto label_3ed5c0;
        case 0x3ed5f0u: goto label_3ed5f0;
        case 0x3ed618u: goto label_3ed618;
        case 0x3ed644u: goto label_3ed644;
        case 0x3ed670u: goto label_3ed670;
        case 0x3ed698u: goto label_3ed698;
        case 0x3ed6c0u: goto label_3ed6c0;
        case 0x3ed6e8u: goto label_3ed6e8;
        case 0x3ed710u: goto label_3ed710;
        case 0x3ed738u: goto label_3ed738;
        case 0x3ed768u: goto label_3ed768;
        case 0x3ed790u: goto label_3ed790;
        case 0x3ed798u: goto label_3ed798;
        default: break;
    }

    ctx->pc = 0x3ed2a0u;

    // 0x3ed2a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ed2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ed2a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ed2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ed2a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ed2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ed2ac: 0xc0fb3f4  jal         func_3ECFD0
    ctx->pc = 0x3ED2ACu;
    SET_GPR_U32(ctx, 31, 0x3ED2B4u);
    ctx->pc = 0x3ED2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED2ACu;
    // 0x3ed2b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ECFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ECFD0u, 0x3ED2ACu, 0x3ED2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED2B4u;
label_3ed2b4:
    // 0x3ed2b4: 0x8e0206ac  lw          $v0, 0x6AC($s0)
    ctx->pc = 0x3ed2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x3ed2b8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3ed2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3ed2bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ED2BCu;
    {
        const bool branch_taken_0x3ed2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ED2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED2BCu;
        // 0x3ed2c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed2bc) {
            ctx->pc = 0x3ED2D0u;
            goto label_3ed2d0;
        }
    }
    ctx->pc = 0x3ED2C4u;
    // 0x3ed2c4: 0xc0fb440  jal         func_3ED100
    ctx->pc = 0x3ED2C4u;
    SET_GPR_U32(ctx, 31, 0x3ED2CCu);
    ctx->pc = 0x3ED100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ED100u, 0x3ED2C4u, 0x3ED2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED2CCu;
label_3ed2cc:
    // 0x3ed2cc: 0x0  nop
    ctx->pc = 0x3ed2ccu;
    // NOP
label_3ed2d0:
    // 0x3ed2d0: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x3ed2d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x3ed2d4: 0x24020035  addiu       $v0, $zero, 0x35
    ctx->pc = 0x3ed2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x3ed2d8: 0x10620125  beq         $v1, $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x3ED2D8u;
    {
        const bool branch_taken_0x3ed2d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3ED2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED2D8u;
        // 0x3ed2dc: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed2d8) {
            ctx->pc = 0x3ED770u;
            goto label_3ed770;
        }
    }
    ctx->pc = 0x3ED2E0u;
    // 0x3ed2e0: 0x10620117  beq         $v1, $v0, . + 4 + (0x117 << 2)
    ctx->pc = 0x3ED2E0u;
    {
        const bool branch_taken_0x3ed2e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ed2e0) {
            ctx->pc = 0x3ED740u;
            goto label_3ed740;
        }
    }
    ctx->pc = 0x3ED2E8u;
    // 0x3ed2e8: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x3ed2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x3ed2ec: 0x1062010a  beq         $v1, $v0, . + 4 + (0x10A << 2)
    ctx->pc = 0x3ED2ECu;
    {
        const bool branch_taken_0x3ed2ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3ED2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED2ECu;
        // 0x3ed2f0: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed2ec) {
            ctx->pc = 0x3ED718u;
            goto label_3ed718;
        }
    }
    ctx->pc = 0x3ED2F4u;
    // 0x3ed2f4: 0x106200fe  beq         $v1, $v0, . + 4 + (0xFE << 2)
    ctx->pc = 0x3ED2F4u;
    {
        const bool branch_taken_0x3ed2f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ed2f4) {
            ctx->pc = 0x3ED6F0u;
            goto label_3ed6f0;
        }
    }
    ctx->pc = 0x3ED2FCu;
    // 0x3ed2fc: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x3ed2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x3ed300: 0x106200f1  beq         $v1, $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x3ED300u;
    {
        const bool branch_taken_0x3ed300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3ED304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED300u;
        // 0x3ed304: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed300) {
            ctx->pc = 0x3ED6C8u;
            goto label_3ed6c8;
        }
    }
    ctx->pc = 0x3ED308u;
    // 0x3ed308: 0x106200e5  beq         $v1, $v0, . + 4 + (0xE5 << 2)
    ctx->pc = 0x3ED308u;
    {
        const bool branch_taken_0x3ed308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ed308) {
            ctx->pc = 0x3ED6A0u;
            goto label_3ed6a0;
        }
    }
    ctx->pc = 0x3ED310u;
    // 0x3ed310: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x3ed310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x3ed314: 0x106200d8  beq         $v1, $v0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x3ED314u;
    {
        const bool branch_taken_0x3ed314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3ED318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED314u;
        // 0x3ed318: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed314) {
            ctx->pc = 0x3ED678u;
            goto label_3ed678;
        }
    }
    ctx->pc = 0x3ED31Cu;
    // 0x3ed31c: 0x106200cc  beq         $v1, $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x3ED31Cu;
    {
        const bool branch_taken_0x3ed31c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ed31c) {
            ctx->pc = 0x3ED650u;
            goto label_3ed650;
        }
    }
    ctx->pc = 0x3ED324u;
    // 0x3ed324: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x3ed324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3ed328: 0x106200bd  beq         $v1, $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x3ED328u;
    {
        const bool branch_taken_0x3ed328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3ED32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED328u;
        // 0x3ed32c: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed328) {
            ctx->pc = 0x3ED620u;
            goto label_3ed620;
        }
    }
    ctx->pc = 0x3ED330u;
    // 0x3ed330: 0x106200b1  beq         $v1, $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x3ED330u;
    {
        const bool branch_taken_0x3ed330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ed330) {
            ctx->pc = 0x3ED5F8u;
            goto label_3ed5f8;
        }
    }
    ctx->pc = 0x3ED338u;
    // 0x3ed338: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x3ed338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x3ed33c: 0x106200a2  beq         $v1, $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x3ED33Cu;
    {
        const bool branch_taken_0x3ed33c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3ED340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED33Cu;
        // 0x3ed340: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed33c) {
            ctx->pc = 0x3ED5C8u;
            goto label_3ed5c8;
        }
    }
    ctx->pc = 0x3ED344u;
    // 0x3ed344: 0x10620094  beq         $v1, $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x3ED344u;
    {
        const bool branch_taken_0x3ed344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ed344) {
            ctx->pc = 0x3ED598u;
            goto label_3ed598;
        }
    }
    ctx->pc = 0x3ED34Cu;
    // 0x3ed34c: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x3ed34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x3ed350: 0x10620085  beq         $v1, $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x3ED350u;
    {
        const bool branch_taken_0x3ed350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3ED354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED350u;
        // 0x3ed354: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed350) {
            ctx->pc = 0x3ED568u;
            goto label_3ed568;
        }
    }
    ctx->pc = 0x3ED358u;
    // 0x3ed358: 0x10620077  beq         $v1, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x3ED358u;
    {
        const bool branch_taken_0x3ed358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ed358) {
            ctx->pc = 0x3ED538u;
            goto label_3ed538;
        }
    }
    ctx->pc = 0x3ED360u;
    // 0x3ed360: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x3ed360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x3ed364: 0x10620068  beq         $v1, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x3ED364u;
    {
        const bool branch_taken_0x3ed364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3ED368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED364u;
        // 0x3ed368: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed364) {
            ctx->pc = 0x3ED508u;
            goto label_3ed508;
        }
    }
    ctx->pc = 0x3ED36Cu;
    // 0x3ed36c: 0x1062005a  beq         $v1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x3ED36Cu;
    {
        const bool branch_taken_0x3ed36c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ed36c) {
            ctx->pc = 0x3ED4D8u;
            goto label_3ed4d8;
        }
    }
    ctx->pc = 0x3ED374u;
    // 0x3ed374: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x3ed374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3ed378: 0x1062004d  beq         $v1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x3ED378u;
    {
        const bool branch_taken_0x3ed378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3ED37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED378u;
        // 0x3ed37c: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed378) {
            ctx->pc = 0x3ED4B0u;
            goto label_3ed4b0;
        }
    }
    ctx->pc = 0x3ED380u;
    // 0x3ed380: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x3ED380u;
    {
        const bool branch_taken_0x3ed380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ed380) {
            ctx->pc = 0x3ED480u;
            goto label_3ed480;
        }
    }
    ctx->pc = 0x3ED388u;
    // 0x3ed388: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3ed388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3ed38c: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3ED38Cu;
    {
        const bool branch_taken_0x3ed38c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3ED390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED38Cu;
        // 0x3ed390: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed38c) {
            ctx->pc = 0x3ED458u;
            goto label_3ed458;
        }
    }
    ctx->pc = 0x3ED394u;
    // 0x3ed394: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3ED394u;
    {
        const bool branch_taken_0x3ed394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ed394) {
            ctx->pc = 0x3ED430u;
            goto label_3ed430;
        }
    }
    ctx->pc = 0x3ED39Cu;
    // 0x3ed39c: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x3ed39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x3ed3a0: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3ED3A0u;
    {
        const bool branch_taken_0x3ed3a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3ED3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED3A0u;
        // 0x3ed3a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed3a0) {
            ctx->pc = 0x3ED408u;
            goto label_3ed408;
        }
    }
    ctx->pc = 0x3ED3A8u;
    // 0x3ed3a8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ED3A8u;
    {
        const bool branch_taken_0x3ed3a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ed3a8) {
            ctx->pc = 0x3ED3B8u;
            goto label_3ed3b8;
        }
    }
    ctx->pc = 0x3ED3B0u;
    // 0x3ed3b0: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x3ED3B0u;
    {
        const bool branch_taken_0x3ed3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed3b0) {
            ctx->pc = 0x3ED790u;
            goto label_3ed790;
        }
    }
    ctx->pc = 0x3ED3B8u;
label_3ed3b8:
    // 0x3ed3b8: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x3ed3b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3ed3bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ed3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ed3c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed3c4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3ed3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3ed3c8: 0xa603078c  sh          $v1, 0x78C($s0)
    ctx->pc = 0x3ed3c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ed3cc: 0xae0207b4  sw          $v0, 0x7B4($s0)
    ctx->pc = 0x3ed3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1972), GPR_U32(ctx, 2));
    // 0x3ed3d0: 0xae0007b8  sw          $zero, 0x7B8($s0)
    ctx->pc = 0x3ed3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    // 0x3ed3d4: 0xc09759c  jal         func_25D670
    ctx->pc = 0x3ED3D4u;
    SET_GPR_U32(ctx, 31, 0x3ED3DCu);
    ctx->pc = 0x3ED3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED3D4u;
    // 0x3ed3d8: 0xa2002b3f  sb          $zero, 0x2B3F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11071), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D670u, 0x3ED3D4u, 0x3ED3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED3DCu;
label_3ed3dc:
    // 0x3ed3dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3ED3DCu;
    {
        const bool branch_taken_0x3ed3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ED3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED3DCu;
        // 0x3ed3e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed3dc) {
            ctx->pc = 0x3ED3F8u;
            goto label_3ed3f8;
        }
    }
    ctx->pc = 0x3ED3E4u;
    // 0x3ed3e4: 0xc0fb2c8  jal         func_3ECB20
    ctx->pc = 0x3ED3E4u;
    SET_GPR_U32(ctx, 31, 0x3ED3ECu);
    ctx->pc = 0x3ECB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ECB20u, 0x3ED3E4u, 0x3ED3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED3ECu;
label_3ed3ec:
    // 0x3ed3ec: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x3ED3ECu;
    {
        const bool branch_taken_0x3ed3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed3ec) {
            ctx->pc = 0x3ED790u;
            goto label_3ed790;
        }
    }
    ctx->pc = 0x3ED3F4u;
    // 0x3ed3f4: 0x0  nop
    ctx->pc = 0x3ed3f4u;
    // NOP
label_3ed3f8:
    // 0x3ed3f8: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x3ed3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x3ed3fc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3ed3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3ed400: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x3ED400u;
    {
        const bool branch_taken_0x3ed400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED400u;
        // 0x3ed404: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed400) {
            ctx->pc = 0x3ED790u;
            goto label_3ed790;
        }
    }
    ctx->pc = 0x3ED408u;
label_3ed408:
    // 0x3ed408: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x3ed408u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3ed40c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ed40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ed410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed414: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3ed414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3ed418: 0xa603078c  sh          $v1, 0x78C($s0)
    ctx->pc = 0x3ed418u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ed41c: 0xae0207b4  sw          $v0, 0x7B4($s0)
    ctx->pc = 0x3ed41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1972), GPR_U32(ctx, 2));
    // 0x3ed420: 0xc0faf10  jal         func_3EBC40
    ctx->pc = 0x3ED420u;
    SET_GPR_U32(ctx, 31, 0x3ED428u);
    ctx->pc = 0x3ED424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED420u;
    // 0x3ed424: 0xae0007b8  sw          $zero, 0x7B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBC40u, 0x3ED420u, 0x3ED428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED428u;
label_3ed428:
    // 0x3ed428: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x3ED428u;
    {
        const bool branch_taken_0x3ed428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed428) {
            ctx->pc = 0x3ED790u;
            goto label_3ed790;
        }
    }
    ctx->pc = 0x3ED430u;
label_3ed430:
    // 0x3ed430: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x3ed430u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3ed434: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ed434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ed438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed43c: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x3ed43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x3ed440: 0xa603078c  sh          $v1, 0x78C($s0)
    ctx->pc = 0x3ed440u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ed444: 0xae0207b4  sw          $v0, 0x7B4($s0)
    ctx->pc = 0x3ed444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1972), GPR_U32(ctx, 2));
    // 0x3ed448: 0xc0faf88  jal         func_3EBE20
    ctx->pc = 0x3ED448u;
    SET_GPR_U32(ctx, 31, 0x3ED450u);
    ctx->pc = 0x3ED44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED448u;
    // 0x3ed44c: 0xae0207b8  sw          $v0, 0x7B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBE20u, 0x3ED448u, 0x3ED450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED450u;
label_3ed450:
    // 0x3ed450: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x3ED450u;
    {
        const bool branch_taken_0x3ed450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed450) {
            ctx->pc = 0x3ED790u;
            goto label_3ed790;
        }
    }
    ctx->pc = 0x3ED458u;
label_3ed458:
    // 0x3ed458: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x3ed458u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3ed45c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ed45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ed460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed464: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3ed464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3ed468: 0xa603078c  sh          $v1, 0x78C($s0)
    ctx->pc = 0x3ed468u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ed46c: 0xae0207b4  sw          $v0, 0x7B4($s0)
    ctx->pc = 0x3ed46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1972), GPR_U32(ctx, 2));
    // 0x3ed470: 0xc0fa660  jal         func_3E9980
    ctx->pc = 0x3ED470u;
    SET_GPR_U32(ctx, 31, 0x3ED478u);
    ctx->pc = 0x3ED474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED470u;
    // 0x3ed474: 0xae0007b8  sw          $zero, 0x7B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9980u, 0x3ED470u, 0x3ED478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED478u;
label_3ed478:
    // 0x3ed478: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x3ED478u;
    {
        const bool branch_taken_0x3ed478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed478) {
            ctx->pc = 0x3ED790u;
            goto label_3ed790;
        }
    }
    ctx->pc = 0x3ED480u;
label_3ed480:
    // 0x3ed480: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x3ed480u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3ed484: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ed484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ed488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed48c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ed48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed490: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3ed490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3ed494: 0xa603078c  sh          $v1, 0x78C($s0)
    ctx->pc = 0x3ed494u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ed498: 0xae0207b4  sw          $v0, 0x7B4($s0)
    ctx->pc = 0x3ed498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1972), GPR_U32(ctx, 2));
    // 0x3ed49c: 0xc0fa68c  jal         func_3E9A30
    ctx->pc = 0x3ED49Cu;
    SET_GPR_U32(ctx, 31, 0x3ED4A4u);
    ctx->pc = 0x3ED4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED49Cu;
    // 0x3ed4a0: 0xae0007b8  sw          $zero, 0x7B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9A30u, 0x3ED49Cu, 0x3ED4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED4A4u;
label_3ed4a4:
    // 0x3ed4a4: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x3ED4A4u;
    {
        const bool branch_taken_0x3ed4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed4a4) {
            ctx->pc = 0x3ED790u;
            goto label_3ed790;
        }
    }
    ctx->pc = 0x3ED4ACu;
    // 0x3ed4ac: 0x0  nop
    ctx->pc = 0x3ed4acu;
    // NOP
label_3ed4b0:
    // 0x3ed4b0: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x3ed4b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3ed4b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ed4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ed4b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed4bc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3ed4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3ed4c0: 0xa603078c  sh          $v1, 0x78C($s0)
    ctx->pc = 0x3ed4c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ed4c4: 0xae0207b4  sw          $v0, 0x7B4($s0)
    ctx->pc = 0x3ed4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1972), GPR_U32(ctx, 2));
    // 0x3ed4c8: 0xc0faacc  jal         func_3EAB30
    ctx->pc = 0x3ED4C8u;
    SET_GPR_U32(ctx, 31, 0x3ED4D0u);
    ctx->pc = 0x3ED4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED4C8u;
    // 0x3ed4cc: 0xae0007b8  sw          $zero, 0x7B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EAB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EAB30u, 0x3ED4C8u, 0x3ED4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED4D0u;
label_3ed4d0:
    // 0x3ed4d0: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x3ED4D0u;
    {
        const bool branch_taken_0x3ed4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed4d0) {
            ctx->pc = 0x3ED790u;
            goto label_3ed790;
        }
    }
    ctx->pc = 0x3ED4D8u;
label_3ed4d8:
    // 0x3ed4d8: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x3ed4d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3ed4dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ed4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ed4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed4e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ed4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed4e8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3ed4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3ed4ec: 0xa603078c  sh          $v1, 0x78C($s0)
    ctx->pc = 0x3ed4ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ed4f0: 0xae0207b4  sw          $v0, 0x7B4($s0)
    ctx->pc = 0x3ed4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1972), GPR_U32(ctx, 2));
    // 0x3ed4f4: 0xc0faa04  jal         func_3EA810
    ctx->pc = 0x3ED4F4u;
    SET_GPR_U32(ctx, 31, 0x3ED4FCu);
    ctx->pc = 0x3ED4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED4F4u;
    // 0x3ed4f8: 0xae0007b8  sw          $zero, 0x7B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EA810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EA810u, 0x3ED4F4u, 0x3ED4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED4FCu;
label_3ed4fc:
    // 0x3ed4fc: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x3ED4FCu;
    {
        const bool branch_taken_0x3ed4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed4fc) {
            ctx->pc = 0x3ED790u;
            goto label_3ed790;
        }
    }
    ctx->pc = 0x3ED504u;
    // 0x3ed504: 0x0  nop
    ctx->pc = 0x3ed504u;
    // NOP
label_3ed508:
    // 0x3ed508: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x3ed508u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3ed50c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ed50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ed510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed514: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ed514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ed518: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3ed518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3ed51c: 0xa603078c  sh          $v1, 0x78C($s0)
    ctx->pc = 0x3ed51cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ed520: 0xae0207b4  sw          $v0, 0x7B4($s0)
    ctx->pc = 0x3ed520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1972), GPR_U32(ctx, 2));
    // 0x3ed524: 0xc0faa04  jal         func_3EA810
    ctx->pc = 0x3ED524u;
    SET_GPR_U32(ctx, 31, 0x3ED52Cu);
    ctx->pc = 0x3ED528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED524u;
    // 0x3ed528: 0xae0007b8  sw          $zero, 0x7B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EA810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EA810u, 0x3ED524u, 0x3ED52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED52Cu;
label_3ed52c:
    // 0x3ed52c: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x3ED52Cu;
    {
        const bool branch_taken_0x3ed52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed52c) {
            ctx->pc = 0x3ED790u;
            goto label_3ed790;
        }
    }
    ctx->pc = 0x3ED534u;
    // 0x3ed534: 0x0  nop
    ctx->pc = 0x3ed534u;
    // NOP
label_3ed538:
    // 0x3ed538: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x3ed538u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3ed53c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ed53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ed540: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ed540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ed544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed548: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3ed548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed54c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3ed54cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3ed550: 0xa603078c  sh          $v1, 0x78C($s0)
    ctx->pc = 0x3ed550u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ed554: 0xae0207b4  sw          $v0, 0x7B4($s0)
    ctx->pc = 0x3ed554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1972), GPR_U32(ctx, 2));
    // 0x3ed558: 0xc0fa72c  jal         func_3E9CB0
    ctx->pc = 0x3ED558u;
    SET_GPR_U32(ctx, 31, 0x3ED560u);
    ctx->pc = 0x3ED55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED558u;
    // 0x3ed55c: 0xae0007b8  sw          $zero, 0x7B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9CB0u, 0x3ED558u, 0x3ED560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED560u;
label_3ed560:
    // 0x3ed560: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x3ED560u;
    {
        const bool branch_taken_0x3ed560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed560) {
            ctx->pc = 0x3ED790u;
            goto label_3ed790;
        }
    }
    ctx->pc = 0x3ED568u;
label_3ed568:
    // 0x3ed568: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x3ed568u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3ed56c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ed56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ed570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed574: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ed574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed578: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3ed578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ed57c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3ed57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3ed580: 0xa603078c  sh          $v1, 0x78C($s0)
    ctx->pc = 0x3ed580u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ed584: 0xae0207b4  sw          $v0, 0x7B4($s0)
    ctx->pc = 0x3ed584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1972), GPR_U32(ctx, 2));
    // 0x3ed588: 0xc0fa72c  jal         func_3E9CB0
    ctx->pc = 0x3ED588u;
    SET_GPR_U32(ctx, 31, 0x3ED590u);
    ctx->pc = 0x3ED58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED588u;
    // 0x3ed58c: 0xae0007b8  sw          $zero, 0x7B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9CB0u, 0x3ED588u, 0x3ED590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED590u;
label_3ed590:
    // 0x3ed590: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x3ED590u;
    {
        const bool branch_taken_0x3ed590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed590) {
            ctx->pc = 0x3ED790u;
            goto label_3ed790;
        }
    }
    ctx->pc = 0x3ED598u;
label_3ed598:
    // 0x3ed598: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x3ed598u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3ed59c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ed59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ed5a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed5a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ed5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ed5a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ed5a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed5ac: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3ed5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3ed5b0: 0xa603078c  sh          $v1, 0x78C($s0)
    ctx->pc = 0x3ed5b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ed5b4: 0xae0207b4  sw          $v0, 0x7B4($s0)
    ctx->pc = 0x3ed5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1972), GPR_U32(ctx, 2));
    // 0x3ed5b8: 0xc0fa72c  jal         func_3E9CB0
    ctx->pc = 0x3ED5B8u;
    SET_GPR_U32(ctx, 31, 0x3ED5C0u);
    ctx->pc = 0x3ED5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED5B8u;
    // 0x3ed5bc: 0xae0007b8  sw          $zero, 0x7B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9CB0u, 0x3ED5B8u, 0x3ED5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED5C0u;
label_3ed5c0:
    // 0x3ed5c0: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x3ED5C0u;
    {
        const bool branch_taken_0x3ed5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed5c0) {
            ctx->pc = 0x3ED790u;
            goto label_3ed790;
        }
    }
    ctx->pc = 0x3ED5C8u;
label_3ed5c8:
    // 0x3ed5c8: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x3ed5c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3ed5cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ed5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ed5d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed5d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ed5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed5d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ed5d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed5dc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3ed5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3ed5e0: 0xa603078c  sh          $v1, 0x78C($s0)
    ctx->pc = 0x3ed5e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ed5e4: 0xae0207b4  sw          $v0, 0x7B4($s0)
    ctx->pc = 0x3ed5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1972), GPR_U32(ctx, 2));
    // 0x3ed5e8: 0xc0fa72c  jal         func_3E9CB0
    ctx->pc = 0x3ED5E8u;
    SET_GPR_U32(ctx, 31, 0x3ED5F0u);
    ctx->pc = 0x3ED5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED5E8u;
    // 0x3ed5ec: 0xae0007b8  sw          $zero, 0x7B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9CB0u, 0x3ED5E8u, 0x3ED5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED5F0u;
label_3ed5f0:
    // 0x3ed5f0: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x3ED5F0u;
    {
        const bool branch_taken_0x3ed5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed5f0) {
            ctx->pc = 0x3ED790u;
            goto label_3ed790;
        }
    }
    ctx->pc = 0x3ED5F8u;
label_3ed5f8:
    // 0x3ed5f8: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x3ed5f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3ed5fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ed5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ed600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed604: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3ed604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3ed608: 0xa603078c  sh          $v1, 0x78C($s0)
    ctx->pc = 0x3ed608u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ed60c: 0xae0207b4  sw          $v0, 0x7B4($s0)
    ctx->pc = 0x3ed60cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1972), GPR_U32(ctx, 2));
    // 0x3ed610: 0xc0fa714  jal         func_3E9C50
    ctx->pc = 0x3ED610u;
    SET_GPR_U32(ctx, 31, 0x3ED618u);
    ctx->pc = 0x3ED614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED610u;
    // 0x3ed614: 0xae0007b8  sw          $zero, 0x7B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9C50u, 0x3ED610u, 0x3ED618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED618u;
label_3ed618:
    // 0x3ed618: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x3ED618u;
    {
        const bool branch_taken_0x3ed618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed618) {
            ctx->pc = 0x3ED790u;
            goto label_3ed790;
        }
    }
    ctx->pc = 0x3ED620u;
label_3ed620:
    // 0x3ed620: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x3ed620u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3ed624: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ed624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ed628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed62c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ed62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ed630: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3ed630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3ed634: 0xa603078c  sh          $v1, 0x78C($s0)
    ctx->pc = 0x3ed634u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ed638: 0xae0207b4  sw          $v0, 0x7B4($s0)
    ctx->pc = 0x3ed638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1972), GPR_U32(ctx, 2));
    // 0x3ed63c: 0xc0fa68c  jal         func_3E9A30
    ctx->pc = 0x3ED63Cu;
    SET_GPR_U32(ctx, 31, 0x3ED644u);
    ctx->pc = 0x3ED640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED63Cu;
    // 0x3ed640: 0xae0007b8  sw          $zero, 0x7B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9A30u, 0x3ED63Cu, 0x3ED644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED644u;
label_3ed644:
    // 0x3ed644: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x3ED644u;
    {
        const bool branch_taken_0x3ed644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed644) {
            ctx->pc = 0x3ED790u;
            goto label_3ed790;
        }
    }
    ctx->pc = 0x3ED64Cu;
    // 0x3ed64c: 0x0  nop
    ctx->pc = 0x3ed64cu;
    // NOP
label_3ed650:
    // 0x3ed650: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x3ed650u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3ed654: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ed654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ed658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed65c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3ed65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3ed660: 0xa603078c  sh          $v1, 0x78C($s0)
    ctx->pc = 0x3ed660u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ed664: 0xae0207b4  sw          $v0, 0x7B4($s0)
    ctx->pc = 0x3ed664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1972), GPR_U32(ctx, 2));
    // 0x3ed668: 0xc0fa6e4  jal         func_3E9B90
    ctx->pc = 0x3ED668u;
    SET_GPR_U32(ctx, 31, 0x3ED670u);
    ctx->pc = 0x3ED66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED668u;
    // 0x3ed66c: 0xae0007b8  sw          $zero, 0x7B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9B90u, 0x3ED668u, 0x3ED670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED670u;
label_3ed670:
    // 0x3ed670: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x3ED670u;
    {
        const bool branch_taken_0x3ed670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed670) {
            ctx->pc = 0x3ED790u;
            goto label_3ed790;
        }
    }
    ctx->pc = 0x3ED678u;
label_3ed678:
    // 0x3ed678: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x3ed678u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3ed67c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ed67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ed680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed684: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3ed684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3ed688: 0xa603078c  sh          $v1, 0x78C($s0)
    ctx->pc = 0x3ed688u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ed68c: 0xae0207b4  sw          $v0, 0x7B4($s0)
    ctx->pc = 0x3ed68cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1972), GPR_U32(ctx, 2));
    // 0x3ed690: 0xc0fab90  jal         func_3EAE40
    ctx->pc = 0x3ED690u;
    SET_GPR_U32(ctx, 31, 0x3ED698u);
    ctx->pc = 0x3ED694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED690u;
    // 0x3ed694: 0xae0007b8  sw          $zero, 0x7B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EAE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EAE40u, 0x3ED690u, 0x3ED698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED698u;
label_3ed698:
    // 0x3ed698: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x3ED698u;
    {
        const bool branch_taken_0x3ed698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed698) {
            ctx->pc = 0x3ED790u;
            goto label_3ed790;
        }
    }
    ctx->pc = 0x3ED6A0u;
label_3ed6a0:
    // 0x3ed6a0: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x3ed6a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3ed6a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ed6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ed6a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed6ac: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3ed6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3ed6b0: 0xa603078c  sh          $v1, 0x78C($s0)
    ctx->pc = 0x3ed6b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ed6b4: 0xae0207b4  sw          $v0, 0x7B4($s0)
    ctx->pc = 0x3ed6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1972), GPR_U32(ctx, 2));
    // 0x3ed6b8: 0xc0fac54  jal         func_3EB150
    ctx->pc = 0x3ED6B8u;
    SET_GPR_U32(ctx, 31, 0x3ED6C0u);
    ctx->pc = 0x3ED6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED6B8u;
    // 0x3ed6bc: 0xae0007b8  sw          $zero, 0x7B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EB150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EB150u, 0x3ED6B8u, 0x3ED6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED6C0u;
label_3ed6c0:
    // 0x3ed6c0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x3ED6C0u;
    {
        const bool branch_taken_0x3ed6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed6c0) {
            ctx->pc = 0x3ED790u;
            goto label_3ed790;
        }
    }
    ctx->pc = 0x3ED6C8u;
label_3ed6c8:
    // 0x3ed6c8: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x3ed6c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3ed6cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ed6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ed6d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed6d4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3ed6d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3ed6d8: 0xa603078c  sh          $v1, 0x78C($s0)
    ctx->pc = 0x3ed6d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ed6dc: 0xae0207b4  sw          $v0, 0x7B4($s0)
    ctx->pc = 0x3ed6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1972), GPR_U32(ctx, 2));
    // 0x3ed6e0: 0xc0facb0  jal         func_3EB2C0
    ctx->pc = 0x3ED6E0u;
    SET_GPR_U32(ctx, 31, 0x3ED6E8u);
    ctx->pc = 0x3ED6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED6E0u;
    // 0x3ed6e4: 0xae0007b8  sw          $zero, 0x7B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EB2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EB2C0u, 0x3ED6E0u, 0x3ED6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED6E8u;
label_3ed6e8:
    // 0x3ed6e8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x3ED6E8u;
    {
        const bool branch_taken_0x3ed6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed6e8) {
            ctx->pc = 0x3ED790u;
            goto label_3ed790;
        }
    }
    ctx->pc = 0x3ED6F0u;
label_3ed6f0:
    // 0x3ed6f0: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x3ed6f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3ed6f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ed6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ed6f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed6fc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3ed6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3ed700: 0xa603078c  sh          $v1, 0x78C($s0)
    ctx->pc = 0x3ed700u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ed704: 0xae0207b4  sw          $v0, 0x7B4($s0)
    ctx->pc = 0x3ed704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1972), GPR_U32(ctx, 2));
    // 0x3ed708: 0xc0fad0c  jal         func_3EB430
    ctx->pc = 0x3ED708u;
    SET_GPR_U32(ctx, 31, 0x3ED710u);
    ctx->pc = 0x3ED70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED708u;
    // 0x3ed70c: 0xae0007b8  sw          $zero, 0x7B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EB430u, 0x3ED708u, 0x3ED710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED710u;
label_3ed710:
    // 0x3ed710: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3ED710u;
    {
        const bool branch_taken_0x3ed710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed710) {
            ctx->pc = 0x3ED790u;
            goto label_3ed790;
        }
    }
    ctx->pc = 0x3ED718u;
label_3ed718:
    // 0x3ed718: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x3ed718u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3ed71c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ed71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ed720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed724: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3ed724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3ed728: 0xa603078c  sh          $v1, 0x78C($s0)
    ctx->pc = 0x3ed728u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ed72c: 0xae0207b4  sw          $v0, 0x7B4($s0)
    ctx->pc = 0x3ed72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1972), GPR_U32(ctx, 2));
    // 0x3ed730: 0xc0fafbc  jal         func_3EBEF0
    ctx->pc = 0x3ED730u;
    SET_GPR_U32(ctx, 31, 0x3ED738u);
    ctx->pc = 0x3ED734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED730u;
    // 0x3ed734: 0xae0007b8  sw          $zero, 0x7B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBEF0u, 0x3ED730u, 0x3ED738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED738u;
label_3ed738:
    // 0x3ed738: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3ED738u;
    {
        const bool branch_taken_0x3ed738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed738) {
            ctx->pc = 0x3ED790u;
            goto label_3ed790;
        }
    }
    ctx->pc = 0x3ED740u;
label_3ed740:
    // 0x3ed740: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x3ed740u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3ed744: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x3ed744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x3ed748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed74c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3ed74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3ed750: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ed750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed754: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3ed754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3ed758: 0xa603078c  sh          $v1, 0x78C($s0)
    ctx->pc = 0x3ed758u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ed75c: 0xae0207b4  sw          $v0, 0x7B4($s0)
    ctx->pc = 0x3ed75cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1972), GPR_U32(ctx, 2));
    // 0x3ed760: 0xc0fb0b4  jal         func_3EC2D0
    ctx->pc = 0x3ED760u;
    SET_GPR_U32(ctx, 31, 0x3ED768u);
    ctx->pc = 0x3ED764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED760u;
    // 0x3ed764: 0xae0007b8  sw          $zero, 0x7B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC2D0u, 0x3ED760u, 0x3ED768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED768u;
label_3ed768:
    // 0x3ed768: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3ED768u;
    {
        const bool branch_taken_0x3ed768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed768) {
            ctx->pc = 0x3ED790u;
            goto label_3ed790;
        }
    }
    ctx->pc = 0x3ED770u;
label_3ed770:
    // 0x3ed770: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x3ed770u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3ed774: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ed774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ed778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed77c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3ed77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3ed780: 0xa603078c  sh          $v1, 0x78C($s0)
    ctx->pc = 0x3ed780u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ed784: 0xae0207b4  sw          $v0, 0x7B4($s0)
    ctx->pc = 0x3ed784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1972), GPR_U32(ctx, 2));
    // 0x3ed788: 0xc0fb26c  jal         func_3EC9B0
    ctx->pc = 0x3ED788u;
    SET_GPR_U32(ctx, 31, 0x3ED790u);
    ctx->pc = 0x3ED78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED788u;
    // 0x3ed78c: 0xae0007b8  sw          $zero, 0x7B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EC9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EC9B0u, 0x3ED788u, 0x3ED790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED790u;
label_3ed790:
    // 0x3ed790: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x3ED790u;
    SET_GPR_U32(ctx, 31, 0x3ED798u);
    ctx->pc = 0x3ED794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED790u;
    // 0x3ed794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x3ED790u, 0x3ED798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED798u;
label_3ed798:
    // 0x3ed798: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ed798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ed79c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ed79cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ed7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3ED7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED7A0u;
        // 0x3ed7a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ED7A8u;
}
