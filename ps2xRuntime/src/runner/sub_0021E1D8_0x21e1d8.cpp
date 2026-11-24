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

// Function: sub_0021E1D8
// Address: 0x21e1d8 - 0x21e2bc
void sub_0021E1D8_0x21e1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E1D8_0x21e1d8");
#endif

    switch (ctx->pc) {
        case 0x21e1d8u: goto label_21e1d8;
        case 0x21e1dcu: goto label_21e1dc;
        case 0x21e1e0u: goto label_21e1e0;
        case 0x21e1e4u: goto label_21e1e4;
        case 0x21e1e8u: goto label_21e1e8;
        case 0x21e1ecu: goto label_21e1ec;
        case 0x21e1f0u: goto label_21e1f0;
        case 0x21e1f4u: goto label_21e1f4;
        case 0x21e1f8u: goto label_21e1f8;
        case 0x21e1fcu: goto label_21e1fc;
        case 0x21e200u: goto label_21e200;
        case 0x21e204u: goto label_21e204;
        case 0x21e208u: goto label_21e208;
        case 0x21e20cu: goto label_21e20c;
        case 0x21e210u: goto label_21e210;
        case 0x21e214u: goto label_21e214;
        case 0x21e218u: goto label_21e218;
        case 0x21e21cu: goto label_21e21c;
        case 0x21e220u: goto label_21e220;
        case 0x21e224u: goto label_21e224;
        case 0x21e228u: goto label_21e228;
        case 0x21e22cu: goto label_21e22c;
        case 0x21e230u: goto label_21e230;
        case 0x21e234u: goto label_21e234;
        case 0x21e238u: goto label_21e238;
        case 0x21e23cu: goto label_21e23c;
        case 0x21e240u: goto label_21e240;
        case 0x21e244u: goto label_21e244;
        case 0x21e248u: goto label_21e248;
        case 0x21e24cu: goto label_21e24c;
        case 0x21e250u: goto label_21e250;
        case 0x21e254u: goto label_21e254;
        case 0x21e258u: goto label_21e258;
        case 0x21e25cu: goto label_21e25c;
        case 0x21e260u: goto label_21e260;
        case 0x21e264u: goto label_21e264;
        case 0x21e268u: goto label_21e268;
        case 0x21e26cu: goto label_21e26c;
        case 0x21e270u: goto label_21e270;
        case 0x21e274u: goto label_21e274;
        case 0x21e278u: goto label_21e278;
        case 0x21e27cu: goto label_21e27c;
        case 0x21e280u: goto label_21e280;
        case 0x21e284u: goto label_21e284;
        case 0x21e288u: goto label_21e288;
        case 0x21e28cu: goto label_21e28c;
        case 0x21e290u: goto label_21e290;
        case 0x21e294u: goto label_21e294;
        case 0x21e298u: goto label_21e298;
        case 0x21e29cu: goto label_21e29c;
        case 0x21e2a0u: goto label_21e2a0;
        case 0x21e2a4u: goto label_21e2a4;
        case 0x21e2a8u: goto label_21e2a8;
        case 0x21e2acu: goto label_21e2ac;
        case 0x21e2b0u: goto label_21e2b0;
        case 0x21e2b4u: goto label_21e2b4;
        case 0x21e2b8u: goto label_21e2b8;
        default: break;
    }

    ctx->pc = 0x21e1d8u;

label_21e1d8:
    // 0x21e1d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21e1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_21e1dc:
    // 0x21e1dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21e1e0:
    // 0x21e1e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21e1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_21e1e4:
    // 0x21e1e4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21e1e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21e1e8:
    // 0x21e1e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21e1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_21e1ec:
    // 0x21e1ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21e1ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21e1f0:
    // 0x21e1f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21e1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_21e1f4:
    // 0x21e1f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21e1f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21e1f8:
    // 0x21e1f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21e1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_21e1fc:
    // 0x21e1fc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x21e1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_21e200:
    // 0x21e200: 0xc084968  jal         func_2125A0
