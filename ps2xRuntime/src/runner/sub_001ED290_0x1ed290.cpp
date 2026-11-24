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

// Function: sub_001ED290
// Address: 0x1ed290 - 0x1ed400
void sub_001ED290_0x1ed290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED290_0x1ed290");
#endif

    switch (ctx->pc) {
        case 0x1ed290u: goto label_1ed290;
        case 0x1ed294u: goto label_1ed294;
        case 0x1ed298u: goto label_1ed298;
        case 0x1ed29cu: goto label_1ed29c;
        case 0x1ed2a0u: goto label_1ed2a0;
        case 0x1ed2a4u: goto label_1ed2a4;
        case 0x1ed2a8u: goto label_1ed2a8;
        case 0x1ed2acu: goto label_1ed2ac;
        case 0x1ed2b0u: goto label_1ed2b0;
        case 0x1ed2b4u: goto label_1ed2b4;
        case 0x1ed2b8u: goto label_1ed2b8;
        case 0x1ed2bcu: goto label_1ed2bc;
        case 0x1ed2c0u: goto label_1ed2c0;
        case 0x1ed2c4u: goto label_1ed2c4;
        case 0x1ed2c8u: goto label_1ed2c8;
        case 0x1ed2ccu: goto label_1ed2cc;
        case 0x1ed2d0u: goto label_1ed2d0;
        case 0x1ed2d4u: goto label_1ed2d4;
        case 0x1ed2d8u: goto label_1ed2d8;
        case 0x1ed2dcu: goto label_1ed2dc;
        case 0x1ed2e0u: goto label_1ed2e0;
        case 0x1ed2e4u: goto label_1ed2e4;
        case 0x1ed2e8u: goto label_1ed2e8;
        case 0x1ed2ecu: goto label_1ed2ec;
        case 0x1ed2f0u: goto label_1ed2f0;
        case 0x1ed2f4u: goto label_1ed2f4;
        case 0x1ed2f8u: goto label_1ed2f8;
        case 0x1ed2fcu: goto label_1ed2fc;
        case 0x1ed300u: goto label_1ed300;
        case 0x1ed304u: goto label_1ed304;
        case 0x1ed308u: goto label_1ed308;
        case 0x1ed30cu: goto label_1ed30c;
        case 0x1ed310u: goto label_1ed310;
        case 0x1ed314u: goto label_1ed314;
        case 0x1ed318u: goto label_1ed318;
        case 0x1ed31cu: goto label_1ed31c;
        case 0x1ed320u: goto label_1ed320;
        case 0x1ed324u: goto label_1ed324;
        case 0x1ed328u: goto label_1ed328;
        case 0x1ed32cu: goto label_1ed32c;
        case 0x1ed330u: goto label_1ed330;
        case 0x1ed334u: goto label_1ed334;
        case 0x1ed338u: goto label_1ed338;
        case 0x1ed33cu: goto label_1ed33c;
        case 0x1ed340u: goto label_1ed340;
        case 0x1ed344u: goto label_1ed344;
        case 0x1ed348u: goto label_1ed348;
        case 0x1ed34cu: goto label_1ed34c;
        case 0x1ed350u: goto label_1ed350;
        case 0x1ed354u: goto label_1ed354;
        case 0x1ed358u: goto label_1ed358;
        case 0x1ed35cu: goto label_1ed35c;
        case 0x1ed360u: goto label_1ed360;
        case 0x1ed364u: goto label_1ed364;
        case 0x1ed368u: goto label_1ed368;
        case 0x1ed36cu: goto label_1ed36c;
        case 0x1ed370u: goto label_1ed370;
        case 0x1ed374u: goto label_1ed374;
        case 0x1ed378u: goto label_1ed378;
        case 0x1ed37cu: goto label_1ed37c;
        case 0x1ed380u: goto label_1ed380;
        case 0x1ed384u: goto label_1ed384;
        case 0x1ed388u: goto label_1ed388;
        case 0x1ed38cu: goto label_1ed38c;
        case 0x1ed390u: goto label_1ed390;
        case 0x1ed394u: goto label_1ed394;
        case 0x1ed398u: goto label_1ed398;
        case 0x1ed39cu: goto label_1ed39c;
        case 0x1ed3a0u: goto label_1ed3a0;
        case 0x1ed3a4u: goto label_1ed3a4;
        case 0x1ed3a8u: goto label_1ed3a8;
        case 0x1ed3acu: goto label_1ed3ac;
        case 0x1ed3b0u: goto label_1ed3b0;
        case 0x1ed3b4u: goto label_1ed3b4;
        case 0x1ed3b8u: goto label_1ed3b8;
        case 0x1ed3bcu: goto label_1ed3bc;
        case 0x1ed3c0u: goto label_1ed3c0;
        case 0x1ed3c4u: goto label_1ed3c4;
        case 0x1ed3c8u: goto label_1ed3c8;
        case 0x1ed3ccu: goto label_1ed3cc;
        case 0x1ed3d0u: goto label_1ed3d0;
        case 0x1ed3d4u: goto label_1ed3d4;
        case 0x1ed3d8u: goto label_1ed3d8;
        case 0x1ed3dcu: goto label_1ed3dc;
        case 0x1ed3e0u: goto label_1ed3e0;
        case 0x1ed3e4u: goto label_1ed3e4;
        case 0x1ed3e8u: goto label_1ed3e8;
        case 0x1ed3ecu: goto label_1ed3ec;
        case 0x1ed3f0u: goto label_1ed3f0;
        case 0x1ed3f4u: goto label_1ed3f4;
        case 0x1ed3f8u: goto label_1ed3f8;
        case 0x1ed3fcu: goto label_1ed3fc;
        default: break;
    }

    ctx->pc = 0x1ed290u;

