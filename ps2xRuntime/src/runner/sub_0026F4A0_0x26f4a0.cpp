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

// Function: sub_0026F4A0
// Address: 0x26f4a0 - 0x26f6e8
void sub_0026F4A0_0x26f4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F4A0_0x26f4a0");
#endif

    switch (ctx->pc) {
        case 0x26f500u: goto label_26f500;
        case 0x26f510u: goto label_26f510;
        case 0x26f520u: goto label_26f520;
        case 0x26f53cu: goto label_26f53c;
        case 0x26f564u: goto label_26f564;
        case 0x26f57cu: goto label_26f57c;
        case 0x26f58cu: goto label_26f58c;
        case 0x26f5a0u: goto label_26f5a0;
        case 0x26f5a8u: goto label_26f5a8;
        case 0x26f5d8u: goto label_26f5d8;
        case 0x26f618u: goto label_26f618;
        case 0x26f628u: goto label_26f628;
        case 0x26f63cu: goto label_26f63c;
        case 0x26f664u: goto label_26f664;
        case 0x26f678u: goto label_26f678;
        case 0x26f684u: goto label_26f684;
        case 0x26f68cu: goto label_26f68c;
        case 0x26f6b8u: goto label_26f6b8;
        case 0x26f6d8u: goto label_26f6d8;
        default: break;
    }

    ctx->pc = 0x26f4a0u;

    // 0x26f4a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26f4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26f4a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26f4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26f4a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26f4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26f4ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26f4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26f4b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26f4b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f4b4: 0x90840003  lbu         $a0, 0x3($a0)
    ctx->pc = 0x26f4b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x26f4b8: 0x1083006d  beq         $a0, $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x26F4B8u;
    {
        const bool branch_taken_0x26f4b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x26F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4B8u;
        // 0x26f4bc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f4b8) {
            ctx->pc = 0x26F670u;
            goto label_26f670;
        }
    }
    ctx->pc = 0x26F4C0u;
    // 0x26f4c0: 0x10830057  beq         $a0, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x26F4C0u;
    {
        const bool branch_taken_0x26f4c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26f4c0) {
            ctx->pc = 0x26F620u;
            goto label_26f620;
        }
    }
    ctx->pc = 0x26F4C8u;
    // 0x26f4c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26f4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26f4cc: 0x10830032  beq         $a0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x26F4CCu;
    {
        const bool branch_taken_0x26f4cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x26F4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4CCu;
        // 0x26f4d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f4cc) {
            ctx->pc = 0x26F598u;
            goto label_26f598;
        }
    }
    ctx->pc = 0x26F4D4u;
    // 0x26f4d4: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x26F4D4u;
    {
        const bool branch_taken_0x26f4d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26f4d4) {
            ctx->pc = 0x26F530u;
            goto label_26f530;
        }
    }
    ctx->pc = 0x26F4DCu;
    // 0x26f4dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F4DCu;
    {
        const bool branch_taken_0x26f4dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f4dc) {
            ctx->pc = 0x26F4F0u;
            goto label_26f4f0;
        }
    }
    ctx->pc = 0x26F4E4u;
    // 0x26f4e4: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x26F4E4u;
    {
        const bool branch_taken_0x26f4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f4e4) {
            ctx->pc = 0x26F6D8u;
            goto label_26f6d8;
        }
    }
    ctx->pc = 0x26F4ECu;
    // 0x26f4ec: 0x0  nop
    ctx->pc = 0x26f4ecu;
    // NOP
label_26f4f0:
    // 0x26f4f0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26f4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26f4f4: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x26f4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x26f4f8: 0xc05e374  jal         func_178DD0
    ctx->pc = 0x26F4F8u;
    SET_GPR_U32(ctx, 31, 0x26F500u);
    ctx->pc = 0x26F4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F4F8u;
    // 0x26f4fc: 0x24055000  addiu       $a1, $zero, 0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178DD0u, 0x26F4F8u, 0x26F500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F500u;