label_21e204:
    if (ctx->pc == 0x21E204u) {
        ctx->pc = 0x21E204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E200u;
        // 0x21e204: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E208u;
        goto label_21e208;
    }
    ctx->pc = 0x21E200u;
    SET_GPR_U32(ctx, 31, 0x21E208u);
    ctx->pc = 0x21E204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E200u;
    // 0x21e204: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21E200u, 0x21E208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E208u;
label_21e208:
    // 0x21e208: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_21e20c:
    if (ctx->pc == 0x21E20Cu) {
        ctx->pc = 0x21E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E208u;
        // 0x21e20c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E210u;
        goto label_21e210;
    }
    ctx->pc = 0x21E208u;
    {
        const bool branch_taken_0x21e208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E208u;
        // 0x21e20c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e208) {
            ctx->pc = 0x21E228u;
            goto label_21e228;
        }
    }
    ctx->pc = 0x21E210u;
label_21e210:
    // 0x21e210: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21e210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_21e214:
    // 0x21e214: 0xc0848e0  jal         func_212380
label_21e218:
    if (ctx->pc == 0x21E218u) {
        ctx->pc = 0x21E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E214u;
        // 0x21e218: 0x34a5013a  ori         $a1, $a1, 0x13A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)314);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E21Cu;
        goto label_21e21c;
    }
    ctx->pc = 0x21E214u;
    SET_GPR_U32(ctx, 31, 0x21E21Cu);
    ctx->pc = 0x21E218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E214u;
    // 0x21e218: 0x34a5013a  ori         $a1, $a1, 0x13A (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)314);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x21E214u, 0x21E21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E21Cu;
label_21e21c:
    // 0x21e21c: 0x10000021  b           . + 4 + (0x21 << 2)
label_21e220:
    if (ctx->pc == 0x21E220u) {
        ctx->pc = 0x21E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E21Cu;
        // 0x21e220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E224u;
        goto label_21e224;
    }
    ctx->pc = 0x21E21Cu;
    {
        const bool branch_taken_0x21e21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E21Cu;
        // 0x21e220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e21c) {
            ctx->pc = 0x21E2A4u;
            goto label_21e2a4;
        }
    }
    ctx->pc = 0x21E224u;
label_21e224:
    // 0x21e224: 0x0  nop
    ctx->pc = 0x21e224u;
    // NOP
label_21e228:
    // 0x21e228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21e22c:
    // 0x21e22c: 0xc087940  jal         func_21E500
label_21e230:
    if (ctx->pc == 0x21E230u) {
        ctx->pc = 0x21E230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E22Cu;
        // 0x21e230: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E234u;
        goto label_21e234;
    }
    ctx->pc = 0x21E22Cu;
    SET_GPR_U32(ctx, 31, 0x21E234u);
    ctx->pc = 0x21E230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E22Cu;
    // 0x21e230: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E500u, 0x21E22Cu, 0x21E234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E234u;
label_21e234:
    // 0x21e234: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_21e238:
    if (ctx->pc == 0x21E238u) {
        ctx->pc = 0x21E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E234u;
        // 0x21e238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E23Cu;
        goto label_21e23c;
    }
    ctx->pc = 0x21E234u;
    {
        const bool branch_taken_0x21e234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E234u;
        // 0x21e238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e234) {
            ctx->pc = 0x21E2A4u;
            goto label_21e2a4;
        }
    }
    ctx->pc = 0x21E23Cu;
label_21e23c:
    // 0x21e23c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x21e23cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21e240:
    // 0x21e240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21e244:
    // 0x21e244: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x21e244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_21e248:
    // 0x21e248: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21e248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_21e24c:
    // 0x21e24c: 0xc0888d6  jal         func_222358
label_21e250:
    if (ctx->pc == 0x21E250u) {
        ctx->pc = 0x21E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E24Cu;
        // 0x21e250: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E254u;
        goto label_21e254;
    }
    ctx->pc = 0x21E24Cu;
    SET_GPR_U32(ctx, 31, 0x21E254u);
    ctx->pc = 0x21E250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E24Cu;
    // 0x21e250: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222358u, 0x21E24Cu, 0x21E254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E254u;
