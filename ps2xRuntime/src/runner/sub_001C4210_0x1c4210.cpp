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

// Function: sub_001C4210
// Address: 0x1c4210 - 0x1c48d0
void sub_001C4210_0x1c4210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4210_0x1c4210");
#endif

    switch (ctx->pc) {
        case 0x1c4250u: goto label_1c4250;
        case 0x1c4278u: goto label_1c4278;
        case 0x1c42b0u: goto label_1c42b0;
        case 0x1c433cu: goto label_1c433c;
        case 0x1c4358u: goto label_1c4358;
        case 0x1c4370u: goto label_1c4370;
        case 0x1c4398u: goto label_1c4398;
        case 0x1c43b4u: goto label_1c43b4;
        case 0x1c43c8u: goto label_1c43c8;
        case 0x1c43ecu: goto label_1c43ec;
        case 0x1c440cu: goto label_1c440c;
        case 0x1c4430u: goto label_1c4430;
        case 0x1c4444u: goto label_1c4444;
        case 0x1c4488u: goto label_1c4488;
        case 0x1c44ccu: goto label_1c44cc;
        case 0x1c4548u: goto label_1c4548;
        case 0x1c456cu: goto label_1c456c;
        case 0x1c4708u: goto label_1c4708;
        case 0x1c4728u: goto label_1c4728;
        case 0x1c47a8u: goto label_1c47a8;
        case 0x1c4860u: goto label_1c4860;
        case 0x1c4880u: goto label_1c4880;
        default: break;
    }

    ctx->pc = 0x1c4210u;

    // 0x1c4210: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1c4210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1c4214: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1c4214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1c4218: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1c4218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1c421c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1c421cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1c4220: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1c4220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1c4224: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1c4224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1c4228: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1c4228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1c422c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1c422cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4230: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c4230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c4234: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c4234u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4238: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c4238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c423c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c423cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c4240: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c4240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c4244: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C4244u;
    {
        const bool branch_taken_0x1c4244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4244u;
        // 0x1c4248: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4244) {
            ctx->pc = 0x1C4280u;
            goto label_1c4280;
        }
    }
    ctx->pc = 0x1C424Cu;
    // 0x1c424c: 0x0  nop
    ctx->pc = 0x1c424cu;
    // NOP
label_1c4250:
    // 0x1c4250: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1c4250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1c4254: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x1c4254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1c4258: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x1c4258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1c425c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1c425cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1c4260: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c4260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c4264: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c4264u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c4268: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4268u;
    {
        const bool branch_taken_0x1c4268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4268u;
        // 0x1c426c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4268) {
            ctx->pc = 0x1C4278u;
            goto label_1c4278;
        }
    }
    ctx->pc = 0x1C4270u;
    // 0x1c4270: 0xc070ffc  jal         func_1C3FF0
    ctx->pc = 0x1C4270u;
    SET_GPR_U32(ctx, 31, 0x1C4278u);
    ctx->pc = 0x1C4274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4270u;
    // 0x1c4274: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3FF0u, 0x1C4270u, 0x1C4278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4278u;
label_1c4278:
    // 0x1c4278: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c4278u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1c427c: 0x0  nop
    ctx->pc = 0x1c427cu;
    // NOP
label_1c4280:
    // 0x1c4280: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1c4280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c4284: 0x9463006a  lhu         $v1, 0x6A($v1)
    ctx->pc = 0x1c4284u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 106)));
    // 0x1c4288: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x1c4288u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c428c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C428Cu;
    {
        const bool branch_taken_0x1c428c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C428Cu;
        // 0x1c4290: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c428c) {
            ctx->pc = 0x1C4250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4250;
        }
    }
    ctx->pc = 0x1C4294u;
    // 0x1c4294: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x1c4294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x1c4298: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x1c4298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
    // 0x1c429c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c429cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c42a0: 0x1460013f  bnez        $v1, . + 4 + (0x13F << 2)
    ctx->pc = 0x1C42A0u;
    {
        const bool branch_taken_0x1c42a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C42A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C42A0u;
        // 0x1c42a4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c42a0) {
            ctx->pc = 0x1C47A0u;
            goto label_1c47a0;
        }
    }
    ctx->pc = 0x1C42A8u;
    // 0x1c42a8: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x1C42A8u;
    {
        const bool branch_taken_0x1c42a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c42a8) {
            ctx->pc = 0x1C4788u;
            goto label_1c4788;
        }
    }
    ctx->pc = 0x1C42B0u;
