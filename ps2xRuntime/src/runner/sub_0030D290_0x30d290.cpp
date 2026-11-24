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

// Function: sub_0030D290
// Address: 0x30d290 - 0x30d738
void sub_0030D290_0x30d290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D290_0x30d290");
#endif

    switch (ctx->pc) {
        case 0x30d2b8u: goto label_30d2b8;
        case 0x30d2e0u: goto label_30d2e0;
        case 0x30d340u: goto label_30d340;
        case 0x30d354u: goto label_30d354;
        case 0x30d398u: goto label_30d398;
        case 0x30d3a8u: goto label_30d3a8;
        case 0x30d3fcu: goto label_30d3fc;
        case 0x30d46cu: goto label_30d46c;
        case 0x30d484u: goto label_30d484;
        case 0x30d4acu: goto label_30d4ac;
        case 0x30d568u: goto label_30d568;
        case 0x30d5a0u: goto label_30d5a0;
        case 0x30d5b0u: goto label_30d5b0;
        case 0x30d5c8u: goto label_30d5c8;
        case 0x30d5dcu: goto label_30d5dc;
        case 0x30d600u: goto label_30d600;
        case 0x30d61cu: goto label_30d61c;
        case 0x30d62cu: goto label_30d62c;
        case 0x30d718u: goto label_30d718;
        default: break;
    }

    ctx->pc = 0x30d290u;

    // 0x30d290: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x30d290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x30d294: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x30d294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x30d298: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30d298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30d29c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30d29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30d2a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30d2a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d2a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30d2a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d2a8: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D2A8u;
    {
        const bool branch_taken_0x30d2a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D2A8u;
        // 0x30d2ac: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d2a8) {
            ctx->pc = 0x30D2C0u;
            goto label_30d2c0;
        }
    }
    ctx->pc = 0x30D2B0u;
    // 0x30d2b0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x30D2B0u;
    SET_GPR_U32(ctx, 31, 0x30D2B8u);
    ctx->pc = 0x30D2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D2B0u;
    // 0x30d2b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x30D2B0u, 0x30D2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D2B8u;
label_30d2b8:
    // 0x30d2b8: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x30D2B8u;
    {
        const bool branch_taken_0x30d2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d2b8) {
            ctx->pc = 0x30D720u;
            goto label_30d720;
        }
    }
    ctx->pc = 0x30D2C0u;
label_30d2c0:
    // 0x30d2c0: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30D2C0u;
    {
        const bool branch_taken_0x30d2c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d2c0) {
            ctx->pc = 0x30D2E8u;
            goto label_30d2e8;
        }
    }
    ctx->pc = 0x30D2C8u;
    // 0x30d2c8: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x30d2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x30d2cc: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x30d2ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30d2d0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D2D0u;
    {
        const bool branch_taken_0x30d2d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D2D0u;
        // 0x30d2d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d2d0) {
            ctx->pc = 0x30D2E8u;
            goto label_30d2e8;
        }
    }
    ctx->pc = 0x30D2D8u;
    // 0x30d2d8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x30D2D8u;
    SET_GPR_U32(ctx, 31, 0x30D2E0u);
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x30D2D8u, 0x30D2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D2E0u;
label_30d2e0:
    // 0x30d2e0: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x30D2E0u;
    {
        const bool branch_taken_0x30d2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d2e0) {
            ctx->pc = 0x30D720u;
            goto label_30d720;
        }
    }
    ctx->pc = 0x30D2E8u;
