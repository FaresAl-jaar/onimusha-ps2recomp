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

// Function: sub_0024B260
// Address: 0x24b260 - 0x24b368
void sub_0024B260_0x24b260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B260_0x24b260");
#endif

    switch (ctx->pc) {
        case 0x24b260u: goto label_24b260;
        case 0x24b264u: goto label_24b264;
        case 0x24b268u: goto label_24b268;
        case 0x24b26cu: goto label_24b26c;
        case 0x24b270u: goto label_24b270;
        case 0x24b274u: goto label_24b274;
        case 0x24b278u: goto label_24b278;
        case 0x24b27cu: goto label_24b27c;
        case 0x24b280u: goto label_24b280;
        case 0x24b284u: goto label_24b284;
        case 0x24b288u: goto label_24b288;
        case 0x24b28cu: goto label_24b28c;
        case 0x24b290u: goto label_24b290;
        case 0x24b294u: goto label_24b294;
        case 0x24b298u: goto label_24b298;
        case 0x24b29cu: goto label_24b29c;
        case 0x24b2a0u: goto label_24b2a0;
        case 0x24b2a4u: goto label_24b2a4;
        case 0x24b2a8u: goto label_24b2a8;
        case 0x24b2acu: goto label_24b2ac;
        case 0x24b2b0u: goto label_24b2b0;
        case 0x24b2b4u: goto label_24b2b4;
        case 0x24b2b8u: goto label_24b2b8;
        case 0x24b2bcu: goto label_24b2bc;
        case 0x24b2c0u: goto label_24b2c0;
        case 0x24b2c4u: goto label_24b2c4;
        case 0x24b2c8u: goto label_24b2c8;
        case 0x24b2ccu: goto label_24b2cc;
        case 0x24b2d0u: goto label_24b2d0;
        case 0x24b2d4u: goto label_24b2d4;
        case 0x24b2d8u: goto label_24b2d8;
        case 0x24b2dcu: goto label_24b2dc;
        case 0x24b2e0u: goto label_24b2e0;
        case 0x24b2e4u: goto label_24b2e4;
        case 0x24b2e8u: goto label_24b2e8;
        case 0x24b2ecu: goto label_24b2ec;
        case 0x24b2f0u: goto label_24b2f0;
        case 0x24b2f4u: goto label_24b2f4;
        case 0x24b2f8u: goto label_24b2f8;
        case 0x24b2fcu: goto label_24b2fc;
        case 0x24b300u: goto label_24b300;
        case 0x24b304u: goto label_24b304;
        case 0x24b308u: goto label_24b308;
        case 0x24b30cu: goto label_24b30c;
        case 0x24b310u: goto label_24b310;
        case 0x24b314u: goto label_24b314;
        case 0x24b318u: goto label_24b318;
        case 0x24b31cu: goto label_24b31c;
        case 0x24b320u: goto label_24b320;
        case 0x24b324u: goto label_24b324;
        case 0x24b328u: goto label_24b328;
        case 0x24b32cu: goto label_24b32c;
        case 0x24b330u: goto label_24b330;
        case 0x24b334u: goto label_24b334;
        case 0x24b338u: goto label_24b338;
        case 0x24b33cu: goto label_24b33c;
        case 0x24b340u: goto label_24b340;
        case 0x24b344u: goto label_24b344;
        case 0x24b348u: goto label_24b348;
        case 0x24b34cu: goto label_24b34c;
        case 0x24b350u: goto label_24b350;
        case 0x24b354u: goto label_24b354;
        case 0x24b358u: goto label_24b358;
        case 0x24b35cu: goto label_24b35c;
        case 0x24b360u: goto label_24b360;
        case 0x24b364u: goto label_24b364;
        default: break;
    }

    ctx->pc = 0x24b260u;

label_24b260:
    // 0x24b260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24b260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_24b264:
    // 0x24b264: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x24b264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_24b268:
    // 0x24b268: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24b268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24b26c:
    // 0x24b26c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24b26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_24b270:
    // 0x24b270: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24b270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_24b274:
    // 0x24b274: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_24b278:
    if (ctx->pc == 0x24B278u) {
        ctx->pc = 0x24B278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B274u;
        // 0x24b278: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B27Cu;
        goto label_24b27c;
    }
    ctx->pc = 0x24B274u;
    {
        const bool branch_taken_0x24b274 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B274u;
        // 0x24b278: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b274) {
            ctx->pc = 0x24B290u;
            goto label_24b290;
        }
    }
    ctx->pc = 0x24B27Cu;
label_24b27c:
    // 0x24b27c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24b27cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_24b280:
    // 0x24b280: 0xc093008  jal         func_24C020
