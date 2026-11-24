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

// Function: sub_001562C0
// Address: 0x1562c0 - 0x156590
void sub_001562C0_0x1562c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001562C0_0x1562c0");
#endif

    switch (ctx->pc) {
        case 0x1562ecu: goto label_1562ec;
        case 0x156320u: goto label_156320;
        case 0x15632cu: goto label_15632c;
        case 0x156358u: goto label_156358;
        case 0x156384u: goto label_156384;
        case 0x156394u: goto label_156394;
        case 0x1563a0u: goto label_1563a0;
        case 0x156430u: goto label_156430;
        case 0x156444u: goto label_156444;
        case 0x15645cu: goto label_15645c;
        case 0x1564f0u: goto label_1564f0;
        case 0x156504u: goto label_156504;
        case 0x15653cu: goto label_15653c;
        default: break;
    }

    ctx->pc = 0x1562c0u;

    // 0x1562c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1562c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1562c4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1562c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1562c8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1562c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1562cc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1562ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1562d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1562d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1562d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1562d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1562d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1562d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1562dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1562dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1562e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1562e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1562e4: 0xc0b3170  jal         func_2CC5C0
    ctx->pc = 0x1562E4u;
    SET_GPR_U32(ctx, 31, 0x1562ECu);
    ctx->pc = 0x1562E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1562E4u;
    // 0x1562e8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC5C0u, 0x1562E4u, 0x1562ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1562ECu;
label_1562ec:
    // 0x1562ec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1562ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1562f0: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x1562f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x1562f4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1562f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1562f8: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x1562F8u;
    {
        const bool branch_taken_0x1562f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1562f8) {
            ctx->pc = 0x156410u;
            goto label_156410;
        }
    }
    ctx->pc = 0x156300u;
    // 0x156300: 0x93838a54  lbu         $v1, -0x75AC($gp)
    ctx->pc = 0x156300u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937172)));
    // 0x156304: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x156304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x156308: 0xa043005d  sb          $v1, 0x5D($v0)
    ctx->pc = 0x156308u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 93), (uint8_t)GPR_U32(ctx, 3));
    // 0x15630c: 0x93838a55  lbu         $v1, -0x75AB($gp)
    ctx->pc = 0x15630cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937173)));
    // 0x156310: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x156310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x156314: 0xa04300c1  sb          $v1, 0xC1($v0)
    ctx->pc = 0x156314u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 193), (uint8_t)GPR_U32(ctx, 3));
    // 0x156318: 0xc0d2494  jal         func_349250
    ctx->pc = 0x156318u;
    SET_GPR_U32(ctx, 31, 0x156320u);
    ctx->pc = 0x15631Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156318u;
    // 0x15631c: 0x8f848ba8  lw          $a0, -0x7458($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349250u, 0x156318u, 0x156320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156320u;
label_156320:
    // 0x156320: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x156320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x156324: 0xc0d2494  jal         func_349250
    ctx->pc = 0x156324u;
    SET_GPR_U32(ctx, 31, 0x15632Cu);
    ctx->pc = 0x156328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156324u;
    // 0x156328: 0x24440064  addiu       $a0, $v0, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349250u, 0x156324u, 0x15632Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15632Cu;
label_15632c:
    // 0x15632c: 0x93828a54  lbu         $v0, -0x75AC($gp)
    ctx->pc = 0x15632cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937172)));
    // 0x156330: 0x28410040  slti        $at, $v0, 0x40
    ctx->pc = 0x156330u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x156334: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x156334u;
    {
        const bool branch_taken_0x156334 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x156334) {
            ctx->pc = 0x156358u;
            goto label_156358;
        }
    }
    ctx->pc = 0x15633Cu;
    // 0x15633c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x15633cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x156340: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x156340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x156344: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x156344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x156348: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x156348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x15634c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15634cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156350: 0xc0cc9ac  jal         func_3326B0
    ctx->pc = 0x156350u;
    SET_GPR_U32(ctx, 31, 0x156358u);
    ctx->pc = 0x156354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156350u;
    // 0x156354: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3326B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3326B0u, 0x156350u, 0x156358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156358u;
