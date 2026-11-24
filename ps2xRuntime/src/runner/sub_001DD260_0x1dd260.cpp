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

// Function: sub_001DD260
// Address: 0x1dd260 - 0x1dd3a8
void sub_001DD260_0x1dd260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD260_0x1dd260");
#endif

    switch (ctx->pc) {
        case 0x1dd260u: goto label_1dd260;
        case 0x1dd264u: goto label_1dd264;
        case 0x1dd268u: goto label_1dd268;
        case 0x1dd26cu: goto label_1dd26c;
        case 0x1dd270u: goto label_1dd270;
        case 0x1dd274u: goto label_1dd274;
        case 0x1dd278u: goto label_1dd278;
        case 0x1dd27cu: goto label_1dd27c;
        case 0x1dd280u: goto label_1dd280;
        case 0x1dd284u: goto label_1dd284;
        case 0x1dd288u: goto label_1dd288;
        case 0x1dd28cu: goto label_1dd28c;
        case 0x1dd290u: goto label_1dd290;
        case 0x1dd294u: goto label_1dd294;
        case 0x1dd298u: goto label_1dd298;
        case 0x1dd29cu: goto label_1dd29c;
        case 0x1dd2a0u: goto label_1dd2a0;
        case 0x1dd2a4u: goto label_1dd2a4;
        case 0x1dd2a8u: goto label_1dd2a8;
        case 0x1dd2acu: goto label_1dd2ac;
        case 0x1dd2b0u: goto label_1dd2b0;
        case 0x1dd2b4u: goto label_1dd2b4;
        case 0x1dd2b8u: goto label_1dd2b8;
        case 0x1dd2bcu: goto label_1dd2bc;
        case 0x1dd2c0u: goto label_1dd2c0;
        case 0x1dd2c4u: goto label_1dd2c4;
        case 0x1dd2c8u: goto label_1dd2c8;
        case 0x1dd2ccu: goto label_1dd2cc;
        case 0x1dd2d0u: goto label_1dd2d0;
        case 0x1dd2d4u: goto label_1dd2d4;
        case 0x1dd2d8u: goto label_1dd2d8;
        case 0x1dd2dcu: goto label_1dd2dc;
        case 0x1dd2e0u: goto label_1dd2e0;
        case 0x1dd2e4u: goto label_1dd2e4;
        case 0x1dd2e8u: goto label_1dd2e8;
        case 0x1dd2ecu: goto label_1dd2ec;
        case 0x1dd2f0u: goto label_1dd2f0;
        case 0x1dd2f4u: goto label_1dd2f4;
        case 0x1dd2f8u: goto label_1dd2f8;
        case 0x1dd2fcu: goto label_1dd2fc;
        case 0x1dd300u: goto label_1dd300;
        case 0x1dd304u: goto label_1dd304;
        case 0x1dd308u: goto label_1dd308;
        case 0x1dd30cu: goto label_1dd30c;
        case 0x1dd310u: goto label_1dd310;
        case 0x1dd314u: goto label_1dd314;
        case 0x1dd318u: goto label_1dd318;
        case 0x1dd31cu: goto label_1dd31c;
        case 0x1dd320u: goto label_1dd320;
        case 0x1dd324u: goto label_1dd324;
        case 0x1dd328u: goto label_1dd328;
        case 0x1dd32cu: goto label_1dd32c;
        case 0x1dd330u: goto label_1dd330;
        case 0x1dd334u: goto label_1dd334;
        case 0x1dd338u: goto label_1dd338;
        case 0x1dd33cu: goto label_1dd33c;
        case 0x1dd340u: goto label_1dd340;
        case 0x1dd344u: goto label_1dd344;
        case 0x1dd348u: goto label_1dd348;
        case 0x1dd34cu: goto label_1dd34c;
        case 0x1dd350u: goto label_1dd350;
        case 0x1dd354u: goto label_1dd354;
        case 0x1dd358u: goto label_1dd358;
        case 0x1dd35cu: goto label_1dd35c;
        case 0x1dd360u: goto label_1dd360;
        case 0x1dd364u: goto label_1dd364;
        case 0x1dd368u: goto label_1dd368;
        case 0x1dd36cu: goto label_1dd36c;
        case 0x1dd370u: goto label_1dd370;
        case 0x1dd374u: goto label_1dd374;
        case 0x1dd378u: goto label_1dd378;
        case 0x1dd37cu: goto label_1dd37c;
        case 0x1dd380u: goto label_1dd380;
        case 0x1dd384u: goto label_1dd384;
        case 0x1dd388u: goto label_1dd388;
        case 0x1dd38cu: goto label_1dd38c;
        case 0x1dd390u: goto label_1dd390;
        case 0x1dd394u: goto label_1dd394;
        case 0x1dd398u: goto label_1dd398;
        case 0x1dd39cu: goto label_1dd39c;
        case 0x1dd3a0u: goto label_1dd3a0;
        case 0x1dd3a4u: goto label_1dd3a4;
        default: break;
    }

    ctx->pc = 0x1dd260u;