label_30d2e8:
    // 0x30d2e8: 0x92440521  lbu         $a0, 0x521($s2)
    ctx->pc = 0x30d2e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x30d2ec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x30d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30d2f0: 0x108300a7  beq         $a0, $v1, . + 4 + (0xA7 << 2)
    ctx->pc = 0x30D2F0u;
    {
        const bool branch_taken_0x30d2f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x30D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D2F0u;
        // 0x30d2f4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d2f0) {
            ctx->pc = 0x30D590u;
            goto label_30d590;
        }
    }
    ctx->pc = 0x30D2F8u;
    // 0x30d2f8: 0x1083009d  beq         $a0, $v1, . + 4 + (0x9D << 2)
    ctx->pc = 0x30D2F8u;
    {
        const bool branch_taken_0x30d2f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30d2f8) {
            ctx->pc = 0x30D570u;
            goto label_30d570;
        }
    }
    ctx->pc = 0x30D300u;
    // 0x30d300: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30d300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30d304: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x30D304u;
    {
        const bool branch_taken_0x30d304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x30D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D304u;
        // 0x30d308: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d304) {
            ctx->pc = 0x30D388u;
            goto label_30d388;
        }
    }
    ctx->pc = 0x30D30Cu;
    // 0x30d30c: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x30D30Cu;
    {
        const bool branch_taken_0x30d30c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30d30c) {
            ctx->pc = 0x30D368u;
            goto label_30d368;
        }
    }
    ctx->pc = 0x30D314u;
    // 0x30d314: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D314u;
    {
        const bool branch_taken_0x30d314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d314) {
            ctx->pc = 0x30D328u;
            goto label_30d328;
        }
    }
    ctx->pc = 0x30D31Cu;
    // 0x30d31c: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x30D31Cu;
    {
        const bool branch_taken_0x30d31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d31c) {
            ctx->pc = 0x30D720u;
            goto label_30d720;
        }
    }
    ctx->pc = 0x30D324u;
    // 0x30d324: 0x0  nop
    ctx->pc = 0x30d324u;
    // NOP
label_30d328:
    // 0x30d328: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D328u;
    {
        const bool branch_taken_0x30d328 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d328) {
            ctx->pc = 0x30D348u;
            goto label_30d348;
        }
    }
    ctx->pc = 0x30D330u;
    // 0x30d330: 0x9244053b  lbu         $a0, 0x53B($s2)
    ctx->pc = 0x30d330u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1339)));
    // 0x30d334: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x30d334u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x30d338: 0xc0a9c40  jal         func_2A7100
    ctx->pc = 0x30D338u;
    SET_GPR_U32(ctx, 31, 0x30D340u);
    ctx->pc = 0x30D33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D338u;
    // 0x30d33c: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7100u, 0x30D338u, 0x30D340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D340u;
label_30d340:
    // 0x30d340: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30D340u;
    {
        const bool branch_taken_0x30d340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D340u;
        // 0x30d344: 0xae420550  sw          $v0, 0x550($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d340) {
            ctx->pc = 0x30D358u;
            goto label_30d358;
        }
    }
    ctx->pc = 0x30D348u;
label_30d348:
    // 0x30d348: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30d348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d34c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x30D34Cu;
    SET_GPR_U32(ctx, 31, 0x30D354u);
    ctx->pc = 0x30D350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D34Cu;
    // 0x30d350: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x30D34Cu, 0x30D354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D354u;
label_30d354:
    // 0x30d354: 0x0  nop
    ctx->pc = 0x30d354u;
    // NOP
label_30d358:
    // 0x30d358: 0x92430521  lbu         $v1, 0x521($s2)
    ctx->pc = 0x30d358u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x30d35c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30d35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30d360: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x30D360u;
    {
        const bool branch_taken_0x30d360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D360u;
        // 0x30d364: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d360) {
            ctx->pc = 0x30D720u;
            goto label_30d720;
        }
    }
    ctx->pc = 0x30D368u;
label_30d368:
    // 0x30d368: 0x86420526  lh          $v0, 0x526($s2)
    ctx->pc = 0x30d368u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1318)));
    // 0x30d36c: 0xa6420512  sh          $v0, 0x512($s2)
    ctx->pc = 0x30d36cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x30d370: 0xa6400510  sh          $zero, 0x510($s2)
    ctx->pc = 0x30d370u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x30d374: 0xa2400514  sb          $zero, 0x514($s2)
    ctx->pc = 0x30d374u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d378: 0xa2400515  sb          $zero, 0x515($s2)
    ctx->pc = 0x30d378u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d37c: 0x92420521  lbu         $v0, 0x521($s2)
    ctx->pc = 0x30d37cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x30d380: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30d380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30d384: 0xa2420521  sb          $v0, 0x521($s2)
    ctx->pc = 0x30d384u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 2));