label_156358:
    // 0x156358: 0x93828a55  lbu         $v0, -0x75AB($gp)
    ctx->pc = 0x156358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937173)));
    // 0x15635c: 0x28410040  slti        $at, $v0, 0x40
    ctx->pc = 0x15635cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x156360: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x156360u;
    {
        const bool branch_taken_0x156360 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x156360) {
            ctx->pc = 0x156388u;
            goto label_156388;
        }
    }
    ctx->pc = 0x156368u;
    // 0x156368: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x156368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x15636c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x15636cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x156370: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x156370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x156374: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x156374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x156378: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x156378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15637c: 0xc0cc9ac  jal         func_3326B0
    ctx->pc = 0x15637Cu;
    SET_GPR_U32(ctx, 31, 0x156384u);
    ctx->pc = 0x156380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15637Cu;
    // 0x156380: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3326B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3326B0u, 0x15637Cu, 0x156384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156384u;
label_156384:
    // 0x156384: 0x0  nop
    ctx->pc = 0x156384u;
    // NOP
label_156388:
    // 0x156388: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x156388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x15638c: 0xc0f9fb0  jal         func_3E7EC0
    ctx->pc = 0x15638Cu;
    SET_GPR_U32(ctx, 31, 0x156394u);
    ctx->pc = 0x156390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15638Cu;
    // 0x156390: 0x248465b0  addiu       $a0, $a0, 0x65B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7EC0u, 0x15638Cu, 0x156394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156394u;
label_156394:
    // 0x156394: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x156394u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156398: 0x27868a54  addiu       $a2, $gp, -0x75AC
    ctx->pc = 0x156398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937172));
    // 0x15639c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15639cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1563a0:
    // 0x1563a0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1563a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1563a4: 0x28610040  slti        $at, $v1, 0x40
    ctx->pc = 0x1563a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1563a8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x1563A8u;
    {
        const bool branch_taken_0x1563a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1563a8) {
            ctx->pc = 0x1563E8u;
            goto label_1563e8;
        }
    }
    ctx->pc = 0x1563B0u;
    // 0x1563b0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1563b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1563b4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1563b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1563b8: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1563b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1563bc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1563BCu;
    {
        const bool branch_taken_0x1563bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1563C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1563BCu;
        // 0x1563c0: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1563bc) {
            ctx->pc = 0x1563D8u;
            goto label_1563d8;
        }
    }
    ctx->pc = 0x1563C4u;
    // 0x1563c4: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x1563c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x1563c8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1563c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1563cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1563CCu;
    {
        const bool branch_taken_0x1563cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1563D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1563CCu;
        // 0x1563d0: 0xa064005b  sb          $a0, 0x5B($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 91), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1563cc) {
            ctx->pc = 0x1563F8u;
            goto label_1563f8;
        }
    }
    ctx->pc = 0x1563D4u;
    // 0x1563d4: 0x0  nop
    ctx->pc = 0x1563d4u;
    // NOP
label_1563d8:
    // 0x1563d8: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x1563d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x1563dc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1563dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1563e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1563E0u;
    {
        const bool branch_taken_0x1563e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1563E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1563E0u;
        // 0x1563e4: 0xa060005b  sb          $zero, 0x5B($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 91), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1563e0) {
            ctx->pc = 0x1563F8u;
            goto label_1563f8;
        }
    }
    ctx->pc = 0x1563E8u;
label_1563e8:
    // 0x1563e8: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x1563e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x1563ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1563ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1563f0: 0xa060005b  sb          $zero, 0x5B($v1)
    ctx->pc = 0x1563f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x1563f4: 0x0  nop
    ctx->pc = 0x1563f4u;
    // NOP
label_1563f8:
    // 0x1563f8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1563f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1563fc: 0x28e30002  slti        $v1, $a3, 0x2
    ctx->pc = 0x1563fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x156400: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x156400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x156404: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x156404u;
    {
        const bool branch_taken_0x156404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156404u;
        // 0x156408: 0x24a50064  addiu       $a1, $a1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156404) {
            ctx->pc = 0x1563A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1563a0;
        }
    }
    ctx->pc = 0x15640Cu;
    // 0x15640c: 0x0  nop
    ctx->pc = 0x15640cu;
    // NOP