label_1dd260:
    // 0x1dd260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dd260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1dd264:
    // 0x1dd264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dd264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1dd268:
    // 0x1dd268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dd268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dd26c:
    // 0x1dd26c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1dd26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1dd270:
    // 0x1dd270: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dd274:
    if (ctx->pc == 0x1DD274u) {
        ctx->pc = 0x1DD274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD270u;
        // 0x1dd274: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD278u;
        goto label_1dd278;
    }
    ctx->pc = 0x1DD270u;
    {
        const bool branch_taken_0x1dd270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD270u;
        // 0x1dd274: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd270) {
            ctx->pc = 0x1DD280u;
            goto label_1dd280;
        }
    }
    ctx->pc = 0x1DD278u;
label_1dd278:
    // 0x1dd278: 0x10000047  b           . + 4 + (0x47 << 2)
label_1dd27c:
    if (ctx->pc == 0x1DD27Cu) {
        ctx->pc = 0x1DD27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD278u;
        // 0x1dd27c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD280u;
        goto label_1dd280;
    }
    ctx->pc = 0x1DD278u;
    {
        const bool branch_taken_0x1dd278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD278u;
        // 0x1dd27c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd278) {
            ctx->pc = 0x1DD398u;
            goto label_1dd398;
        }
    }
    ctx->pc = 0x1DD280u;
label_1dd280:
    // 0x1dd280: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1dd280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1dd284:
    // 0x1dd284: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1dd284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1dd288:
    // 0x1dd288: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1dd288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1dd28c:
    // 0x1dd28c: 0x320f809  jalr        $t9
label_1dd290:
    if (ctx->pc == 0x1DD290u) {
        ctx->pc = 0x1DD294u;
        goto label_1dd294;
    }
    ctx->pc = 0x1DD28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DD294u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD28Cu, 0x1DD294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD294u;
label_1dd294:
    // 0x1dd294: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1dd298:
    if (ctx->pc == 0x1DD298u) {
        ctx->pc = 0x1DD29Cu;
        goto label_1dd29c;
    }
    ctx->pc = 0x1DD294u;
    {
        const bool branch_taken_0x1dd294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd294) {
            ctx->pc = 0x1DD2B8u;
            goto label_1dd2b8;
        }
    }
    ctx->pc = 0x1DD29Cu;
label_1dd29c:
    // 0x1dd29c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1dd29cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dd2a0:
    // 0x1dd2a0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1dd2a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1dd2a4:
    // 0x1dd2a4: 0x320f809  jalr        $t9
label_1dd2a8:
    if (ctx->pc == 0x1DD2A8u) {
        ctx->pc = 0x1DD2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2A4u;
        // 0x1dd2a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD2ACu;
        goto label_1dd2ac;
    }
    ctx->pc = 0x1DD2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DD2ACu);
        ctx->pc = 0x1DD2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2A4u;
        // 0x1dd2a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD2A4u, 0x1DD2ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD2ACu;
label_1dd2ac:
    // 0x1dd2ac: 0x1000003a  b           . + 4 + (0x3A << 2)
label_1dd2b0:
    if (ctx->pc == 0x1DD2B0u) {
        ctx->pc = 0x1DD2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2ACu;
        // 0x1dd2b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD2B4u;
        goto label_1dd2b4;
    }
    ctx->pc = 0x1DD2ACu;
    {
        const bool branch_taken_0x1dd2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2ACu;
        // 0x1dd2b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd2ac) {
            ctx->pc = 0x1DD398u;
            goto label_1dd398;
        }
    }
    ctx->pc = 0x1DD2B4u;
label_1dd2b4:
    // 0x1dd2b4: 0x0  nop
    ctx->pc = 0x1dd2b4u;
    // NOP