label_1ed290:
    // 0x1ed290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ed290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ed294:
    // 0x1ed294: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1ed294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1ed298:
    // 0x1ed298: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ed298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ed29c:
    // 0x1ed29c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ed29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ed2a0:
    // 0x1ed2a0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1ed2a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1ed2a4:
    // 0x1ed2a4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1ed2a8:
    if (ctx->pc == 0x1ED2A8u) {
        ctx->pc = 0x1ED2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2A4u;
        // 0x1ed2a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED2ACu;
        goto label_1ed2ac;
    }
    ctx->pc = 0x1ED2A4u;
    {
        const bool branch_taken_0x1ed2a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ED2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2A4u;
        // 0x1ed2a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed2a4) {
            ctx->pc = 0x1ED2B8u;
            goto label_1ed2b8;
        }
    }
    ctx->pc = 0x1ED2ACu;
label_1ed2ac:
    // 0x1ed2ac: 0x10000050  b           . + 4 + (0x50 << 2)
label_1ed2b0:
    if (ctx->pc == 0x1ED2B0u) {
        ctx->pc = 0x1ED2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2ACu;
        // 0x1ed2b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED2B4u;
        goto label_1ed2b4;
    }
    ctx->pc = 0x1ED2ACu;
    {
        const bool branch_taken_0x1ed2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2ACu;
        // 0x1ed2b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed2ac) {
            ctx->pc = 0x1ED3F0u;
            goto label_1ed3f0;
        }
    }
    ctx->pc = 0x1ED2B4u;
label_1ed2b4:
    // 0x1ed2b4: 0x0  nop
    ctx->pc = 0x1ed2b4u;
    // NOP
label_1ed2b8:
    // 0x1ed2b8: 0x7a030080  lq          $v1, 0x80($s0)
    ctx->pc = 0x1ed2b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 128)));