label_156410:
    // 0x156410: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x156410u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156414: 0x27948a54  addiu       $s4, $gp, -0x75AC
    ctx->pc = 0x156414u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937172));
    // 0x156418: 0x27938a5c  addiu       $s3, $gp, -0x75A4
    ctx->pc = 0x156418u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937180));
    // 0x15641c: 0x27928a68  addiu       $s2, $gp, -0x7598
    ctx->pc = 0x15641cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937192));
    // 0x156420: 0x27918a64  addiu       $s1, $gp, -0x759C
    ctx->pc = 0x156420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937188));
    // 0x156424: 0x27978a70  addiu       $s7, $gp, -0x7590
    ctx->pc = 0x156424u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937200));
    // 0x156428: 0x27908a7c  addiu       $s0, $gp, -0x7584
    ctx->pc = 0x156428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937212));
    // 0x15642c: 0x0  nop
    ctx->pc = 0x15642cu;
    // NOP
label_156430:
    // 0x156430: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x156430u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x156434: 0x10800034  beqz        $a0, . + 4 + (0x34 << 2)
    ctx->pc = 0x156434u;
    {
        const bool branch_taken_0x156434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x156434) {
            ctx->pc = 0x156508u;
            goto label_156508;
        }
    }
    ctx->pc = 0x15643Cu;
    // 0x15643c: 0xc0d2604  jal         func_349810
    ctx->pc = 0x15643Cu;
    SET_GPR_U32(ctx, 31, 0x156444u);
    ctx->pc = 0x156440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15643Cu;
    // 0x156440: 0x82650000  lb          $a1, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349810u, 0x15643Cu, 0x156444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156444u;
label_156444:
    // 0x156444: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x156444u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156448: 0x90420060  lbu         $v0, 0x60($v0)
    ctx->pc = 0x156448u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x15644c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15644Cu;
    {
        const bool branch_taken_0x15644c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15644Cu;
        // 0x156450: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15644c) {
            ctx->pc = 0x156460u;
            goto label_156460;
        }
    }
    ctx->pc = 0x156454u;
    // 0x156454: 0xc0d2494  jal         func_349250
    ctx->pc = 0x156454u;
    SET_GPR_U32(ctx, 31, 0x15645Cu);
    ctx->pc = 0x349250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349250u, 0x156454u, 0x15645Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15645Cu;
label_15645c:
    // 0x15645c: 0x0  nop
    ctx->pc = 0x15645cu;
    // NOP
label_156460:
    // 0x156460: 0x92c2005b  lbu         $v0, 0x5B($s6)
    ctx->pc = 0x156460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 91)));
    // 0x156464: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x156464u;
    {
        const bool branch_taken_0x156464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156464) {
            ctx->pc = 0x156478u;
            goto label_156478;
        }
    }
    ctx->pc = 0x15646Cu;
    // 0x15646c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15646Cu;
    {
        const bool branch_taken_0x15646c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15646Cu;
        // 0x156470: 0xa2420000  sb          $v0, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15646c) {
            ctx->pc = 0x156480u;
            goto label_156480;
        }
    }
    ctx->pc = 0x156474u;
    // 0x156474: 0x0  nop
    ctx->pc = 0x156474u;
    // NOP
label_156478:
    // 0x156478: 0x92c2005a  lbu         $v0, 0x5A($s6)
    ctx->pc = 0x156478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 90)));
    // 0x15647c: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x15647cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
label_156480:
    // 0x156480: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x156480u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x156484: 0x28410040  slti        $at, $v0, 0x40
    ctx->pc = 0x156484u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x156488: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x156488u;
    {
        const bool branch_taken_0x156488 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x156488) {
            ctx->pc = 0x156498u;
            goto label_156498;
        }
    }
    ctx->pc = 0x156490u;
    // 0x156490: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x156490u;
    {
        const bool branch_taken_0x156490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156490u;
        // 0x156494: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156490) {
            ctx->pc = 0x1564A0u;
            goto label_1564a0;
        }
    }
    ctx->pc = 0x156498u;