label_1c42b0:
    // 0x1c42b0: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1c42b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1c42b4: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x1c42b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1c42b8: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x1c42b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1c42bc: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1c42bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1c42c0: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x1c42c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c42c4: 0xa6400092  sh          $zero, 0x92($s2)
    ctx->pc = 0x1c42c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 146), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c42c8: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x1c42c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c42cc: 0x1060012c  beqz        $v1, . + 4 + (0x12C << 2)
    ctx->pc = 0x1C42CCu;
    {
        const bool branch_taken_0x1c42cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c42cc) {
            ctx->pc = 0x1C4780u;
            goto label_1c4780;
        }
    }
    ctx->pc = 0x1C42D4u;
    // 0x1c42d4: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x1c42d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x1c42d8: 0x14600129  bnez        $v1, . + 4 + (0x129 << 2)
    ctx->pc = 0x1C42D8u;
    {
        const bool branch_taken_0x1c42d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c42d8) {
            ctx->pc = 0x1C4780u;
            goto label_1c4780;
        }
    }
    ctx->pc = 0x1C42E0u;
    // 0x1c42e0: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1c42e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1c42e4: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x1c42e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1c42e8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1c42e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1c42ec: 0x3c060086  lui         $a2, 0x86
    ctx->pc = 0x1c42ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)134 << 16));
    // 0x1c42f0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1c42f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c42f4: 0x24c68160  addiu       $a2, $a2, -0x7EA0
    ctx->pc = 0x1c42f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934880));
    // 0x1c42f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c42f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c42fc: 0x244700c0  addiu       $a3, $v0, 0xC0
    ctx->pc = 0x1c42fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1c4300: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x1c4300u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1c4304: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1c4304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1c4308: 0x3c040086  lui         $a0, 0x86
    ctx->pc = 0x1c4308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)134 << 16));
    // 0x1c430c: 0x3c050086  lui         $a1, 0x86
    ctx->pc = 0x1c430cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)134 << 16));
    // 0x1c4310: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c4310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c4314: 0x24848190  addiu       $a0, $a0, -0x7E70
    ctx->pc = 0x1c4314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934928));
    // 0x1c4318: 0x24a58190  addiu       $a1, $a1, -0x7E70
    ctx->pc = 0x1c4318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934928));
    // 0x1c431c: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x1c431cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x1c4320: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x1c4320u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1c4324: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x1c4324u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x1c4328: 0x78e30020  lq          $v1, 0x20($a3)
    ctx->pc = 0x1c4328u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1c432c: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x1c432cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
    // 0x1c4330: 0x78e30030  lq          $v1, 0x30($a3)
    ctx->pc = 0x1c4330u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1c4334: 0xc041728  jal         func_105CA0
    ctx->pc = 0x1C4334u;
    SET_GPR_U32(ctx, 31, 0x1C433Cu);
    ctx->pc = 0x1C4338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4334u;
    // 0x1c4338: 0x7cc30030  sq          $v1, 0x30($a2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CA0u, 0x1C4334u, 0x1C433Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C433Cu;
label_1c433c:
    // 0x1c433c: 0x8e510078  lw          $s1, 0x78($s2)
    ctx->pc = 0x1c433cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x1c4340: 0x8e57000c  lw          $s7, 0xC($s2)
    ctx->pc = 0x1c4340u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1c4344: 0x8e560070  lw          $s6, 0x70($s2)
    ctx->pc = 0x1c4344u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1c4348: 0x8e500074  lw          $s0, 0x74($s2)
    ctx->pc = 0x1c4348u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x1c434c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C434Cu;
    {
        const bool branch_taken_0x1c434c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C434Cu;
        // 0x1c4350: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c434c) {
            ctx->pc = 0x1C4378u;
            goto label_1c4378;
        }
    }
    ctx->pc = 0x1C4354u;
    // 0x1c4354: 0x0  nop
    ctx->pc = 0x1c4354u;
    // NOP