label_1ed2bc:
    // 0x1ed2bc: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1ed2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1ed2c0:
    // 0x1ed2c0: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x1ed2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_1ed2c4:
    // 0x1ed2c4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1ed2c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1ed2c8:
    // 0x1ed2c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ed2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ed2cc:
    // 0x1ed2cc: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1ed2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1ed2d0:
    // 0x1ed2d0: 0x86030034  lh          $v1, 0x34($s0)
    ctx->pc = 0x1ed2d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
label_1ed2d4:
    // 0x1ed2d4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1ed2d8:
    if (ctx->pc == 0x1ED2D8u) {
        ctx->pc = 0x1ED2DCu;
        goto label_1ed2dc;
    }
    ctx->pc = 0x1ED2D4u;
    {
        const bool branch_taken_0x1ed2d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ed2d4) {
            ctx->pc = 0x1ED2F8u;
            goto label_1ed2f8;
        }
    }
    ctx->pc = 0x1ED2DCu;
label_1ed2dc:
    // 0x1ed2dc: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1ed2dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1ed2e0:
    // 0x1ed2e0: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1ed2e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1ed2e4:
    // 0x1ed2e4: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1ed2e8:
    if (ctx->pc == 0x1ED2E8u) {
        ctx->pc = 0x1ED2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2E4u;
        // 0x1ed2e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED2ECu;
        goto label_1ed2ec;
    }
    ctx->pc = 0x1ED2E4u;
    {
        const bool branch_taken_0x1ed2e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2E4u;
        // 0x1ed2e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed2e4) {
            ctx->pc = 0x1ED320u;
            goto label_1ed320;
        }
    }
    ctx->pc = 0x1ED2ECu;
label_1ed2ec:
    // 0x1ed2ec: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1ed2ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1ed2f0:
    // 0x1ed2f0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1ed2f4:
    if (ctx->pc == 0x1ED2F4u) {
        ctx->pc = 0x1ED2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2F0u;
        // 0x1ed2f4: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED2F8u;
        goto label_1ed2f8;
    }
    ctx->pc = 0x1ED2F0u;
    {
        const bool branch_taken_0x1ed2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2F0u;
        // 0x1ed2f4: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed2f0) {
            ctx->pc = 0x1ED320u;
            goto label_1ed320;
        }
    }
    ctx->pc = 0x1ED2F8u;
label_1ed2f8:
    // 0x1ed2f8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1ed2f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1ed2fc:
    // 0x1ed2fc: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1ed2fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ed300:
    // 0x1ed300: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1ed304:
    if (ctx->pc == 0x1ED304u) {
        ctx->pc = 0x1ED308u;
        goto label_1ed308;
    }
    ctx->pc = 0x1ED300u;
    {
        const bool branch_taken_0x1ed300 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed300) {
            ctx->pc = 0x1ED320u;
            goto label_1ed320;
        }
    }
    ctx->pc = 0x1ED308u;
label_1ed308:
    // 0x1ed308: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1ed308u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1ed30c:
    // 0x1ed30c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ed30cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ed310:
    // 0x1ed310: 0x320f809  jalr        $t9
label_1ed314:
    if (ctx->pc == 0x1ED314u) {
        ctx->pc = 0x1ED318u;
        goto label_1ed318;
    }
    ctx->pc = 0x1ED310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1ED318u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED310u, 0x1ED318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED318u;
label_1ed318:
    // 0x1ed318: 0x10000035  b           . + 4 + (0x35 << 2)
label_1ed31c:
    if (ctx->pc == 0x1ED31Cu) {
        ctx->pc = 0x1ED31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED318u;
        // 0x1ed31c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED320u;
        goto label_1ed320;
    }
    ctx->pc = 0x1ED318u;
    {
        const bool branch_taken_0x1ed318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED318u;
        // 0x1ed31c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed318) {
            ctx->pc = 0x1ED3F0u;
            goto label_1ed3f0;
        }
    }
    ctx->pc = 0x1ED320u;
label_1ed320:
    // 0x1ed320: 0xc0743c0  jal         func_1D0F00