label_26f500:
    // 0x26f500: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26f500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26f504: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x26f504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26f508: 0xc05eaf8  jal         func_17ABE0
    ctx->pc = 0x26F508u;
    SET_GPR_U32(ctx, 31, 0x26F510u);
    ctx->pc = 0x26F50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F508u;
    // 0x26f50c: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABE0u, 0x26F508u, 0x26F510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F510u;
label_26f510:
    // 0x26f510: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26f510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26f514: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x26f514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26f518: 0xc05eaf8  jal         func_17ABE0
    ctx->pc = 0x26F518u;
    SET_GPR_U32(ctx, 31, 0x26F520u);
    ctx->pc = 0x26F51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F518u;
    // 0x26f51c: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABE0u, 0x26F518u, 0x26F520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F520u;
label_26f520:
    // 0x26f520: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x26f520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x26f524: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26f524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26f528: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x26F528u;
    {
        const bool branch_taken_0x26f528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F528u;
        // 0x26f52c: 0xa2030003  sb          $v1, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f528) {
            ctx->pc = 0x26F6D8u;
            goto label_26f6d8;
        }
    }
    ctx->pc = 0x26F530u;
label_26f530:
    // 0x26f530: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26f530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26f534: 0xc05e384  jal         func_178E10
    ctx->pc = 0x26F534u;
    SET_GPR_U32(ctx, 31, 0x26F53Cu);
    ctx->pc = 0x26F538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F534u;
    // 0x26f538: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E10u, 0x26F534u, 0x26F53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F53Cu;
label_26f53c:
    // 0x26f53c: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x26F53Cu;
    {
        const bool branch_taken_0x26f53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F53Cu;
        // 0x26f540: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f53c) {
            ctx->pc = 0x26F6D8u;
            goto label_26f6d8;
        }
    }
    ctx->pc = 0x26F544u;
    // 0x26f544: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26f544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26f548: 0x24030eba  addiu       $v1, $zero, 0xEBA
    ctx->pc = 0x26f548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3770));
    // 0x26f54c: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x26f54cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x26f550: 0x24020eb9  addiu       $v0, $zero, 0xEB9
    ctx->pc = 0x26f550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3769));
    // 0x26f554: 0x30840040  andi        $a0, $a0, 0x40
    ctx->pc = 0x26f554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x26f558: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x26f558u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x26f55c: 0xc0c70c8  jal         func_31C320
    ctx->pc = 0x26F55Cu;
    SET_GPR_U32(ctx, 31, 0x26F564u);
    ctx->pc = 0x26F560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F55Cu;
    // 0x26f560: 0x3064ffff  andi        $a0, $v1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C320u, 0x26F55Cu, 0x26F564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F564u;
label_26f564:
    // 0x26f564: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x26f564u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f568: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x26f568u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26f56c: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x26f56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x26f570: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26f570u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f574: 0xc0554c0  jal         func_155300
    ctx->pc = 0x26F574u;
    SET_GPR_U32(ctx, 31, 0x26F57Cu);
    ctx->pc = 0x26F578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F574u;
    // 0x26f578: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155300u, 0x26F574u, 0x26F57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F57Cu;
label_26f57c:
    // 0x26f57c: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x26f57cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x26f580: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26f580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26f584: 0xc09bf28  jal         func_26FCA0
    ctx->pc = 0x26F584u;
    SET_GPR_U32(ctx, 31, 0x26F58Cu);
    ctx->pc = 0x26F588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F584u;
    // 0x26f588: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FCA0u, 0x26F584u, 0x26F58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F58Cu;
label_26f58c:
    // 0x26f58c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x26F58Cu;
    {
        const bool branch_taken_0x26f58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f58c) {
            ctx->pc = 0x26F6D8u;
            goto label_26f6d8;
        }
    }
    ctx->pc = 0x26F594u;
    // 0x26f594: 0x0  nop
    ctx->pc = 0x26f594u;
    // NOP