label_30d388:
    // 0x30d388: 0x8e460550  lw          $a2, 0x550($s2)
    ctx->pc = 0x30d388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
    // 0x30d38c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30d38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d390: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x30D390u;
    SET_GPR_U32(ctx, 31, 0x30D398u);
    ctx->pc = 0x30D394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D390u;
    // 0x30d394: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x30D390u, 0x30D398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D398u;
label_30d398:
    // 0x30d398: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D398u;
    {
        const bool branch_taken_0x30d398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D398u;
        // 0x30d39c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d398) {
            ctx->pc = 0x30D3A8u;
            goto label_30d3a8;
        }
    }
    ctx->pc = 0x30D3A0u;
    // 0x30d3a0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x30D3A0u;
    SET_GPR_U32(ctx, 31, 0x30D3A8u);
    ctx->pc = 0x30D3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D3A0u;
    // 0x30d3a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x30D3A0u, 0x30D3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D3A8u;
label_30d3a8:
    // 0x30d3a8: 0x86440510  lh          $a0, 0x510($s2)
    ctx->pc = 0x30d3a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x30d3ac: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x30d3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x30d3b0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x30d3b0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30d3b4: 0x0  nop
    ctx->pc = 0x30d3b4u;
    // NOP
    // 0x30d3b8: 0x0  nop
    ctx->pc = 0x30d3b8u;
    // NOP
    // 0x30d3bc: 0x1810  mfhi        $v1
    ctx->pc = 0x30d3bcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x30d3c0: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x30D3C0u;
    {
        const bool branch_taken_0x30d3c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d3c0) {
            ctx->pc = 0x30D400u;
            goto label_30d400;
        }
    }
    ctx->pc = 0x30D3C8u;
    // 0x30d3c8: 0x9243052e  lbu         $v1, 0x52E($s2)
    ctx->pc = 0x30d3c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x30d3cc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x30d3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x30d3d0: 0x3c022800  lui         $v0, 0x2800
    ctx->pc = 0x30d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10240 << 16));
    // 0x30d3d4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x30d3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x30d3d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30d3d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d3dc: 0x34459602  ori         $a1, $v0, 0x9602
    ctx->pc = 0x30d3dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38402);
    // 0x30d3e0: 0x26470020  addiu       $a3, $s2, 0x20
    ctx->pc = 0x30d3e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x30d3e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30d3e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d3e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30d3e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d3ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x30d3ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d3f0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x30d3f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d3f4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x30D3F4u;
    SET_GPR_U32(ctx, 31, 0x30D3FCu);
    ctx->pc = 0x30D3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D3F4u;
    // 0x30d3f8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x30D3F4u, 0x30D3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D3FCu;
label_30d3fc:
    // 0x30d3fc: 0x0  nop
    ctx->pc = 0x30d3fcu;
    // NOP