label_1c4358:
    // 0x1c4358: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1c4358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1c435c: 0x3c050086  lui         $a1, 0x86
    ctx->pc = 0x1c435cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)134 << 16));
    // 0x1c4360: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x1c4360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1c4364: 0x2e23021  addu        $a2, $s7, $v0
    ctx->pc = 0x1c4364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1c4368: 0xc041442  jal         func_105108
    ctx->pc = 0x1C4368u;
    SET_GPR_U32(ctx, 31, 0x1C4370u);
    ctx->pc = 0x1C436Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4368u;
    // 0x1c436c: 0x24a58160  addiu       $a1, $a1, -0x7EA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C4368u, 0x1C4370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4370u;
label_1c4370:
    // 0x1c4370: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c4370u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1c4374: 0x0  nop
    ctx->pc = 0x1c4374u;
    // NOP
label_1c4378:
    // 0x1c4378: 0x271102b  sltu        $v0, $s3, $s1
    ctx->pc = 0x1c4378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1c437c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C437Cu;
    {
        const bool branch_taken_0x1c437c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c437c) {
            ctx->pc = 0x1C4358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4358;
        }
    }
    ctx->pc = 0x1C4384u;
    // 0x1c4384: 0x96420090  lhu         $v0, 0x90($s2)
    ctx->pc = 0x1c4384u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x1c4388: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c4388u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c438c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1c438cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1c4390: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1C4390u;
    {
        const bool branch_taken_0x1c4390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4390u;
        // 0x1c4394: 0xa6420090  sh          $v0, 0x90($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 144), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4390) {
            ctx->pc = 0x1C4500u;
            goto label_1c4500;
        }
    }
    ctx->pc = 0x1C4398u;
label_1c4398:
    // 0x1c4398: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x1c4398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1c439c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1c439cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1c43a0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1c43a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1c43a4: 0x2c32821  addu        $a1, $s6, $v1
    ctx->pc = 0x1c43a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1c43a8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1c43a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1c43ac: 0xc04e720  jal         func_139C80
    ctx->pc = 0x1C43ACu;
    SET_GPR_U32(ctx, 31, 0x1C43B4u);
    ctx->pc = 0x1C43B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43ACu;
    // 0x1c43b0: 0x24846710  addiu       $a0, $a0, 0x6710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C80u, 0x1C43ACu, 0x1C43B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43B4u;
label_1c43b4:
    // 0x1c43b4: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1c43b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1c43b8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1c43b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1c43bc: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x1c43bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x1c43c0: 0xc04e728  jal         func_139CA0
    ctx->pc = 0x1C43C0u;
    SET_GPR_U32(ctx, 31, 0x1C43C8u);
    ctx->pc = 0x1C43C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43C0u;
    // 0x1c43c4: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139CA0u, 0x1C43C0u, 0x1C43C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43C8u;
label_1c43c8:
    // 0x1c43c8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1c43c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1c43cc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1c43ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1c43d0: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x1c43d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x1c43d4: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1c43d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c43d8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c43d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43dc: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x1c43dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c43e0: 0x27a800ec  addiu       $t0, $sp, 0xEC
    ctx->pc = 0x1c43e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x1c43e4: 0xc04e954  jal         func_13A550
    ctx->pc = 0x1C43E4u;
    SET_GPR_U32(ctx, 31, 0x1C43ECu);
    ctx->pc = 0x1C43E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43E4u;
    // 0x1c43e8: 0xafa200ec  sw          $v0, 0xEC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A550u, 0x1C43E4u, 0x1C43ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43ECu;
