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

// Function: sub_0019F520
// Address: 0x19f520 - 0x19f694
void sub_0019F520_0x19f520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F520_0x19f520");
#endif

    switch (ctx->pc) {
        case 0x19f5a0u: goto label_19f5a0;
        case 0x19f5d8u: goto label_19f5d8;
        case 0x19f5fcu: goto label_19f5fc;
        case 0x19f64cu: goto label_19f64c;
        case 0x19f660u: goto label_19f660;
        default: break;
    }

    ctx->pc = 0x19f520u;

    // 0x19f520: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x19f520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x19f524: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x19f524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x19f528: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x19f528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x19f52c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x19f52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x19f530: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x19f530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x19f534: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19f534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x19f538: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x19f538u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f53c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19f53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19f540: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x19f540u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f544: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19f544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19f548: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x19f548u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f54c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19f54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19f550: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x19f550u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f554: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19f554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19f558: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x19f558u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f55c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19f55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19f560: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19f560u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f564: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19f564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19f568: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x19f568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
    // 0x19f56c: 0xac930004  sw          $s3, 0x4($a0)
    ctx->pc = 0x19f56cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 19));
    // 0x19f570: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x19f570u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x19f574: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x19f574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x19f578: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x19f578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x19f57c: 0x312200ff  andi        $v0, $t1, 0xFF
    ctx->pc = 0x19f57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x19f580: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x19f580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x19f584: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x19f584u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x19f588: 0x94c20068  lhu         $v0, 0x68($a2)
    ctx->pc = 0x19f588u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 104)));
    // 0x19f58c: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x19f58cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19f590: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x19F590u;
    {
        const bool branch_taken_0x19f590 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F590u;
        // 0x19f594: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f590) {
            ctx->pc = 0x19F638u;
            goto label_19f638;
        }
    }
    ctx->pc = 0x19F598u;
    // 0x19f598: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x19f598u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f59c: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x19f59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_19f5a0:
    // 0x19f5a0: 0x8e62007c  lw          $v0, 0x7C($s3)
    ctx->pc = 0x19f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x19f5a4: 0x8e630078  lw          $v1, 0x78($s3)
    ctx->pc = 0x19f5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x19f5a8: 0x5e8021  addu        $s0, $v0, $fp
    ctx->pc = 0x19f5a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x19f5ac: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x19f5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19f5b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19f5b4: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x19f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x19f5b8: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x19f5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x19f5bc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x19F5BCu;
    {
        const bool branch_taken_0x19f5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f5bc) {
            ctx->pc = 0x19F618u;
            goto label_19f618;
        }
    }
    ctx->pc = 0x19F5C4u;
    // 0x19f5c4: 0x960200dc  lhu         $v0, 0xDC($s0)
    ctx->pc = 0x19f5c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x19f5c8: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x19F5C8u;
    {
        const bool branch_taken_0x19f5c8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x19F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5C8u;
        // 0x19f5cc: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5c8) {
            ctx->pc = 0x19F618u;
            goto label_19f618;
        }
    }
    ctx->pc = 0x19F5D0u;
    // 0x19f5d0: 0xc05e664  jal         func_179990
    ctx->pc = 0x19F5D0u;
    SET_GPR_U32(ctx, 31, 0x19F5D8u);
    ctx->pc = 0x19F5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F5D0u;
    // 0x19f5d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179990u, 0x19F5D0u, 0x19F5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F5D8u;
label_19f5d8:
    // 0x19f5d8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x19f5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x19f5dc: 0x26850060  addiu       $a1, $s4, 0x60
    ctx->pc = 0x19f5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x19f5e0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x19f5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x19f5e4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x19f5e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f5e8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x19f5e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f5ec: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x19f5ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f5f0: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x19f5f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f5f4: 0xc067dac  jal         func_19F6B0
    ctx->pc = 0x19F5F4u;
    SET_GPR_U32(ctx, 31, 0x19F5FCu);
    ctx->pc = 0x19F5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F5F4u;
    // 0x19f5f8: 0x2e0502d  daddu       $t2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F6B0u, 0x19F5F4u, 0x19F5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F5FCu;
label_19f5fc:
    // 0x19f5fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x19f5fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f600: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x19f600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x19f604: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x19f604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x19f608: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x19f608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x19f60c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19f60cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19f610: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x19f610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x19f614: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x19f614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
label_19f618:
    // 0x19f618: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x19f618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19f61c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19f61cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19f620: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x19f620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x19f624: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x19f624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x19f628: 0x96620068  lhu         $v0, 0x68($s3)
    ctx->pc = 0x19f628u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x19f62c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x19f62cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19f630: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x19F630u;
    {
        const bool branch_taken_0x19f630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F630u;
        // 0x19f634: 0x27de01f0  addiu       $fp, $fp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f630) {
            ctx->pc = 0x19F5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f5a0;
        }
    }
    ctx->pc = 0x19F638u;
label_19f638:
    // 0x19f638: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x19f638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f63c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x19f63cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f640: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x19f640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f644: 0xc05ef3c  jal         func_17BCF0
    ctx->pc = 0x19F644u;
    SET_GPR_U32(ctx, 31, 0x19F64Cu);
    ctx->pc = 0x19F648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F644u;
    // 0x19f648: 0x27848650  addiu       $a0, $gp, -0x79B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BCF0u, 0x19F644u, 0x19F64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F64Cu;
label_19f64c:
    // 0x19f64c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F64Cu;
    {
        const bool branch_taken_0x19f64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f64c) {
            ctx->pc = 0x19F660u;
            goto label_19f660;
        }
    }
    ctx->pc = 0x19F654u;
    // 0x19f654: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x19f654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x19f658: 0xc067da8  jal         func_19F6A0
    ctx->pc = 0x19F658u;
    SET_GPR_U32(ctx, 31, 0x19F660u);
    ctx->pc = 0x19F65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F658u;
    // 0x19f65c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F6A0u, 0x19F658u, 0x19F660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F660u;
label_19f660:
    // 0x19f660: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x19f660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f664: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x19f664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19f668: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x19f668u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19f66c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x19f66cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19f670: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x19f670u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19f674: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19f674u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19f678: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19f678u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f67c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19f67cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f680: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19f680u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f684: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19f684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f688: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19f688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f68c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F68Cu;
        // 0x19f690: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F694u;
}