label_21e254:
    // 0x21e254: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x21e254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_21e258:
    // 0x21e258: 0x8c62a214  lw          $v0, -0x5DEC($v1)
    ctx->pc = 0x21e258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943252)));
label_21e25c:
    // 0x21e25c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_21e260:
    if (ctx->pc == 0x21E260u) {
        ctx->pc = 0x21E260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E25Cu;
        // 0x21e260: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E264u;
        goto label_21e264;
    }
    ctx->pc = 0x21E25Cu;
    {
        const bool branch_taken_0x21e25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e25c) {
            ctx->pc = 0x21E260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E25Cu;
            // 0x21e260: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E274u;
            goto label_21e274;
        }
    }
    ctx->pc = 0x21E264u;
label_21e264:
    // 0x21e264: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x21e264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21e268:
    // 0x21e268: 0x40f809  jalr        $v0
label_21e26c:
    if (ctx->pc == 0x21E26Cu) {
        ctx->pc = 0x21E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E268u;
        // 0x21e26c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E270u;
        goto label_21e270;
    }
    ctx->pc = 0x21E268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21E270u);
        ctx->pc = 0x21E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E268u;
        // 0x21e26c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E268u, 0x21E270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E270u;
label_21e270:
    // 0x21e270: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21e270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21e274:
    // 0x21e274: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_21e278:
    if (ctx->pc == 0x21E278u) {
        ctx->pc = 0x21E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E274u;
        // 0x21e278: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E27Cu;
        goto label_21e27c;
    }
    ctx->pc = 0x21E274u;
    {
        const bool branch_taken_0x21e274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E274u;
        // 0x21e278: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e274) {
            ctx->pc = 0x21E2A4u;
            goto label_21e2a4;
        }
    }
    ctx->pc = 0x21E27Cu;
label_21e27c:
    // 0x21e27c: 0x8e030968  lw          $v1, 0x968($s0)
    ctx->pc = 0x21e27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
label_21e280:
    // 0x21e280: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_21e284:
    if (ctx->pc == 0x21E284u) {
        ctx->pc = 0x21E284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E280u;
        // 0x21e284: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E288u;
        goto label_21e288;
    }
    ctx->pc = 0x21E280u;
    {
        const bool branch_taken_0x21e280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e280) {
            ctx->pc = 0x21E284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E280u;
            // 0x21e284: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E29Cu;
            goto label_21e29c;
        }
    }
    ctx->pc = 0x21E288u;
label_21e288:
    // 0x21e288: 0xc0886b8  jal         func_221AE0
label_21e28c:
    if (ctx->pc == 0x21E28Cu) {
        ctx->pc = 0x21E290u;
        goto label_21e290;
    }
    ctx->pc = 0x21E288u;
    SET_GPR_U32(ctx, 31, 0x21E290u);
    ctx->pc = 0x221AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AE0u, 0x21E288u, 0x21E290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E290u;
label_21e290:
    // 0x21e290: 0x8e030968  lw          $v1, 0x968($s0)
    ctx->pc = 0x21e290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
label_21e294:
    // 0x21e294: 0xfe023780  sd          $v0, 0x3780($s0)
    ctx->pc = 0x21e294u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 14208), GPR_U64(ctx, 2));
label_21e298:
    // 0x21e298: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21e298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_21e29c:
    // 0x21e29c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e2a0:
    // 0x21e2a0: 0xae030968  sw          $v1, 0x968($s0)
    ctx->pc = 0x21e2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2408), GPR_U32(ctx, 3));
label_21e2a4:
    // 0x21e2a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e2a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21e2a8:
    // 0x21e2a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21e2a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_21e2ac:
    // 0x21e2ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21e2acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21e2b0:
    // 0x21e2b0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21e2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_21e2b4:
    // 0x21e2b4: 0x3e00008  jr          $ra
label_21e2b8:
    if (ctx->pc == 0x21E2B8u) {
        ctx->pc = 0x21E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E2B4u;
        // 0x21e2b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E2BCu;
        goto label_fallthrough_0x21e2b4;
    }
    ctx->pc = 0x21E2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E2B4u;
        // 0x21e2b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21e2b4:
    ctx->pc = 0x21E2BCu;
}