label_1c43ec:
    // 0x1c43ec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1c43ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c43f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c43f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c43f4: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1C43F4u;
    {
        const bool branch_taken_0x1c43f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c43f4) {
            ctx->pc = 0x1C44E0u;
            goto label_1c44e0;
        }
    }
    ctx->pc = 0x1C43FCu;
    // 0x1c43fc: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1c43fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1c4400: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1c4400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c4404: 0xc04d7fc  jal         func_135FF0
    ctx->pc = 0x1C4404u;
    SET_GPR_U32(ctx, 31, 0x1C440Cu);
    ctx->pc = 0x1C4408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4404u;
    // 0x1c4408: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FF0u, 0x1C4404u, 0x1C440Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C440Cu;
label_1c440c:
    // 0x1c440c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1c440cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1c4410: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c4410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1c4414: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c4414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1c4418: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1c4418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c441c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c441cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4420: 0x0  nop
    ctx->pc = 0x1c4420u;
    // NOP
    // 0x1c4424: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x1c4424u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c4428: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C4428u;
    SET_GPR_U32(ctx, 31, 0x1C4430u);
    ctx->pc = 0x1C442Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4428u;
    // 0x1c442c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C4428u, 0x1C4430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4430u;
label_1c4430:
    // 0x1c4430: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1c4430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1c4434: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1c4434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c4438: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x1c4438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1c443c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C443Cu;
    SET_GPR_U32(ctx, 31, 0x1C4444u);
    ctx->pc = 0x1C4440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C443Cu;
    // 0x1c4440: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C443Cu, 0x1C4444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4444u;
label_1c4444:
    // 0x1c4444: 0x96460090  lhu         $a2, 0x90($s2)
    ctx->pc = 0x1c4444u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x1c4448: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1c4448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1c444c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c444cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1c4450: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1c4450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c4454: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c4454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c4458: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c4458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c445c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c445cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4460: 0x34c20001  ori         $v0, $a2, 0x1
    ctx->pc = 0x1c4460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x1c4464: 0xa6420090  sh          $v0, 0x90($s2)
    ctx->pc = 0x1c4464u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c4468: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1c4468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c446c: 0xe6400080  swc1        $f0, 0x80($s2)
    ctx->pc = 0x1c446cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 128), bits); }
    // 0x1c4470: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1c4470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4474: 0xe6400084  swc1        $f0, 0x84($s2)
    ctx->pc = 0x1c4474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 132), bits); }
    // 0x1c4478: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x1c4478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c447c: 0xe6400088  swc1        $f0, 0x88($s2)
    ctx->pc = 0x1c447cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 136), bits); }
    // 0x1c4480: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C4480u;
    SET_GPR_U32(ctx, 31, 0x1C4488u);
    ctx->pc = 0x1C4484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4480u;
    // 0x1c4484: 0xae43008c  sw          $v1, 0x8C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C4480u, 0x1C4488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4488u;
label_1c4488:
    // 0x1c4488: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1c4488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1c448c: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x1c448cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x1c4490: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1c4490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1c4494: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x1c4494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1c4498: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1c4498u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c449c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1c449cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c44a0: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1c44a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1c44a4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1c44a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1c44a8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1c44a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c44ac: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1c44acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c44b0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1c44b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1c44b4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1c44b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1c44b8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c44b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1c44bc: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1c44bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c44c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c44c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c44c4: 0xc068a58  jal         func_1A2960
    ctx->pc = 0x1C44C4u;
    SET_GPR_U32(ctx, 31, 0x1C44CCu);
    ctx->pc = 0x1C44C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44C4u;
    // 0x1c44c8: 0x46140382  mul.s       $f14, $f0, $f20 (Delay Slot)
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2960u, 0x1C44C4u, 0x1C44CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44CCu;
label_1c44cc:
    // 0x1c44cc: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1c44ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1c44d0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c44d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c44d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c44d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c44d8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1c44d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1c44dc: 0x0  nop
    ctx->pc = 0x1c44dcu;
    // NOP