label_1dd2b8:
    // 0x1dd2b8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1dd2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1dd2bc:
    // 0x1dd2bc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1dd2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1dd2c0:
    // 0x1dd2c0: 0x84480000  lh          $t0, 0x0($v0)
    ctx->pc = 0x1dd2c0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1dd2c4:
    // 0x1dd2c4: 0x8467000a  lh          $a3, 0xA($v1)
    ctx->pc = 0x1dd2c4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_1dd2c8:
    // 0x1dd2c8: 0x84660008  lh          $a2, 0x8($v1)
    ctx->pc = 0x1dd2c8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1dd2cc:
    // 0x1dd2cc: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1dd2ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1dd2d0:
    // 0x1dd2d0: 0x38e37ffd  xori        $v1, $a3, 0x7FFD
    ctx->pc = 0x1dd2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)32765);
label_1dd2d4:
    // 0x1dd2d4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1dd2d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1dd2d8:
    // 0x1dd2d8: 0x402826  xor         $a1, $v0, $zero
    ctx->pc = 0x1dd2d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1dd2dc:
    // 0x1dd2dc: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1dd2dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_1dd2e0:
    // 0x1dd2e0: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x1dd2e0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1dd2e4:
    // 0x1dd2e4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1dd2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1dd2e8:
    // 0x1dd2e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dd2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1dd2ec:
    // 0x1dd2ec: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x1dd2ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1dd2f0:
    // 0x1dd2f0: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1dd2f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1dd2f4:
    // 0x1dd2f4: 0x106182a  slt         $v1, $t0, $a2
    ctx->pc = 0x1dd2f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1dd2f8:
    // 0x1dd2f8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1dd2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1dd2fc:
    // 0x1dd2fc: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1dd2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1dd300:
    // 0x1dd300: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1dd300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1dd304:
    // 0x1dd304: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dd308:
    if (ctx->pc == 0x1DD308u) {
        ctx->pc = 0x1DD308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD304u;
        // 0x1dd308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD30Cu;
        goto label_1dd30c;
    }
    ctx->pc = 0x1DD304u;
    {
        const bool branch_taken_0x1dd304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD304u;
        // 0x1dd308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd304) {
            ctx->pc = 0x1DD318u;
            goto label_1dd318;
        }
    }
    ctx->pc = 0x1DD30Cu;
label_1dd30c:
    // 0x1dd30c: 0x10000022  b           . + 4 + (0x22 << 2)
label_1dd310:
    if (ctx->pc == 0x1DD310u) {
        ctx->pc = 0x1DD314u;
        goto label_1dd314;
    }
    ctx->pc = 0x1DD30Cu;
    {
        const bool branch_taken_0x1dd30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd30c) {
            ctx->pc = 0x1DD398u;
            goto label_1dd398;
        }
    }
    ctx->pc = 0x1DD314u;
label_1dd314:
    // 0x1dd314: 0x0  nop
    ctx->pc = 0x1dd314u;
    // NOP
label_1dd318:
    // 0x1dd318: 0xc81026  xor         $v0, $a2, $t0
    ctx->pc = 0x1dd318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 8));
label_1dd31c:
    // 0x1dd31c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1dd31cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1dd320:
    // 0x1dd320: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1dd320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1dd324:
    // 0x1dd324: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dd328:
    if (ctx->pc == 0x1DD328u) {
        ctx->pc = 0x1DD32Cu;
        goto label_1dd32c;
    }
    ctx->pc = 0x1DD324u;
    {
        const bool branch_taken_0x1dd324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd324) {
            ctx->pc = 0x1DD338u;
            goto label_1dd338;
        }
    }
    ctx->pc = 0x1DD32Cu;
label_1dd32c:
    // 0x1dd32c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1dd32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1dd330:
    // 0x1dd330: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1dd330u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1dd334:
    // 0x1dd334: 0x7e020080  sq          $v0, 0x80($s0)
    ctx->pc = 0x1dd334u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 2));
label_1dd338:
    // 0x1dd338: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1dd338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1dd33c:
    // 0x1dd33c: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x1dd33cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1dd340:
    // 0x1dd340: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1dd340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1dd344:
    // 0x1dd344: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1dd348:
    if (ctx->pc == 0x1DD348u) {
        ctx->pc = 0x1DD348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD344u;
        // 0x1dd348: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD34Cu;
        goto label_1dd34c;
    }
    ctx->pc = 0x1DD344u;
    {
        const bool branch_taken_0x1dd344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD344u;
        // 0x1dd348: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd344) {
            ctx->pc = 0x1DD370u;
            goto label_1dd370;
        }
    }
    ctx->pc = 0x1DD34Cu;
