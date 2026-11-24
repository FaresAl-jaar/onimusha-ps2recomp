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

// Function: sub_00324400
// Address: 0x324400 - 0x324564
void sub_00324400_0x324400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324400_0x324400");
#endif

    switch (ctx->pc) {
        case 0x324428u: goto label_324428;
        case 0x324478u: goto label_324478;
        case 0x324534u: goto label_324534;
        default: break;
    }

    ctx->pc = 0x324400u;

    // 0x324400: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x324400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x324404: 0x3401bf64  ori         $at, $zero, 0xBF64
    ctx->pc = 0x324404u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48996);
    // 0x324408: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x324408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x32440c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x32440cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x324410: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x324410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x324414: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x324414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x324418: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x324418u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32441c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32441cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x324420: 0x2612021  addu        $a0, $s3, $at
    ctx->pc = 0x324420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x324424: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x324424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_324428:
    // 0x324428: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x324428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x32442c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32442cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x324430: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x324430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x324434: 0x0  nop
    ctx->pc = 0x324434u;
    // NOP
    // 0x324438: 0x0  nop
    ctx->pc = 0x324438u;
    // NOP
    // 0x32443c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32443Cu;
    {
        const bool branch_taken_0x32443c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32443c) {
            ctx->pc = 0x324428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324428;
        }
    }
    ctx->pc = 0x324444u;
    // 0x324444: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x324444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x324448: 0x24110030  addiu       $s1, $zero, 0x30
    ctx->pc = 0x324448u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x32444c: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x32444cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x324450: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x324450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324454: 0xac20be60  sw          $zero, -0x41A0($at)
    ctx->pc = 0x324454u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294950496), GPR_U32(ctx, 0));
    // 0x324458: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x324458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x32445c: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x32445cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x324460: 0xdc24ae08  ld          $a0, -0x51F8($at)
    ctx->pc = 0x324460u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 1), 4294946312)));
    // 0x324464: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x324464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x324468: 0x802027  not         $a0, $a0
    ctx->pc = 0x324468u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x32446c: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x32446cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x324470: 0xdc23ae18  ld          $v1, -0x51E8($at)
    ctx->pc = 0x324470u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 4294946328)));
    // 0x324474: 0x649024  and         $s2, $v1, $a0
    ctx->pc = 0x324474u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_324478:
    // 0x324478: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x324478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x32447c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x32447Cu;
    {
        const bool branch_taken_0x32447c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32447c) {
            ctx->pc = 0x3244F8u;
            goto label_3244f8;
        }
    }
    ctx->pc = 0x324484u;
    // 0x324484: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x324484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x324488: 0x10a0002b  beqz        $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x324488u;
    {
        const bool branch_taken_0x324488 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x324488) {
            ctx->pc = 0x324538u;
            goto label_324538;
        }
    }
    ctx->pc = 0x324490u;
    // 0x324490: 0x90a3002f  lbu         $v1, 0x2F($a1)
    ctx->pc = 0x324490u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 47)));
    // 0x324494: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x324494u;
    {
        const bool branch_taken_0x324494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x324498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324494u;
        // 0x324498: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324494) {
            ctx->pc = 0x324538u;
            goto label_324538;
        }
    }
    ctx->pc = 0x32449Cu;
    // 0x32449c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x32449cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3244a0: 0xa0a3002f  sb          $v1, 0x2F($a1)
    ctx->pc = 0x3244a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 47), (uint8_t)GPR_U32(ctx, 3));
    // 0x3244a4: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x3244a4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x3244a8: 0x8c23be60  lw          $v1, -0x41A0($at)
    ctx->pc = 0x3244a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950496)));
    // 0x3244ac: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3244acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3244b0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x3244b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3244b4: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x3244b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x3244b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3244b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3244bc: 0xac24be60  sw          $a0, -0x41A0($at)
    ctx->pc = 0x3244bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294950496), GPR_U32(ctx, 4));
    // 0x3244c0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x3244c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x3244c4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3244c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3244c8: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x3244c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x3244cc: 0xac25be64  sw          $a1, -0x419C($at)
    ctx->pc = 0x3244ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294950500), GPR_U32(ctx, 5));
    // 0x3244d0: 0x90a3002d  lbu         $v1, 0x2D($a1)
    ctx->pc = 0x3244d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 45)));
    // 0x3244d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3244d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3244d8: 0xa0a3002d  sb          $v1, 0x2D($a1)
    ctx->pc = 0x3244d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 45), (uint8_t)GPR_U32(ctx, 3));
    // 0x3244dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3244dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3244e0: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3244E0u;
    {
        const bool branch_taken_0x3244e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3244e0) {
            ctx->pc = 0x324538u;
            goto label_324538;
        }
    }
    ctx->pc = 0x3244E8u;
    // 0x3244e8: 0x90a3002d  lbu         $v1, 0x2D($a1)
    ctx->pc = 0x3244e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 45)));
    // 0x3244ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3244ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3244f0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3244F0u;
    {
        const bool branch_taken_0x3244f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3244F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3244F0u;
        // 0x3244f4: 0xa0a3002d  sb          $v1, 0x2D($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 45), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3244f0) {
            ctx->pc = 0x324538u;
            goto label_324538;
        }
    }
    ctx->pc = 0x3244F8u;
label_3244f8:
    // 0x3244f8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3244f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3244fc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3244FCu;
    {
        const bool branch_taken_0x3244fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3244fc) {
            ctx->pc = 0x324538u;
            goto label_324538;
        }
    }
    ctx->pc = 0x324504u;
    // 0x324504: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x324504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x324508: 0x2132023  subu        $a0, $s0, $s3
    ctx->pc = 0x324508u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x32450c: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x32450cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x324510: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x324510u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x324514: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x324514u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x324518: 0x0  nop
    ctx->pc = 0x324518u;
    // NOP
    // 0x32451c: 0x0  nop
    ctx->pc = 0x32451cu;
    // NOP
    // 0x324520: 0x1010  mfhi        $v0
    ctx->pc = 0x324520u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x324524: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x324524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324528: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x324528u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x32452c: 0xc0c8f5c  jal         func_323D70
    ctx->pc = 0x32452Cu;
    SET_GPR_U32(ctx, 31, 0x324534u);
    ctx->pc = 0x324530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32452Cu;
    // 0x324530: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323D70u, 0x32452Cu, 0x324534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324534u;
label_324534:
    // 0x324534: 0x0  nop
    ctx->pc = 0x324534u;
    // NOP
label_324538:
    // 0x324538: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x324538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x32453c: 0x12907a  dsrl        $s2, $s2, 1
    ctx->pc = 0x32453cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> 1);
    // 0x324540: 0x1620ffcd  bnez        $s1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x324540u;
    {
        const bool branch_taken_0x324540 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x324544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324540u;
        // 0x324544: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324540) {
            ctx->pc = 0x324478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324478;
        }
    }
    ctx->pc = 0x324548u;
    // 0x324548: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x324548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32454c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32454cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x324550: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x324550u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324554: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x324554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324558: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x324558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32455c: 0x3e00008  jr          $ra
    ctx->pc = 0x32455Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32455Cu;
        // 0x324560: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32455Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324564u;
}