label_1c44e0:
    // 0x1c44e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c44e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44e4: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1c44e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1c44e8: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x1c44e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1c44ec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1c44ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1c44f0: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x1c44f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1c44f4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1c44f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c44f8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c44f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1c44fc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1c44fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_1c4500:
    // 0x1c4500: 0x271102b  sltu        $v0, $s3, $s1
    ctx->pc = 0x1c4500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1c4504: 0x1440ffa4  bnez        $v0, . + 4 + (-0x5C << 2)
    ctx->pc = 0x1C4504u;
    {
        const bool branch_taken_0x1c4504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4504) {
            ctx->pc = 0x1C4398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4398;
        }
    }
    ctx->pc = 0x1C450Cu;
    // 0x1c450c: 0x96430090  lhu         $v1, 0x90($s2)
    ctx->pc = 0x1c450cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x1c4510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4514: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1c4514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1c4518: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4518u;
    {
        const bool branch_taken_0x1c4518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c4518) {
            ctx->pc = 0x1C4530u;
            goto label_1c4530;
        }
    }
    ctx->pc = 0x1C4520u;
    // 0x1c4520: 0xa6420092  sh          $v0, 0x92($s2)
    ctx->pc = 0x1c4520u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 146), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c4524: 0x8e42007c  lw          $v0, 0x7C($s2)
    ctx->pc = 0x1c4524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x1c4528: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c4528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c452c: 0xae42007c  sw          $v0, 0x7C($s2)
    ctx->pc = 0x1c452cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 2));
label_1c4530:
    // 0x1c4530: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1c4530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1c4534: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x1c4534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1c4538: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1c4538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1c453c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1c453cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c4540: 0xc0686e8  jal         func_1A1BA0
    ctx->pc = 0x1C4540u;
    SET_GPR_U32(ctx, 31, 0x1C4548u);
    ctx->pc = 0x1C4544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4540u;
    // 0x1c4544: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BA0u, 0x1C4540u, 0x1C4548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4548u;
label_1c4548:
    // 0x1c4548: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x1c4548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1c454c: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1c454cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1c4550: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x1c4550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1c4554: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x1c4554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x1c4558: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1c4558u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1c455c: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1c455cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x1c4560: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c4560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c4564: 0xc068820  jal         func_1A2080
    ctx->pc = 0x1C4564u;
    SET_GPR_U32(ctx, 31, 0x1C456Cu);
    ctx->pc = 0x1C4568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4564u;
    // 0x1c4568: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2080u, 0x1C4564u, 0x1C456Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C456Cu;