label_30d400:
    // 0x30d400: 0x86430510  lh          $v1, 0x510($s2)
    ctx->pc = 0x30d400u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x30d404: 0x460002e  bltz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x30D404u;
    {
        const bool branch_taken_0x30d404 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x30D408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D404u;
        // 0x30d408: 0x28617531  slti        $at, $v1, 0x7531 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30001) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d404) {
            ctx->pc = 0x30D4C0u;
            goto label_30d4c0;
        }
    }
    ctx->pc = 0x30D40Cu;
    // 0x30d40c: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x30D40Cu;
    {
        const bool branch_taken_0x30d40c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d40c) {
            ctx->pc = 0x30D4C0u;
            goto label_30d4c0;
        }
    }
    ctx->pc = 0x30D414u;
    // 0x30d414: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x30d414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x30d418: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x30d418u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30d41c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x30d41cu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x30d420: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30d420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d424: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x30d424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30d428: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30d428u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d42c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x30d42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x30d430: 0x7fa90050  sq          $t1, 0x50($sp)
    ctx->pc = 0x30d430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 9));
    // 0x30d434: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x30d434u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x30d438: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x30d438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x30d43c: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x30d43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
    // 0x30d440: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x30d440u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x30d444: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x30d444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x30d448: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x30d448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x30d44c: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x30d44cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x30d450: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x30d450u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x30d454: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x30d454u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x30d458: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x30d458u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x30d45c: 0x92460558  lbu         $a2, 0x558($s2)
    ctx->pc = 0x30d45cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1368)));
    // 0x30d460: 0xc64c0554  lwc1        $f12, 0x554($s2)
    ctx->pc = 0x30d460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30d464: 0xc0c0900  jal         func_302400
    ctx->pc = 0x30D464u;
    SET_GPR_U32(ctx, 31, 0x30D46Cu);
    ctx->pc = 0x30D468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D464u;
    // 0x30d468: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x30D464u, 0x30D46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D46Cu;
label_30d46c:
    // 0x30d46c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x30D46Cu;
    {
        const bool branch_taken_0x30d46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D46Cu;
        // 0x30d470: 0x264401c0  addiu       $a0, $s2, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d46c) {
            ctx->pc = 0x30D4C0u;
            goto label_30d4c0;
        }
    }
    ctx->pc = 0x30D474u;
    // 0x30d474: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30d474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d478: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x30d478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d47c: 0xc097184  jal         func_25C610
    ctx->pc = 0x30D47Cu;
    SET_GPR_U32(ctx, 31, 0x30D484u);
    ctx->pc = 0x30D480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D47Cu;
    // 0x30d480: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C610u, 0x30D47Cu, 0x30D484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D484u;
label_30d484:
    // 0x30d484: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30D484u;
    {
        const bool branch_taken_0x30d484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d484) {
            ctx->pc = 0x30D4C0u;
            goto label_30d4c0;
        }
    }
    ctx->pc = 0x30D48Cu;
    // 0x30d48c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x30d48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x30d490: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x30d490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x30d494: 0xae430518  sw          $v1, 0x518($s2)
    ctx->pc = 0x30d494u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1304), GPR_U32(ctx, 3));
    // 0x30d498: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x30d498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30d49c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x30d49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x30d4a0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x30d4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x30d4a4: 0xc097634  jal         func_25D8D0
    ctx->pc = 0x30D4A4u;
    SET_GPR_U32(ctx, 31, 0x30D4ACu);
    ctx->pc = 0x30D4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D4A4u;
    // 0x30d4a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D8D0u, 0x30D4A4u, 0x30D4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D4ACu;
label_30d4ac:
    // 0x30d4ac: 0x92430521  lbu         $v1, 0x521($s2)
    ctx->pc = 0x30d4acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x30d4b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30d4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30d4b4: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x30D4B4u;
    {
        const bool branch_taken_0x30d4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D4B4u;
        // 0x30d4b8: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d4b4) {
            ctx->pc = 0x30D720u;
            goto label_30d720;
        }
    }
    ctx->pc = 0x30D4BCu;
    // 0x30d4bc: 0x0  nop
    ctx->pc = 0x30d4bcu;
    // NOP
label_30d4c0:
    // 0x30d4c0: 0x92430515  lbu         $v1, 0x515($s2)
    ctx->pc = 0x30d4c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1301)));
    // 0x30d4c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D4C4u;
    {
        const bool branch_taken_0x30d4c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D4C4u;
        // 0x30d4c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d4c4) {
            ctx->pc = 0x30D4D8u;
            goto label_30d4d8;
        }
    }
    ctx->pc = 0x30D4CCu;
    // 0x30d4cc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x30D4CCu;
    {
        const bool branch_taken_0x30d4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d4cc) {
            ctx->pc = 0x30D558u;
            goto label_30d558;
        }
    }
    ctx->pc = 0x30D4D4u;
    // 0x30d4d4: 0x0  nop
    ctx->pc = 0x30d4d4u;
    // NOP