label_156498:
    // 0x156498: 0x96c20058  lhu         $v0, 0x58($s6)
    ctx->pc = 0x156498u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 88)));
    // 0x15649c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x15649cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_1564a0:
    // 0x1564a0: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x1564a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1564a4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1564a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1564a8: 0x244211b0  addiu       $v0, $v0, 0x11B0
    ctx->pc = 0x1564a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4528));
    // 0x1564ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1564acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1564b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1564b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1564b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1564b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1564b8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1564b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1564bc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1564BCu;
    {
        const bool branch_taken_0x1564bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1564C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564BCu;
        // 0x1564c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1564bc) {
            ctx->pc = 0x1564C8u;
            goto label_1564c8;
        }
    }
    ctx->pc = 0x1564C4u;
    // 0x1564c4: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1564c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_1564c8:
    // 0x1564c8: 0x92850000  lbu         $a1, 0x0($s4)
    ctx->pc = 0x1564c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1564cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1564ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1564d0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1564d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1564d4: 0x28a10040  slti        $at, $a1, 0x40
    ctx->pc = 0x1564d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1564d8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1564D8u;
    {
        const bool branch_taken_0x1564d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1564DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564D8u;
        // 0x1564dc: 0xe5100a  movz        $v0, $a3, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1564d8) {
            ctx->pc = 0x1564F8u;
            goto label_1564f8;
        }
    }
    ctx->pc = 0x1564E0u;
    // 0x1564e0: 0x92460000  lbu         $a2, 0x0($s2)
    ctx->pc = 0x1564e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1564e4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1564e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1564e8: 0xc0b30a4  jal         func_2CC290
    ctx->pc = 0x1564E8u;
    SET_GPR_U32(ctx, 31, 0x1564F0u);
    ctx->pc = 0x1564ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1564E8u;
    // 0x1564ec: 0x32a700ff  andi        $a3, $s5, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC290u, 0x1564E8u, 0x1564F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1564F0u;
label_1564f0:
    // 0x1564f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1564F0u;
    {
        const bool branch_taken_0x1564f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1564f0) {
            ctx->pc = 0x156508u;
            goto label_156508;
        }
    }
    ctx->pc = 0x1564F8u;
label_1564f8:
    // 0x1564f8: 0x92460000  lbu         $a2, 0x0($s2)
    ctx->pc = 0x1564f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1564fc: 0xc0b30a4  jal         func_2CC290
    ctx->pc = 0x1564FCu;
    SET_GPR_U32(ctx, 31, 0x156504u);
    ctx->pc = 0x156500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1564FCu;
    // 0x156500: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC290u, 0x1564FCu, 0x156504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156504u;
label_156504:
    // 0x156504: 0x0  nop
    ctx->pc = 0x156504u;
    // NOP
label_156508:
    // 0x156508: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x156508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15650c: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x15650cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x156510: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x156510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x156514: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x156514u;
    {
        const bool branch_taken_0x156514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x156514) {
            ctx->pc = 0x156540u;
            goto label_156540;
        }
    }
    ctx->pc = 0x15651Cu;
    // 0x15651c: 0x92e50000  lbu         $a1, 0x0($s7)
    ctx->pc = 0x15651cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x156520: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x156520u;
    {
        const bool branch_taken_0x156520 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x156520) {
            ctx->pc = 0x156540u;
            goto label_156540;
        }
    }
    ctx->pc = 0x156528u;
    // 0x156528: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x156528u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15652c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15652cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156530: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x156530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156534: 0xc0b30a4  jal         func_2CC290
    ctx->pc = 0x156534u;
    SET_GPR_U32(ctx, 31, 0x15653Cu);
    ctx->pc = 0x156538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156534u;
    // 0x156538: 0xe5200a  movz        $a0, $a3, $a1 (Delay Slot)
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC290u, 0x156534u, 0x15653Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15653Cu;
label_15653c:
    // 0x15653c: 0x0  nop
    ctx->pc = 0x15653cu;
    // NOP
label_156540:
    // 0x156540: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x156540u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x156544: 0x2aa30002  slti        $v1, $s5, 0x2
    ctx->pc = 0x156544u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x156548: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x156548u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x15654c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15654cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x156550: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x156550u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x156554: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x156554u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x156558: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x156558u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x15655c: 0x1460ffb4  bnez        $v1, . + 4 + (-0x4C << 2)
    ctx->pc = 0x15655Cu;
    {
        const bool branch_taken_0x15655c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15655Cu;
        // 0x156560: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15655c) {
            ctx->pc = 0x156430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156430;
        }
    }
    ctx->pc = 0x156564u;
    // 0x156564: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x156564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x156568: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x156568u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15656c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15656cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x156570: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x156570u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x156574: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x156574u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x156578: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x156578u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15657c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15657cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156580: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x156580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x156584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156588: 0x3e00008  jr          $ra
    ctx->pc = 0x156588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156588u;
        // 0x15658c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156590u;
}