label_1c456c:
    // 0x1c456c: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1c456cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1c4570: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x1c4570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1c4574: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x1c4574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1c4578: 0x3c024223  lui         $v0, 0x4223
    ctx->pc = 0x1c4578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16931 << 16));
    // 0x1c457c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1c457cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c4580: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x1c4580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x1c4584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4588: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1c4588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c458c: 0xc4410090  lwc1        $f1, 0x90($v0)
    ctx->pc = 0x1c458cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4590: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x1c4590u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1c4594: 0x8ea50010  lw          $a1, 0x10($s5)
    ctx->pc = 0x1c4594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1c4598: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x1c4598u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1c459c: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1c459cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1c45a0: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1c45a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1c45a4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1c45a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1c45a8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1c45a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c45ac: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1c45acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c45b0: 0x3c02c223  lui         $v0, 0xC223
    ctx->pc = 0x1c45b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49699 << 16));
    // 0x1c45b4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1c45b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c45b8: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x1c45b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x1c45bc: 0xe4800090  swc1        $f0, 0x90($a0)
    ctx->pc = 0x1c45bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x1c45c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c45c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c45c4: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1c45c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1c45c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c45c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c45cc: 0xc4410090  lwc1        $f1, 0x90($v0)
    ctx->pc = 0x1c45ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c45d0: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1c45d0u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1c45d4: 0x8ea50010  lw          $a1, 0x10($s5)
    ctx->pc = 0x1c45d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1c45d8: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x1c45d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1c45dc: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1c45dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1c45e0: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1c45e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1c45e4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1c45e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1c45e8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1c45e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c45ec: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1c45ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c45f0: 0x3c024223  lui         $v0, 0x4223
    ctx->pc = 0x1c45f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16931 << 16));
    // 0x1c45f4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1c45f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c45f8: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x1c45f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x1c45fc: 0xe4800090  swc1        $f0, 0x90($a0)
    ctx->pc = 0x1c45fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x1c4600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4604: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1c4604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1c4608: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c4608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c460c: 0xc4410094  lwc1        $f1, 0x94($v0)
    ctx->pc = 0x1c460cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4610: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x1c4610u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1c4614: 0x8ea50010  lw          $a1, 0x10($s5)
    ctx->pc = 0x1c4614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1c4618: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x1c4618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1c461c: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1c461cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1c4620: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1c4620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1c4624: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1c4624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1c4628: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1c4628u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c462c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1c462cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c4630: 0x3c02c223  lui         $v0, 0xC223
    ctx->pc = 0x1c4630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49699 << 16));
    // 0x1c4634: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1c4634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c4638: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x1c4638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x1c463c: 0xe4800094  swc1        $f0, 0x94($a0)
    ctx->pc = 0x1c463cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x1c4640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4644: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1c4644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1c4648: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c4648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c464c: 0xc4410094  lwc1        $f1, 0x94($v0)
    ctx->pc = 0x1c464cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4650: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1c4650u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1c4654: 0x8ea50010  lw          $a1, 0x10($s5)
    ctx->pc = 0x1c4654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1c4658: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x1c4658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1c465c: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1c465cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1c4660: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1c4660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1c4664: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1c4664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1c4668: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1c4668u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c466c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1c466cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c4670: 0x3c024223  lui         $v0, 0x4223
    ctx->pc = 0x1c4670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16931 << 16));
    // 0x1c4674: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1c4674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c4678: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x1c4678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x1c467c: 0xe4800094  swc1        $f0, 0x94($a0)
    ctx->pc = 0x1c467cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x1c4680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4684: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1c4684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1c4688: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c4688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c468c: 0xc4410098  lwc1        $f1, 0x98($v0)
    ctx->pc = 0x1c468cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4690: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x1c4690u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1c4694: 0x8ea50010  lw          $a1, 0x10($s5)
    ctx->pc = 0x1c4694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1c4698: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x1c4698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1c469c: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1c469cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1c46a0: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1c46a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1c46a4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1c46a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1c46a8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1c46a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c46ac: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1c46acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c46b0: 0x3c02c223  lui         $v0, 0xC223
    ctx->pc = 0x1c46b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49699 << 16));
    // 0x1c46b4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1c46b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c46b8: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x1c46b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x1c46bc: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x1c46bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x1c46c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c46c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c46c4: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1c46c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1c46c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c46cc: 0xc4410098  lwc1        $f1, 0x98($v0)
    ctx->pc = 0x1c46ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c46d0: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1c46d0u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1c46d4: 0x8ea50010  lw          $a1, 0x10($s5)
    ctx->pc = 0x1c46d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1c46d8: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x1c46d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1c46dc: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1c46dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1c46e0: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1c46e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1c46e4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1c46e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1c46e8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1c46e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c46ec: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1c46ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c46f0: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1c46f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c46f4: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x1c46f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x1c46f8: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1c46f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1c46fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c46fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c4700: 0xc04d7f0  jal         func_135FC0
    ctx->pc = 0x1C4700u;
    SET_GPR_U32(ctx, 31, 0x1C4708u);
    ctx->pc = 0x1C4704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4700u;
    // 0x1c4704: 0x24440070  addiu       $a0, $v0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FC0u, 0x1C4700u, 0x1C4708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4708u;
label_1c4708:
    // 0x1c4708: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1c4708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1c470c: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x1c470cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1c4710: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1c4710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1c4714: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1c4714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c4718: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1c4718u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1c471c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c471cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c4720: 0xc04d7f0  jal         func_135FC0
    ctx->pc = 0x1C4720u;
    SET_GPR_U32(ctx, 31, 0x1C4728u);
    ctx->pc = 0x1C4724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4720u;
    // 0x1c4724: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FC0u, 0x1C4720u, 0x1C4728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4728u;