label_30d4d8:
    // 0x30d4d8: 0x86440510  lh          $a0, 0x510($s2)
    ctx->pc = 0x30d4d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x30d4dc: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x30d4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x30d4e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30d4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30d4e4: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x30d4e4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x30d4e8: 0x86440512  lh          $a0, 0x512($s2)
    ctx->pc = 0x30d4e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1298)));
    // 0x30d4ec: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x30D4ECu;
    {
        const bool branch_taken_0x30d4ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x30d4ec) {
            ctx->pc = 0x30D528u;
            goto label_30d528;
        }
    }
    ctx->pc = 0x30D4F4u;
    // 0x30d4f4: 0x86450510  lh          $a1, 0x510($s2)
    ctx->pc = 0x30d4f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x30d4f8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x30d4f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x30d4fc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x30D4FCu;
    {
        const bool branch_taken_0x30d4fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D4FCu;
        // 0x30d500: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d4fc) {
            ctx->pc = 0x30D550u;
            goto label_30d550;
        }
    }
    ctx->pc = 0x30D504u;
    // 0x30d504: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30d504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d508: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x30d508u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30d50c: 0x0  nop
    ctx->pc = 0x30d50cu;
    // NOP
    // 0x30d510: 0x0  nop
    ctx->pc = 0x30d510u;
    // NOP
    // 0x30d514: 0x2010  mfhi        $a0
    ctx->pc = 0x30d514u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x30d518: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x30d518u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x30d51c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x30D51Cu;
    {
        const bool branch_taken_0x30d51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D51Cu;
        // 0x30d520: 0xa2430514  sb          $v1, 0x514($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d51c) {
            ctx->pc = 0x30D550u;
            goto label_30d550;
        }
    }
    ctx->pc = 0x30D524u;
    // 0x30d524: 0x0  nop
    ctx->pc = 0x30d524u;
    // NOP
label_30d528:
    // 0x30d528: 0x86430510  lh          $v1, 0x510($s2)
    ctx->pc = 0x30d528u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x30d52c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x30d52cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x30d530: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D530u;
    {
        const bool branch_taken_0x30d530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d530) {
            ctx->pc = 0x30D550u;
            goto label_30d550;
        }
    }
    ctx->pc = 0x30D538u;
    // 0x30d538: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x30d538u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x30d53c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30d53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d540: 0xa2430515  sb          $v1, 0x515($s2)
    ctx->pc = 0x30d540u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x30d544: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30D544u;
    {
        const bool branch_taken_0x30d544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D544u;
        // 0x30d548: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d544) {
            ctx->pc = 0x30D558u;
            goto label_30d558;
        }
    }
    ctx->pc = 0x30D54Cu;
    // 0x30d54c: 0x0  nop
    ctx->pc = 0x30d54cu;
    // NOP
label_30d550:
    // 0x30d550: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30d550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d554: 0x0  nop
    ctx->pc = 0x30d554u;
    // NOP
label_30d558:
    // 0x30d558: 0x14600071  bnez        $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x30D558u;
    {
        const bool branch_taken_0x30d558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D558u;
        // 0x30d55c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d558) {
            ctx->pc = 0x30D720u;
            goto label_30d720;
        }
    }
    ctx->pc = 0x30D560u;
    // 0x30d560: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x30D560u;
    SET_GPR_U32(ctx, 31, 0x30D568u);
    ctx->pc = 0x30D564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D560u;
    // 0x30d564: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x30D560u, 0x30D568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D568u;
label_30d568:
    // 0x30d568: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x30D568u;
    {
        const bool branch_taken_0x30d568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d568) {
            ctx->pc = 0x30D720u;
            goto label_30d720;
        }
    }
    ctx->pc = 0x30D570u;