label_1dd34c:
    // 0x1dd34c: 0xc07cdc8  jal         func_1F3720
label_1dd350:
    if (ctx->pc == 0x1DD350u) {
        ctx->pc = 0x1DD354u;
        goto label_1dd354;
    }
    ctx->pc = 0x1DD34Cu;
    SET_GPR_U32(ctx, 31, 0x1DD354u);
    ctx->pc = 0x1F3720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3720u, 0x1DD34Cu, 0x1DD354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD354u;
label_1dd354:
    // 0x1dd354: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1dd354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1dd358:
    // 0x1dd358: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1dd358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd35c:
    // 0x1dd35c: 0xc0766a8  jal         func_1D9AA0
label_1dd360:
    if (ctx->pc == 0x1DD360u) {
        ctx->pc = 0x1DD360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD35Cu;
        // 0x1dd360: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD364u;
        goto label_1dd364;
    }
    ctx->pc = 0x1DD35Cu;
    SET_GPR_U32(ctx, 31, 0x1DD364u);
    ctx->pc = 0x1DD360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD35Cu;
    // 0x1dd360: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1DD35Cu, 0x1DD364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD364u;
label_1dd364:
    // 0x1dd364: 0x10000008  b           . + 4 + (0x8 << 2)
label_1dd368:
    if (ctx->pc == 0x1DD368u) {
        ctx->pc = 0x1DD36Cu;
        goto label_1dd36c;
    }
    ctx->pc = 0x1DD364u;
    {
        const bool branch_taken_0x1dd364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd364) {
            ctx->pc = 0x1DD388u;
            goto label_1dd388;
        }
    }
    ctx->pc = 0x1DD36Cu;
label_1dd36c:
    // 0x1dd36c: 0x0  nop
    ctx->pc = 0x1dd36cu;
    // NOP
label_1dd370:
    // 0x1dd370: 0xc07cdc8  jal         func_1F3720
label_1dd374:
    if (ctx->pc == 0x1DD374u) {
        ctx->pc = 0x1DD374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD370u;
        // 0x1dd374: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD378u;
        goto label_1dd378;
    }
    ctx->pc = 0x1DD370u;
    SET_GPR_U32(ctx, 31, 0x1DD378u);
    ctx->pc = 0x1DD374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD370u;
    // 0x1dd374: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3720u, 0x1DD370u, 0x1DD378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD378u;
label_1dd378:
    // 0x1dd378: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1dd378u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1dd37c:
    // 0x1dd37c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1dd37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1dd380:
    // 0x1dd380: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1dd380u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_1dd384:
    // 0x1dd384: 0x0  nop
    ctx->pc = 0x1dd384u;
    // NOP
label_1dd388:
    // 0x1dd388: 0xc07cd74  jal         func_1F35D0
label_1dd38c:
    if (ctx->pc == 0x1DD38Cu) {
        ctx->pc = 0x1DD38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD388u;
        // 0x1dd38c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD390u;
        goto label_1dd390;
    }
    ctx->pc = 0x1DD388u;
    SET_GPR_U32(ctx, 31, 0x1DD390u);
    ctx->pc = 0x1DD38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD388u;
    // 0x1dd38c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F35D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F35D0u, 0x1DD388u, 0x1DD390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD390u;
label_1dd390:
    // 0x1dd390: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dd394:
    // 0x1dd394: 0x0  nop
    ctx->pc = 0x1dd394u;
    // NOP
label_1dd398:
    // 0x1dd398: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dd398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd39c:
    // 0x1dd39c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dd39cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dd3a0:
    // 0x1dd3a0: 0x3e00008  jr          $ra
label_1dd3a4:
    if (ctx->pc == 0x1DD3A4u) {
        ctx->pc = 0x1DD3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3A0u;
        // 0x1dd3a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD3A8u;
        goto label_fallthrough_0x1dd3a0;
    }
    ctx->pc = 0x1DD3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3A0u;
        // 0x1dd3a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dd3a0:
    ctx->pc = 0x1DD3A8u;
}