label_1c4728:
    // 0x1c4728: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1c4728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1c472c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1c472cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1c4730: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c4730u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4734: 0x0  nop
    ctx->pc = 0x1c4734u;
    // NOP
    // 0x1c4738: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1c4738u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c473c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1C473Cu;
    {
        const bool branch_taken_0x1c473c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C473Cu;
        // 0x1c4740: 0x3c033c23  lui         $v1, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c473c) {
            ctx->pc = 0x1C4780u;
            goto label_1c4780;
        }
    }
    ctx->pc = 0x1C4744u;
    // 0x1c4744: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x1c4744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x1c4748: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c4748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c474c: 0x0  nop
    ctx->pc = 0x1c474cu;
    // NOP
    // 0x1c4750: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c4750u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4754: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1C4754u;
    {
        const bool branch_taken_0x1c4754 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c4754) {
            ctx->pc = 0x1C4780u;
            goto label_1c4780;
        }
    }
    ctx->pc = 0x1C475Cu;
    // 0x1c475c: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x1c475cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1c4760: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c4760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c4764: 0xa2430002  sb          $v1, 0x2($s2)
    ctx->pc = 0x1c4764u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c4768: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c4768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c476c: 0x28610079  slti        $at, $v1, 0x79
    ctx->pc = 0x1c476cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x1c4770: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4770u;
    {
        const bool branch_taken_0x1c4770 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4770u;
        // 0x1c4774: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4770) {
            ctx->pc = 0x1C4780u;
            goto label_1c4780;
        }
    }
    ctx->pc = 0x1C4778u;
    // 0x1c4778: 0xa2430001  sb          $v1, 0x1($s2)
    ctx->pc = 0x1c4778u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c477c: 0x0  nop
    ctx->pc = 0x1c477cu;
    // NOP
label_1c4780:
    // 0x1c4780: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c4780u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1c4784: 0x0  nop
    ctx->pc = 0x1c4784u;
    // NOP
label_1c4788:
    // 0x1c4788: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1c4788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c478c: 0x9463006a  lhu         $v1, 0x6A($v1)
    ctx->pc = 0x1c478cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 106)));
    // 0x1c4790: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x1c4790u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c4794: 0x1460fec6  bnez        $v1, . + 4 + (-0x13A << 2)
    ctx->pc = 0x1C4794u;
    {
        const bool branch_taken_0x1c4794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4794) {
            ctx->pc = 0x1C42B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c42b0;
        }
    }
    ctx->pc = 0x1C479Cu;
    // 0x1c479c: 0x0  nop
    ctx->pc = 0x1c479cu;
    // NOP
label_1c47a0:
    // 0x1c47a0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1C47A0u;
    {
        const bool branch_taken_0x1c47a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C47A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C47A0u;
        // 0x1c47a4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c47a0) {
            ctx->pc = 0x1C4888u;
            goto label_1c4888;
        }
    }
    ctx->pc = 0x1C47A8u;