label_30d570:
    // 0x30d570: 0x86420528  lh          $v0, 0x528($s2)
    ctx->pc = 0x30d570u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1320)));
    // 0x30d574: 0xa6420512  sh          $v0, 0x512($s2)
    ctx->pc = 0x30d574u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x30d578: 0xa6400510  sh          $zero, 0x510($s2)
    ctx->pc = 0x30d578u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x30d57c: 0xa2400514  sb          $zero, 0x514($s2)
    ctx->pc = 0x30d57cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d580: 0xa2400515  sb          $zero, 0x515($s2)
    ctx->pc = 0x30d580u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d584: 0x92420521  lbu         $v0, 0x521($s2)
    ctx->pc = 0x30d584u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x30d588: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30d588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30d58c: 0xa2420521  sb          $v0, 0x521($s2)
    ctx->pc = 0x30d58cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 2));
label_30d590:
    // 0x30d590: 0x8e460550  lw          $a2, 0x550($s2)
    ctx->pc = 0x30d590u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
    // 0x30d594: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30d594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d598: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x30D598u;
    SET_GPR_U32(ctx, 31, 0x30D5A0u);
    ctx->pc = 0x30D59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D598u;
    // 0x30d59c: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x30D598u, 0x30D5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D5A0u;
label_30d5a0:
    // 0x30d5a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D5A0u;
    {
        const bool branch_taken_0x30d5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D5A0u;
        // 0x30d5a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d5a0) {
            ctx->pc = 0x30D5B8u;
            goto label_30d5b8;
        }
    }
    ctx->pc = 0x30D5A8u;
    // 0x30d5a8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x30D5A8u;
    SET_GPR_U32(ctx, 31, 0x30D5B0u);
    ctx->pc = 0x30D5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D5A8u;
    // 0x30d5ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x30D5A8u, 0x30D5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D5B0u;
label_30d5b0:
    // 0x30d5b0: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x30D5B0u;
    {
        const bool branch_taken_0x30d5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d5b0) {
            ctx->pc = 0x30D720u;
            goto label_30d720;
        }
    }
    ctx->pc = 0x30D5B8u;
label_30d5b8:
    // 0x30d5b8: 0x8e450518  lw          $a1, 0x518($s2)
    ctx->pc = 0x30d5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1304)));
    // 0x30d5bc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x30d5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x30d5c0: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x30D5C0u;
    SET_GPR_U32(ctx, 31, 0x30D5C8u);
    ctx->pc = 0x30D5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D5C0u;
    // 0x30d5c4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x30D5C0u, 0x30D5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D5C8u;
label_30d5c8:
    // 0x30d5c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30d5c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d5cc: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30D5CCu;
    {
        const bool branch_taken_0x30d5cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D5CCu;
        // 0x30d5d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d5cc) {
            ctx->pc = 0x30D5E8u;
            goto label_30d5e8;
        }
    }
    ctx->pc = 0x30D5D4u;
    // 0x30d5d4: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x30D5D4u;
    SET_GPR_U32(ctx, 31, 0x30D5DCu);
    ctx->pc = 0x30D5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D5D4u;
    // 0x30d5d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x30D5D4u, 0x30D5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D5DCu;
label_30d5dc:
    // 0x30d5dc: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x30D5DCu;
    {
        const bool branch_taken_0x30d5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d5dc) {
            ctx->pc = 0x30D720u;
            goto label_30d720;
        }
    }
    ctx->pc = 0x30D5E4u;
    // 0x30d5e4: 0x0  nop
    ctx->pc = 0x30d5e4u;
    // NOP