label_24b284:
    if (ctx->pc == 0x24B284u) {
        ctx->pc = 0x24B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B280u;
        // 0x24b284: 0x2484d738  addiu       $a0, $a0, -0x28C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B288u;
        goto label_24b288;
    }
    ctx->pc = 0x24B280u;
    SET_GPR_U32(ctx, 31, 0x24B288u);
    ctx->pc = 0x24B284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B280u;
    // 0x24b284: 0x2484d738  addiu       $a0, $a0, -0x28C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C020u, 0x24B280u, 0x24B288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B288u;
label_24b288:
    // 0x24b288: 0x10000031  b           . + 4 + (0x31 << 2)
label_24b28c:
    if (ctx->pc == 0x24B28Cu) {
        ctx->pc = 0x24B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B288u;
        // 0x24b28c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B290u;
        goto label_24b290;
    }
    ctx->pc = 0x24B288u;
    {
        const bool branch_taken_0x24b288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B288u;
        // 0x24b28c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b288) {
            ctx->pc = 0x24B350u;
            goto label_24b350;
        }
    }
    ctx->pc = 0x24B290u;
label_24b290:
    // 0x24b290: 0xc092ff2  jal         func_24BFC8
label_24b294:
    if (ctx->pc == 0x24B294u) {
        ctx->pc = 0x24B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B290u;
        // 0x24b294: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B298u;
        goto label_24b298;
    }
    ctx->pc = 0x24B290u;
    SET_GPR_U32(ctx, 31, 0x24B298u);
    ctx->pc = 0x24B294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B290u;
    // 0x24b294: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFC8u, 0x24B290u, 0x24B298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B298u;
label_24b298:
    // 0x24b298: 0xc092c72  jal         func_24B1C8
label_24b29c:
    if (ctx->pc == 0x24B29Cu) {
        ctx->pc = 0x24B2A0u;
        goto label_24b2a0;
    }
    ctx->pc = 0x24B298u;
    SET_GPR_U32(ctx, 31, 0x24B2A0u);
    ctx->pc = 0x24B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B1C8u, 0x24B298u, 0x24B2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B2A0u;
label_24b2a0:
    // 0x24b2a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24b2a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24b2a4:
    // 0x24b2a4: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
label_24b2a8:
    if (ctx->pc == 0x24B2A8u) {
        ctx->pc = 0x24B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B2A4u;
        // 0x24b2a8: 0xa2400001  sb          $zero, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B2ACu;
        goto label_24b2ac;
    }
    ctx->pc = 0x24B2A4u;
    {
        const bool branch_taken_0x24b2a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b2a4) {
            ctx->pc = 0x24B2A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B2A4u;
            // 0x24b2a8: 0xa2400001  sb          $zero, 0x1($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B2C0u;
            goto label_24b2c0;
        }
    }
    ctx->pc = 0x24B2ACu;
label_24b2ac:
    // 0x24b2ac: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24b2acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_24b2b0:
    // 0x24b2b0: 0xc093008  jal         func_24C020
label_24b2b4:
    if (ctx->pc == 0x24B2B4u) {
        ctx->pc = 0x24B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B2B0u;
        // 0x24b2b4: 0x2484d768  addiu       $a0, $a0, -0x2898 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B2B8u;
        goto label_24b2b8;
    }
    ctx->pc = 0x24B2B0u;
    SET_GPR_U32(ctx, 31, 0x24B2B8u);
    ctx->pc = 0x24B2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B2B0u;
    // 0x24b2b4: 0x2484d768  addiu       $a0, $a0, -0x2898 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C020u, 0x24B2B0u, 0x24B2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B2B8u;
label_24b2b8:
    // 0x24b2b8: 0x10000022  b           . + 4 + (0x22 << 2)
label_24b2bc:
    if (ctx->pc == 0x24B2BCu) {
        ctx->pc = 0x24B2C0u;
        goto label_24b2c0;
    }
    ctx->pc = 0x24B2B8u;
    {
        const bool branch_taken_0x24b2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b2b8) {
            ctx->pc = 0x24B344u;
            goto label_24b344;
        }
    }
    ctx->pc = 0x24B2C0u;
label_24b2c0:
    // 0x24b2c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24b2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24b2c4:
    // 0x24b2c4: 0xae510008  sw          $s1, 0x8($s2)
    ctx->pc = 0x24b2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
label_24b2c8:
    // 0x24b2c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x24b2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24b2cc:
    // 0x24b2cc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x24b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_24b2d0:
    // 0x24b2d0: 0x40f809  jalr        $v0