label_26f598:
    // 0x26f598: 0xc09c074  jal         func_2701D0
    ctx->pc = 0x26F598u;
    SET_GPR_U32(ctx, 31, 0x26F5A0u);
    ctx->pc = 0x2701D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2701D0u, 0x26F598u, 0x26F5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F5A0u;
label_26f5a0:
    // 0x26f5a0: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x26F5A0u;
    SET_GPR_U32(ctx, 31, 0x26F5A8u);
    ctx->pc = 0x26F5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F5A0u;
    // 0x26f5a4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x26F5A0u, 0x26F5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F5A8u;
label_26f5a8:
    // 0x26f5a8: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x26F5A8u;
    {
        const bool branch_taken_0x26f5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f5a8) {
            ctx->pc = 0x26F6D8u;
            goto label_26f6d8;
        }
    }
    ctx->pc = 0x26F5B0u;
    // 0x26f5b0: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x26f5b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x26f5b4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26f5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26f5b8: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x26f5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x26f5bc: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x26f5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x26f5c0: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x26f5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x26f5c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26f5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26f5c8: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x26f5c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x26f5cc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x26f5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f5d0: 0xc04cae8  jal         func_132BA0
    ctx->pc = 0x26F5D0u;
    SET_GPR_U32(ctx, 31, 0x26F5D8u);
    ctx->pc = 0x26F5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F5D0u;
    // 0x26f5d4: 0x24080081  addiu       $t0, $zero, 0x81 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132BA0u, 0x26F5D0u, 0x26F5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F5D8u;
label_26f5d8:
    // 0x26f5d8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x26f5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x26f5dc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26f5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26f5e0: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x26f5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x26f5e4: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x26f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x26f5e8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x26f5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x26f5ec: 0x240619e6  addiu       $a2, $zero, 0x19E6
    ctx->pc = 0x26f5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6630));
    // 0x26f5f0: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x26f5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    // 0x26f5f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26f5f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f5f8: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x26f5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x26f5fc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26f5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26f600: 0xac2640b4  sw          $a2, 0x40B4($at)
    ctx->pc = 0x26f600u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x9140B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9140B4u, _value); } while (0);
    // 0x26f604: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x26f604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x26f608: 0x8c2540b8  lw          $a1, 0x40B8($at)
    ctx->pc = 0x26f608u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x9140B8u));
    // 0x26f60c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26f60cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26f610: 0xc0ce400  jal         func_339000
    ctx->pc = 0x26F610u;
    SET_GPR_U32(ctx, 31, 0x26F618u);
    ctx->pc = 0x26F614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F610u;
    // 0x26f614: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339000u, 0x26F610u, 0x26F618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F618u;
label_26f618:
    // 0x26f618: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x26F618u;
    {
        const bool branch_taken_0x26f618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f618) {
            ctx->pc = 0x26F6D8u;
            goto label_26f6d8;
        }
    }
    ctx->pc = 0x26F620u;
label_26f620:
    // 0x26f620: 0xc09c074  jal         func_2701D0
    ctx->pc = 0x26F620u;
    SET_GPR_U32(ctx, 31, 0x26F628u);
    ctx->pc = 0x2701D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2701D0u, 0x26F620u, 0x26F628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F628u;
label_26f628:
    // 0x26f628: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x26f628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x26f62c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x26f62cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x26f630: 0x8c2540b8  lw          $a1, 0x40B8($at)
    ctx->pc = 0x26f630u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x9140B8u));
    // 0x26f634: 0xc0ce31c  jal         func_338C70
    ctx->pc = 0x26F634u;
    SET_GPR_U32(ctx, 31, 0x26F63Cu);
    ctx->pc = 0x26F638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F634u;
    // 0x26f638: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338C70u, 0x26F634u, 0x26F63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F63Cu;