label_1ed324:
    if (ctx->pc == 0x1ED324u) {
        ctx->pc = 0x1ED324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED320u;
        // 0x1ed324: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED328u;
        goto label_1ed328;
    }
    ctx->pc = 0x1ED320u;
    SET_GPR_U32(ctx, 31, 0x1ED328u);
    ctx->pc = 0x1ED324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED320u;
    // 0x1ed324: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x1ED320u, 0x1ED328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED328u;
label_1ed328:
    // 0x1ed328: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1ed32c:
    if (ctx->pc == 0x1ED32Cu) {
        ctx->pc = 0x1ED330u;
        goto label_1ed330;
    }
    ctx->pc = 0x1ED328u;
    {
        const bool branch_taken_0x1ed328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed328) {
            ctx->pc = 0x1ED340u;
            goto label_1ed340;
        }
    }
    ctx->pc = 0x1ED330u;
label_1ed330:
    // 0x1ed330: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1ed330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ed334:
    // 0x1ed334: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ed334u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ed338:
    // 0x1ed338: 0x320f809  jalr        $t9
label_1ed33c:
    if (ctx->pc == 0x1ED33Cu) {
        ctx->pc = 0x1ED33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED338u;
        // 0x1ed33c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED340u;
        goto label_1ed340;
    }
    ctx->pc = 0x1ED338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1ED340u);
        ctx->pc = 0x1ED33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED338u;
        // 0x1ed33c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED338u, 0x1ED340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED340u;
label_1ed340:
    // 0x1ed340: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1ed340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1ed344:
    // 0x1ed344: 0xc076800  jal         func_1DA000
label_1ed348:
    if (ctx->pc == 0x1ED348u) {
        ctx->pc = 0x1ED348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED344u;
        // 0x1ed348: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED34Cu;
        goto label_1ed34c;
    }
    ctx->pc = 0x1ED344u;
    SET_GPR_U32(ctx, 31, 0x1ED34Cu);
    ctx->pc = 0x1ED348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED344u;
    // 0x1ed348: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1ED344u, 0x1ED34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED34Cu;
label_1ed34c:
    // 0x1ed34c: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1ed34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1ed350:
    // 0x1ed350: 0xc076800  jal         func_1DA000
label_1ed354:
    if (ctx->pc == 0x1ED354u) {
        ctx->pc = 0x1ED354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED350u;
        // 0x1ed354: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED358u;
        goto label_1ed358;
    }
    ctx->pc = 0x1ED350u;
    SET_GPR_U32(ctx, 31, 0x1ED358u);
    ctx->pc = 0x1ED354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED350u;
    // 0x1ed354: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1ED350u, 0x1ED358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED358u;
label_1ed358:
    // 0x1ed358: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1ed358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1ed35c:
    // 0x1ed35c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1ed35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_1ed360:
    // 0x1ed360: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1ed360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_1ed364:
    // 0x1ed364: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x1ed364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1ed368:
    // 0x1ed368: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1ed368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_1ed36c:
    // 0x1ed36c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1ed36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_1ed370:
    // 0x1ed370: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1ed370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1ed374:
    // 0x1ed374: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1ed374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_1ed378:
    // 0x1ed378: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x1ed378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_1ed37c:
    // 0x1ed37c: 0x92020058  lbu         $v0, 0x58($s0)
    ctx->pc = 0x1ed37cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
label_1ed380:
    // 0x1ed380: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ed380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1ed384:
    // 0x1ed384: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1ed388:
    if (ctx->pc == 0x1ED388u) {
        ctx->pc = 0x1ED388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED384u;
        // 0x1ed388: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED38Cu;
        goto label_1ed38c;
    }
    ctx->pc = 0x1ED384u;
    {
        const bool branch_taken_0x1ed384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED384u;
        // 0x1ed388: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed384) {
            ctx->pc = 0x1ED3E8u;
            goto label_1ed3e8;
        }
    }
    ctx->pc = 0x1ED38Cu;