label_24b2d4:
    if (ctx->pc == 0x24B2D4u) {
        ctx->pc = 0x24B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B2D0u;
        // 0x24b2d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B2D8u;
        goto label_24b2d8;
    }
    ctx->pc = 0x24B2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24B2D8u);
        ctx->pc = 0x24B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B2D0u;
        // 0x24b2d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B2D0u, 0x24B2D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24B2D8u;
label_24b2d8:
    // 0x24b2d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x24b2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24b2dc:
    // 0x24b2dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24b2dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24b2e0:
    // 0x24b2e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24b2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24b2e4:
    // 0x24b2e4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x24b2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_24b2e8:
    // 0x24b2e8: 0x40f809  jalr        $v0
label_24b2ec:
    if (ctx->pc == 0x24B2ECu) {
        ctx->pc = 0x24B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B2E8u;
        // 0x24b2ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B2F0u;
        goto label_24b2f0;
    }
    ctx->pc = 0x24B2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24B2F0u);
        ctx->pc = 0x24B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B2E8u;
        // 0x24b2ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B2E8u, 0x24B2F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24B2F0u;
label_24b2f0:
    // 0x24b2f0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x24b2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_24b2f4:
    // 0x24b2f4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24b2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_24b2f8:
    // 0x24b2f8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x24b2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_24b2fc:
    // 0x24b2fc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x24b2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_24b300:
    // 0x24b300: 0xae500018  sw          $s0, 0x18($s2)
    ctx->pc = 0x24b300u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 16));
label_24b304:
    // 0x24b304: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x24b304u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_24b308:
    // 0x24b308: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_24b30c:
    if (ctx->pc == 0x24B30Cu) {
        ctx->pc = 0x24B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B308u;
        // 0x24b30c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B310u;
        goto label_24b310;
    }
    ctx->pc = 0x24B308u;
    {
        const bool branch_taken_0x24b308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b308) {
            ctx->pc = 0x24B30Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B308u;
            // 0x24b30c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B310u;
            goto label_24b310;
        }
    }
    ctx->pc = 0x24B310u;
label_24b310:
    // 0x24b310: 0x26430230  addiu       $v1, $s2, 0x230
    ctx->pc = 0x24b310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
label_24b314:
    // 0x24b314: 0x1012  mflo        $v0
    ctx->pc = 0x24b314u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_24b318:
    // 0x24b318: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x24b318u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_24b31c:
    // 0x24b31c: 0x0  nop
    ctx->pc = 0x24b31cu;
    // NOP
label_24b320:
    // 0x24b320: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x24b320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_24b324:
    // 0x24b324: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x24b324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_24b328:
    // 0x24b328: 0x0  nop
    ctx->pc = 0x24b328u;
    // NOP
label_24b32c:
    // 0x24b32c: 0x0  nop
    ctx->pc = 0x24b32cu;
    // NOP
label_24b330:
    // 0x24b330: 0x0  nop
    ctx->pc = 0x24b330u;
    // NOP
label_24b334:
    // 0x24b334: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
label_24b338:
    if (ctx->pc == 0x24B338u) {
        ctx->pc = 0x24B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B334u;
        // 0x24b338: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B33Cu;
        goto label_24b33c;
    }
    ctx->pc = 0x24B334u;
    {
        const bool branch_taken_0x24b334 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x24B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B334u;
        // 0x24b338: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b334) {
            ctx->pc = 0x24B320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24b320;
        }
    }
    ctx->pc = 0x24B33Cu;
label_24b33c:
    // 0x24b33c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24b340:
    // 0x24b340: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x24b340u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
label_24b344:
    // 0x24b344: 0xc092ff8  jal         func_24BFE0
label_24b348:
    if (ctx->pc == 0x24B348u) {
        ctx->pc = 0x24B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B344u;
        // 0x24b348: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B34Cu;
        goto label_24b34c;
    }
    ctx->pc = 0x24B344u;
    SET_GPR_U32(ctx, 31, 0x24B34Cu);
    ctx->pc = 0x24B348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B344u;
    // 0x24b348: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFE0u, 0x24B344u, 0x24B34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B34Cu;
label_24b34c:
    // 0x24b34c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x24b34cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24b350:
    // 0x24b350: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24b350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24b354:
    // 0x24b354: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x24b354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_24b358:
    // 0x24b358: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24b358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24b35c:
    // 0x24b35c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x24b35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_24b360:
    // 0x24b360: 0x3e00008  jr          $ra
label_24b364:
    if (ctx->pc == 0x24B364u) {
        ctx->pc = 0x24B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B360u;
        // 0x24b364: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B368u;
        goto label_fallthrough_0x24b360;
    }
    ctx->pc = 0x24B360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B360u;
        // 0x24b364: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24b360:
    ctx->pc = 0x24B368u;
}