label_26f63c:
    // 0x26f63c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x26F63Cu;
    {
        const bool branch_taken_0x26f63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f63c) {
            ctx->pc = 0x26F6D8u;
            goto label_26f6d8;
        }
    }
    ctx->pc = 0x26F644u;
    // 0x26f644: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x26f644u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x26f648: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x26f648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x26f64c: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x26f64cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x26f650: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26f650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26f654: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x26f654u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x26f658: 0x8c2540b8  lw          $a1, 0x40B8($at)
    ctx->pc = 0x26f658u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x9140B8u));
    // 0x26f65c: 0xc0ce3f8  jal         func_338FE0
    ctx->pc = 0x26F65Cu;
    SET_GPR_U32(ctx, 31, 0x26F664u);
    ctx->pc = 0x26F660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F65Cu;
    // 0x26f660: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338FE0u, 0x26F65Cu, 0x26F664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F664u;
label_26f664:
    // 0x26f664: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x26F664u;
    {
        const bool branch_taken_0x26f664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f664) {
            ctx->pc = 0x26F6D8u;
            goto label_26f6d8;
        }
    }
    ctx->pc = 0x26F66Cu;
    // 0x26f66c: 0x0  nop
    ctx->pc = 0x26f66cu;
    // NOP
label_26f670:
    // 0x26f670: 0xc09c074  jal         func_2701D0
    ctx->pc = 0x26F670u;
    SET_GPR_U32(ctx, 31, 0x26F678u);
    ctx->pc = 0x2701D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2701D0u, 0x26F670u, 0x26F678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F678u;
label_26f678:
    // 0x26f678: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x26f678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26f67c: 0xc09bf64  jal         func_26FD90
    ctx->pc = 0x26F67Cu;
    SET_GPR_U32(ctx, 31, 0x26F684u);
    ctx->pc = 0x26F680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F67Cu;
    // 0x26f680: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FD90u, 0x26F67Cu, 0x26F684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F684u;
label_26f684:
    // 0x26f684: 0xc09bfd8  jal         func_26FF60
    ctx->pc = 0x26F684u;
    SET_GPR_U32(ctx, 31, 0x26F68Cu);
    ctx->pc = 0x26F688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F684u;
    // 0x26f688: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FF60u, 0x26F684u, 0x26F68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F68Cu;
label_26f68c:
    // 0x26f68c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26F68Cu;
    {
        const bool branch_taken_0x26f68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F68Cu;
        // 0x26f690: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f68c) {
            ctx->pc = 0x26F6D8u;
            goto label_26f6d8;
        }
    }
    ctx->pc = 0x26F694u;
    // 0x26f694: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26f694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26f698: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x26f698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x26f69c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26f69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f6a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26f6a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f6a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26f6a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f6a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26f6a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f6ac: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x26f6acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26f6b0: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x26F6B0u;
    SET_GPR_U32(ctx, 31, 0x26F6B8u);
    ctx->pc = 0x26F6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F6B0u;
    // 0x26f6b4: 0xa020cea9  sb          $zero, -0x3157($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294954665), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x26F6B0u, 0x26F6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F6B8u;
label_26f6b8:
    // 0x26f6b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26f6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26f6bc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x26f6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x26f6c0: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x26f6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x26f6c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f6c8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26f6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26f6cc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26f6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26f6d0: 0xc09bdf8  jal         func_26F7E0
    ctx->pc = 0x26F6D0u;
    SET_GPR_U32(ctx, 31, 0x26F6D8u);
    ctx->pc = 0x26F6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F6D0u;
    // 0x26f6d4: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F7E0u, 0x26F6D0u, 0x26F6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F6D8u;
label_26f6d8:
    // 0x26f6d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26f6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f6dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26f6dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x26F6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F6E0u;
        // 0x26f6e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F6E8u;
}