label_30d5e8:
    // 0x30d5e8: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x30d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x30d5ec: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x30d5ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30d5f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D5F0u;
    {
        const bool branch_taken_0x30d5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D5F0u;
        // 0x30d5f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d5f0) {
            ctx->pc = 0x30D608u;
            goto label_30d608;
        }
    }
    ctx->pc = 0x30D5F8u;
    // 0x30d5f8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x30D5F8u;
    SET_GPR_U32(ctx, 31, 0x30D600u);
    ctx->pc = 0x30D5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D5F8u;
    // 0x30d5fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x30D5F8u, 0x30D600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D600u;
label_30d600:
    // 0x30d600: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x30D600u;
    {
        const bool branch_taken_0x30d600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d600) {
            ctx->pc = 0x30D720u;
            goto label_30d720;
        }
    }
    ctx->pc = 0x30D608u;
label_30d608:
    // 0x30d608: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x30d608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x30d60c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x30d60cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30d610: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x30d610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30d614: 0xc0976ac  jal         func_25DAB0
    ctx->pc = 0x30D614u;
    SET_GPR_U32(ctx, 31, 0x30D61Cu);
    ctx->pc = 0x30D618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D614u;
    // 0x30d618: 0x2407000d  addiu       $a3, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DAB0u, 0x30D614u, 0x30D61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D61Cu;
label_30d61c:
    // 0x30d61c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30D61Cu;
    {
        const bool branch_taken_0x30d61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D61Cu;
        // 0x30d620: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d61c) {
            ctx->pc = 0x30D640u;
            goto label_30d640;
        }
    }
    ctx->pc = 0x30D624u;
    // 0x30d624: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x30D624u;
    SET_GPR_U32(ctx, 31, 0x30D62Cu);
    ctx->pc = 0x30D628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D624u;
    // 0x30d628: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x30D624u, 0x30D62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D62Cu;
label_30d62c:
    // 0x30d62c: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x30D62Cu;
    {
        const bool branch_taken_0x30d62c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D62Cu;
        // 0x30d630: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d62c) {
            ctx->pc = 0x30D638u;
            goto label_30d638;
        }
    }
    ctx->pc = 0x30D634u;
    // 0x30d634: 0xa623056e  sh          $v1, 0x56E($s1)
    ctx->pc = 0x30d634u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 3));
label_30d638:
    // 0x30d638: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x30D638u;
    {
        const bool branch_taken_0x30d638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d638) {
            ctx->pc = 0x30D720u;
            goto label_30d720;
        }
    }
    ctx->pc = 0x30D640u;
label_30d640:
    // 0x30d640: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x30D640u;
    {
        const bool branch_taken_0x30d640 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D640u;
        // 0x30d644: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d640) {
            ctx->pc = 0x30D670u;
            goto label_30d670;
        }
    }
    ctx->pc = 0x30D648u;
    // 0x30d648: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x30d648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x30d64c: 0xa624056e  sh          $a0, 0x56E($s1)
    ctx->pc = 0x30d64cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 4));
    // 0x30d650: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x30d650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x30d654: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x30d654u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x30d658: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x30d658u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30d65c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30d65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30d660: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x30d660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30d664: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x30d664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x30d668: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x30d668u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30d66c: 0xa6230570  sh          $v1, 0x570($s1)
    ctx->pc = 0x30d66cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1392), (uint16_t)GPR_U32(ctx, 3));
label_30d670:
    // 0x30d670: 0x92430515  lbu         $v1, 0x515($s2)
    ctx->pc = 0x30d670u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1301)));
    // 0x30d674: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D674u;
    {
        const bool branch_taken_0x30d674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D674u;
        // 0x30d678: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d674) {
            ctx->pc = 0x30D688u;
            goto label_30d688;
        }
    }
    ctx->pc = 0x30D67Cu;
    // 0x30d67c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x30D67Cu;
    {
        const bool branch_taken_0x30d67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d67c) {
            ctx->pc = 0x30D708u;
            goto label_30d708;
        }
    }
    ctx->pc = 0x30D684u;
    // 0x30d684: 0x0  nop
    ctx->pc = 0x30d684u;
    // NOP