label_1ed38c:
    // 0x1ed38c: 0xc0743e0  jal         func_1D0F80
label_1ed390:
    if (ctx->pc == 0x1ED390u) {
        ctx->pc = 0x1ED394u;
        goto label_1ed394;
    }
    ctx->pc = 0x1ED38Cu;
    SET_GPR_U32(ctx, 31, 0x1ED394u);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x1ED38Cu, 0x1ED394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED394u;
label_1ed394:
    // 0x1ed394: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1ed394u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1ed398:
    // 0x1ed398: 0x8445000a  lh          $a1, 0xA($v0)
    ctx->pc = 0x1ed398u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1ed39c:
    // 0x1ed39c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1ed39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1ed3a0:
    // 0x1ed3a0: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1ed3a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1ed3a4:
    // 0x1ed3a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1ed3a8:
    if (ctx->pc == 0x1ED3A8u) {
        ctx->pc = 0x1ED3ACu;
        goto label_1ed3ac;
    }
    ctx->pc = 0x1ED3A4u;
    {
        const bool branch_taken_0x1ed3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed3a4) {
            ctx->pc = 0x1ED3C0u;
            goto label_1ed3c0;
        }
    }
    ctx->pc = 0x1ED3ACu;
label_1ed3ac:
    // 0x1ed3ac: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1ed3acu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ed3b0:
    // 0x1ed3b0: 0x0  nop
    ctx->pc = 0x1ed3b0u;
    // NOP
label_1ed3b4:
    // 0x1ed3b4: 0x0  nop
    ctx->pc = 0x1ed3b4u;
    // NOP
label_1ed3b8:
    // 0x1ed3b8: 0x1010  mfhi        $v0
    ctx->pc = 0x1ed3b8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ed3bc:
    // 0x1ed3bc: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1ed3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_1ed3c0:
    // 0x1ed3c0: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x1ed3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_1ed3c4:
    // 0x1ed3c4: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1ed3c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1ed3c8:
    // 0x1ed3c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1ed3cc:
    if (ctx->pc == 0x1ED3CCu) {
        ctx->pc = 0x1ED3D0u;
        goto label_1ed3d0;
    }
    ctx->pc = 0x1ED3C8u;
    {
        const bool branch_taken_0x1ed3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed3c8) {
            ctx->pc = 0x1ED3E8u;
            goto label_1ed3e8;
        }
    }
    ctx->pc = 0x1ED3D0u;
label_1ed3d0:
    // 0x1ed3d0: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x1ed3d0u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ed3d4:
    // 0x1ed3d4: 0x0  nop
    ctx->pc = 0x1ed3d4u;
    // NOP
label_1ed3d8:
    // 0x1ed3d8: 0x0  nop
    ctx->pc = 0x1ed3d8u;
    // NOP
label_1ed3dc:
    // 0x1ed3dc: 0x1010  mfhi        $v0
    ctx->pc = 0x1ed3dcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ed3e0:
    // 0x1ed3e0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1ed3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_1ed3e4:
    // 0x1ed3e4: 0x0  nop
    ctx->pc = 0x1ed3e4u;
    // NOP
label_1ed3e8:
    // 0x1ed3e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ed3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ed3ec:
    // 0x1ed3ec: 0x0  nop
    ctx->pc = 0x1ed3ecu;
    // NOP
label_1ed3f0:
    // 0x1ed3f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ed3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ed3f4:
    // 0x1ed3f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ed3f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ed3f8:
    // 0x1ed3f8: 0x3e00008  jr          $ra
label_1ed3fc:
    if (ctx->pc == 0x1ED3FCu) {
        ctx->pc = 0x1ED3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3F8u;
        // 0x1ed3fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED400u;
        goto label_fallthrough_0x1ed3f8;
    }
    ctx->pc = 0x1ED3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3F8u;
        // 0x1ed3fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED3F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ed3f8:
    ctx->pc = 0x1ED400u;
}