label_1c47a8:
    // 0x1c47a8: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1c47a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1c47ac: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x1c47acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1c47b0: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x1c47b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1c47b4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1c47b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1c47b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c47b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c47bc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1c47bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c47c0: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1C47C0u;
    {
        const bool branch_taken_0x1c47c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c47c0) {
            ctx->pc = 0x1C4880u;
            goto label_1c4880;
        }
    }
    ctx->pc = 0x1C47C8u;
    // 0x1c47c8: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x1c47c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x1c47cc: 0x8ea90000  lw          $t1, 0x0($s5)
    ctx->pc = 0x1c47ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c47d0: 0x541823  subu        $v1, $v0, $s4
    ctx->pc = 0x1c47d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1c47d4: 0x8ea70010  lw          $a3, 0x10($s5)
    ctx->pc = 0x1c47d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1c47d8: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1c47d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1c47dc: 0x35140  sll         $t2, $v1, 5
    ctx->pc = 0x1c47dcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1c47e0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1c47e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1c47e4: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x1c47e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c47e8: 0x24100  sll         $t0, $v0, 4
    ctx->pc = 0x1c47e8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c47ec: 0x3c0582d  daddu       $t3, $fp, $zero
    ctx->pc = 0x1c47ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c47f0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1c47f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1c47f4: 0x142180  sll         $a0, $s4, 6
    ctx->pc = 0x1c47f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x1c47f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c47f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c47fc: 0x8d290080  lw          $t1, 0x80($t1)
    ctx->pc = 0x1c47fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 128)));
    // 0x1c4800: 0x142980  sll         $a1, $s4, 6
    ctx->pc = 0x1c4800u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x1c4804: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x1c4804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x1c4808: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x1c4808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1c480c: 0x244700c0  addiu       $a3, $v0, 0xC0
    ctx->pc = 0x1c480cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1c4810: 0x8cc20094  lw          $v0, 0x94($a2)
    ctx->pc = 0x1c4810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x1c4814: 0x78eb0000  lq          $t3, 0x0($a3)
    ctx->pc = 0x1c4814u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1c4818: 0x12a8021  addu        $s0, $t1, $t2
    ctx->pc = 0x1c4818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1c481c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c481cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c4820: 0x7c4b0000  sq          $t3, 0x0($v0)
    ctx->pc = 0x1c4820u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 11));
    // 0x1c4824: 0x78eb0010  lq          $t3, 0x10($a3)
    ctx->pc = 0x1c4824u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1c4828: 0x7c4b0010  sq          $t3, 0x10($v0)
    ctx->pc = 0x1c4828u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 11));
    // 0x1c482c: 0x78eb0020  lq          $t3, 0x20($a3)
    ctx->pc = 0x1c482cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1c4830: 0x7c4b0020  sq          $t3, 0x20($v0)
    ctx->pc = 0x1c4830u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 11));
    // 0x1c4834: 0x78eb0030  lq          $t3, 0x30($a3)
    ctx->pc = 0x1c4834u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1c4838: 0x7c4b0030  sq          $t3, 0x30($v0)
    ctx->pc = 0x1c4838u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 11));
    // 0x1c483c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1c483cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c4840: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1c4840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c4844: 0x8c840094  lw          $a0, 0x94($a0)
    ctx->pc = 0x1c4844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1c4848: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x1c4848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x1c484c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1c484cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c4850: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c4850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c4854: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x1c4854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1c4858: 0xc041728  jal         func_105CA0
    ctx->pc = 0x1C4858u;
    SET_GPR_U32(ctx, 31, 0x1C4860u);
    ctx->pc = 0x1C485Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4858u;
    // 0x1c485c: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CA0u, 0x1C4858u, 0x1C4860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4860u;
label_1c4860:
    // 0x1c4860: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1c4860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c4864: 0x142980  sll         $a1, $s4, 6
    ctx->pc = 0x1c4864u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x1c4868: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x1c4868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1c486c: 0x8c430128  lw          $v1, 0x128($v0)
    ctx->pc = 0x1c486cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x1c4870: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x1c4870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x1c4874: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1c4874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1c4878: 0xc04144e  jal         func_105138
    ctx->pc = 0x1C4878u;
    SET_GPR_U32(ctx, 31, 0x1C4880u);
    ctx->pc = 0x1C487Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4878u;
    // 0x1c487c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x1C4878u, 0x1C4880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4880u;
label_1c4880:
    // 0x1c4880: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c4880u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1c4884: 0x0  nop
    ctx->pc = 0x1c4884u;
    // NOP
label_1c4888:
    // 0x1c4888: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1c4888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c488c: 0x9463006a  lhu         $v1, 0x6A($v1)
    ctx->pc = 0x1c488cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 106)));
    // 0x1c4890: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x1c4890u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c4894: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
    ctx->pc = 0x1C4894u;
    {
        const bool branch_taken_0x1c4894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4894) {
            ctx->pc = 0x1C47A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c47a8;
        }
    }
    ctx->pc = 0x1C489Cu;
    // 0x1c489c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1c489cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c48a0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c48a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c48a4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1c48a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c48a8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1c48a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c48ac: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1c48acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c48b0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1c48b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c48b4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1c48b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c48b8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c48b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c48bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c48bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c48c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c48c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c48c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c48c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c48c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C48C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C48CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C48C8u;
        // 0x1c48cc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C48C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C48D0u;
}