label_30d688:
    // 0x30d688: 0x86440510  lh          $a0, 0x510($s2)
    ctx->pc = 0x30d688u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x30d68c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x30d68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x30d690: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30d690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30d694: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x30d694u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x30d698: 0x86440512  lh          $a0, 0x512($s2)
    ctx->pc = 0x30d698u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1298)));
    // 0x30d69c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x30D69Cu;
    {
        const bool branch_taken_0x30d69c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x30d69c) {
            ctx->pc = 0x30D6D8u;
            goto label_30d6d8;
        }
    }
    ctx->pc = 0x30D6A4u;
    // 0x30d6a4: 0x86450510  lh          $a1, 0x510($s2)
    ctx->pc = 0x30d6a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x30d6a8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x30d6a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x30d6ac: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x30D6ACu;
    {
        const bool branch_taken_0x30d6ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D6ACu;
        // 0x30d6b0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d6ac) {
            ctx->pc = 0x30D700u;
            goto label_30d700;
        }
    }
    ctx->pc = 0x30D6B4u;
    // 0x30d6b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30d6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d6b8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x30d6b8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30d6bc: 0x0  nop
    ctx->pc = 0x30d6bcu;
    // NOP
    // 0x30d6c0: 0x0  nop
    ctx->pc = 0x30d6c0u;
    // NOP
    // 0x30d6c4: 0x2010  mfhi        $a0
    ctx->pc = 0x30d6c4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x30d6c8: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x30d6c8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x30d6cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x30D6CCu;
    {
        const bool branch_taken_0x30d6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D6CCu;
        // 0x30d6d0: 0xa2430514  sb          $v1, 0x514($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d6cc) {
            ctx->pc = 0x30D700u;
            goto label_30d700;
        }
    }
    ctx->pc = 0x30D6D4u;
    // 0x30d6d4: 0x0  nop
    ctx->pc = 0x30d6d4u;
    // NOP
label_30d6d8:
    // 0x30d6d8: 0x86430510  lh          $v1, 0x510($s2)
    ctx->pc = 0x30d6d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x30d6dc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x30d6dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x30d6e0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D6E0u;
    {
        const bool branch_taken_0x30d6e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d6e0) {
            ctx->pc = 0x30D700u;
            goto label_30d700;
        }
    }
    ctx->pc = 0x30D6E8u;
    // 0x30d6e8: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x30d6e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x30d6ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30d6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d6f0: 0xa2430515  sb          $v1, 0x515($s2)
    ctx->pc = 0x30d6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x30d6f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30D6F4u;
    {
        const bool branch_taken_0x30d6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D6F4u;
        // 0x30d6f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d6f4) {
            ctx->pc = 0x30D708u;
            goto label_30d708;
        }
    }
    ctx->pc = 0x30D6FCu;
    // 0x30d6fc: 0x0  nop
    ctx->pc = 0x30d6fcu;
    // NOP
label_30d700:
    // 0x30d700: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30d700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d704: 0x0  nop
    ctx->pc = 0x30d704u;
    // NOP
label_30d708:
    // 0x30d708: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D708u;
    {
        const bool branch_taken_0x30d708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D708u;
        // 0x30d70c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d708) {
            ctx->pc = 0x30D720u;
            goto label_30d720;
        }
    }
    ctx->pc = 0x30D710u;
    // 0x30d710: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x30D710u;
    SET_GPR_U32(ctx, 31, 0x30D718u);
    ctx->pc = 0x30D714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D710u;
    // 0x30d714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x30D710u, 0x30D718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D718u;
label_30d718:
    // 0x30d718: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x30D718u;
    {
        const bool branch_taken_0x30d718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d718) {
            ctx->pc = 0x30D720u;
            goto label_30d720;
        }
    }
    ctx->pc = 0x30D720u;
label_30d720:
    // 0x30d720: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x30d720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30d724: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30d724u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30d728: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30d728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d72c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30d72cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d730: 0x3e00008  jr          $ra
    ctx->pc = 0x30D730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D730u;
        // 0x30d734: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D738u;
}
