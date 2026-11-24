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

// Function: sub_002EF860
// Address: 0x2ef860 - 0x2efbc0
void sub_002EF860_0x2ef860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF860_0x2ef860");
#endif

    switch (ctx->pc) {
        case 0x2ef874u: goto label_2ef874;
        case 0x2ef880u: goto label_2ef880;
        case 0x2ef8a8u: goto label_2ef8a8;
        case 0x2ef8d0u: goto label_2ef8d0;
        case 0x2ef9e0u: goto label_2ef9e0;
        case 0x2efa08u: goto label_2efa08;
        case 0x2efa2cu: goto label_2efa2c;
        case 0x2efa70u: goto label_2efa70;
        default: break;
    }

    ctx->pc = 0x2ef860u;

    // 0x2ef860: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ef860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ef864: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ef864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ef868: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ef868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ef86c: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x2EF86Cu;
    SET_GPR_U32(ctx, 31, 0x2EF874u);
    ctx->pc = 0x2EF870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF86Cu;
    // 0x2ef870: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x2EF86Cu, 0x2EF874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF874u;
label_2ef874:
    // 0x2ef874: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2ef874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ef878: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EF878u;
    {
        const bool branch_taken_0x2ef878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF878u;
        // 0x2ef87c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef878) {
            ctx->pc = 0x2EF89Cu;
            goto label_2ef89c;
        }
    }
    ctx->pc = 0x2EF880u;
label_2ef880:
    // 0x2ef880: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2ef880u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef884: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ef884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ef888: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ef888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ef88c: 0x0  nop
    ctx->pc = 0x2ef88cu;
    // NOP
    // 0x2ef890: 0x0  nop
    ctx->pc = 0x2ef890u;
    // NOP
    // 0x2ef894: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EF894u;
    {
        const bool branch_taken_0x2ef894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef894) {
            ctx->pc = 0x2EF880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef880;
        }
    }
    ctx->pc = 0x2EF89Cu;
label_2ef89c:
    // 0x2ef89c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2ef89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ef8a0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EF8A0u;
    {
        const bool branch_taken_0x2ef8a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8A0u;
        // 0x2ef8a4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef8a0) {
            ctx->pc = 0x2EF8C4u;
            goto label_2ef8c4;
        }
    }
    ctx->pc = 0x2EF8A8u;
label_2ef8a8:
    // 0x2ef8a8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2ef8a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef8ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ef8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ef8b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ef8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ef8b4: 0x0  nop
    ctx->pc = 0x2ef8b4u;
    // NOP
    // 0x2ef8b8: 0x0  nop
    ctx->pc = 0x2ef8b8u;
    // NOP
    // 0x2ef8bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EF8BCu;
    {
        const bool branch_taken_0x2ef8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef8bc) {
            ctx->pc = 0x2EF8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef8a8;
        }
    }
    ctx->pc = 0x2EF8C4u;
label_2ef8c4:
    // 0x2ef8c4: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x2ef8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x2ef8c8: 0xc053b28  jal         func_14ECA0
    ctx->pc = 0x2EF8C8u;
    SET_GPR_U32(ctx, 31, 0x2EF8D0u);
    ctx->pc = 0x2EF8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF8C8u;
    // 0x2ef8cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ECA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ECA0u, 0x2EF8C8u, 0x2EF8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF8D0u;
label_2ef8d0:
    // 0x2ef8d0: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x2ef8d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2ef8d4: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x2ef8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x2ef8d8: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2ef8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2ef8dc: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x2ef8dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
    // 0x2ef8e0: 0x24c6f38c  addiu       $a2, $a2, -0xC74
    ctx->pc = 0x2ef8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964108));
    // 0x2ef8e4: 0x2463f390  addiu       $v1, $v1, -0xC70
    ctx->pc = 0x2ef8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964112));
    // 0x2ef8e8: 0x24e7f394  addiu       $a3, $a3, -0xC6C
    ctx->pc = 0x2ef8e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964116));
    // 0x2ef8ec: 0x27a20034  addiu       $v0, $sp, 0x34
    ctx->pc = 0x2ef8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x2ef8f0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x2ef8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x2ef8f4: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2ef8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2ef8f8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2ef8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ef8fc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2ef8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2ef900: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2ef900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2ef904: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2ef904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef908: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2ef908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2ef90c: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x2ef90cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2ef910: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2ef910u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2ef914: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2ef914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ef918: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x2ef918u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2ef91c: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x2ef91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ef920: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x2ef920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2ef924: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2ef924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef928: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2ef928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef92c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2ef92cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ef930: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2ef930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2ef934: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x2ef934u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2ef938: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x2ef938u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
    // 0x2ef93c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2ef93cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2ef940: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2ef940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ef944: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2ef944u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2ef948: 0x2483fc7e  addiu       $v1, $a0, -0x382
    ctx->pc = 0x2ef948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966398));
    // 0x2ef94c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2ef94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2ef950: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2ef950u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ef954: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2ef954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef958: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2ef958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2ef95c: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x2ef95cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2ef960: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x2ef960u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2ef964: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2ef964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2ef968: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2ef968u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2ef96c: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x2ef96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2ef970: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2ef970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef974: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EF974u;
    {
        const bool branch_taken_0x2ef974 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF974u;
        // 0x2ef978: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef974) {
            ctx->pc = 0x2EF990u;
            goto label_2ef990;
        }
    }
    ctx->pc = 0x2EF97Cu;
    // 0x2ef97c: 0x24030392  addiu       $v1, $zero, 0x392
    ctx->pc = 0x2ef97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 914));
    // 0x2ef980: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF980u;
    {
        const bool branch_taken_0x2ef980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EF984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF980u;
        // 0x2ef984: 0x24030393  addiu       $v1, $zero, 0x393 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 915));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef980) {
            ctx->pc = 0x2EF990u;
            goto label_2ef990;
        }
    }
    ctx->pc = 0x2EF988u;
    // 0x2ef988: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2EF988u;
    {
        const bool branch_taken_0x2ef988 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ef988) {
            ctx->pc = 0x2EF9C0u;
            goto label_2ef9c0;
        }
    }
    ctx->pc = 0x2EF990u;
label_2ef990:
    // 0x2ef990: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x2ef990u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2ef994: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2ef994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2ef998: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2ef998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2ef99c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef99cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef9a0: 0x2484f394  addiu       $a0, $a0, -0xC6C
    ctx->pc = 0x2ef9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964116));
    // 0x2ef9a4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2ef9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2ef9a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ef9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ef9ac: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2ef9acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2ef9b0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2ef9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ef9b4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2ef9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef9b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2ef9b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ef9bc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2ef9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2ef9c0:
    // 0x2ef9c0: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2ef9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2ef9c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EF9C4u;
    {
        const bool branch_taken_0x2ef9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF9C4u;
        // 0x2ef9c8: 0x27848560  addiu       $a0, $gp, -0x7AA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef9c4) {
            ctx->pc = 0x2EF9E0u;
            goto label_2ef9e0;
        }
    }
    ctx->pc = 0x2EF9CCu;
    // 0x2ef9cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ef9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef9d0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2ef9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ef9d4: 0x26070740  addiu       $a3, $s0, 0x740
    ctx->pc = 0x2ef9d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1856));
    // 0x2ef9d8: 0xc053ae8  jal         func_14EBA0
    ctx->pc = 0x2EF9D8u;
    SET_GPR_U32(ctx, 31, 0x2EF9E0u);
    ctx->pc = 0x2EF9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF9D8u;
    // 0x2ef9dc: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x2EF9D8u, 0x2EF9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF9E0u;
label_2ef9e0:
    // 0x2ef9e0: 0x8e0600e0  lw          $a2, 0xE0($s0)
    ctx->pc = 0x2ef9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x2ef9e4: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2ef9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2ef9e8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ef9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ef9ec: 0x26041900  addiu       $a0, $s0, 0x1900
    ctx->pc = 0x2ef9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6400));
    // 0x2ef9f0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2ef9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x2ef9f4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x2ef9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2ef9f8: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x2ef9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x2ef9fc: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x2ef9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    // 0x2efa00: 0xc04e710  jal         func_139C40
    ctx->pc = 0x2EFA00u;
    SET_GPR_U32(ctx, 31, 0x2EFA08u);
    ctx->pc = 0x2EFA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFA00u;
    // 0x2efa04: 0xae0206c0  sw          $v0, 0x6C0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C40u, 0x2EFA00u, 0x2EFA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFA08u;
label_2efa08:
    // 0x2efa08: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2efa08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2efa0c: 0x2403007b  addiu       $v1, $zero, 0x7B
    ctx->pc = 0x2efa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x2efa10: 0xae0406c4  sw          $a0, 0x6C4($s0)
    ctx->pc = 0x2efa10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1732), GPR_U32(ctx, 4));
    // 0x2efa14: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x2efa14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2efa18: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EFA18u;
    {
        const bool branch_taken_0x2efa18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EFA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA18u;
        // 0x2efa1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efa18) {
            ctx->pc = 0x2EFA30u;
            goto label_2efa30;
        }
    }
    ctx->pc = 0x2EFA20u;
    // 0x2efa20: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2efa20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2efa24: 0xc0bbc74  jal         func_2EF1D0
    ctx->pc = 0x2EFA24u;
    SET_GPR_U32(ctx, 31, 0x2EFA2Cu);
    ctx->pc = 0x2EFA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFA24u;
    // 0x2efa28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF1D0u, 0x2EFA24u, 0x2EFA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFA2Cu;
label_2efa2c:
    // 0x2efa2c: 0x0  nop
    ctx->pc = 0x2efa2cu;
    // NOP
label_2efa30:
    // 0x2efa30: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x2efa30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x2efa34: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x2efa34u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x2efa38: 0x24030382  addiu       $v1, $zero, 0x382
    ctx->pc = 0x2efa38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 898));
    // 0x2efa3c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2EFA3Cu;
    {
        const bool branch_taken_0x2efa3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EFA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA3Cu;
        // 0x2efa40: 0x24030383  addiu       $v1, $zero, 0x383 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 899));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efa3c) {
            ctx->pc = 0x2EFA70u;
            goto label_2efa70;
        }
    }
    ctx->pc = 0x2EFA44u;
    // 0x2efa44: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2EFA44u;
    {
        const bool branch_taken_0x2efa44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2efa44) {
            ctx->pc = 0x2EFA70u;
            goto label_2efa70;
        }
    }
    ctx->pc = 0x2EFA4Cu;
    // 0x2efa4c: 0x24030392  addiu       $v1, $zero, 0x392
    ctx->pc = 0x2efa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 914));
    // 0x2efa50: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EFA50u;
    {
        const bool branch_taken_0x2efa50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EFA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA50u;
        // 0x2efa54: 0x24030393  addiu       $v1, $zero, 0x393 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 915));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efa50) {
            ctx->pc = 0x2EFA70u;
            goto label_2efa70;
        }
    }
    ctx->pc = 0x2EFA58u;
    // 0x2efa58: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EFA58u;
    {
        const bool branch_taken_0x2efa58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2efa58) {
            ctx->pc = 0x2EFA70u;
            goto label_2efa70;
        }
    }
    ctx->pc = 0x2EFA60u;
    // 0x2efa60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2efa60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efa64: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x2efa64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2efa68: 0xc0bbce8  jal         func_2EF3A0
    ctx->pc = 0x2EFA68u;
    SET_GPR_U32(ctx, 31, 0x2EFA70u);
    ctx->pc = 0x2EFA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFA68u;
    // 0x2efa6c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF3A0u, 0x2EFA68u, 0x2EFA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFA70u;
label_2efa70:
    // 0x2efa70: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x2efa70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x2efa74: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x2efa74u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x2efa78: 0x24030842  addiu       $v1, $zero, 0x842
    ctx->pc = 0x2efa78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2114));
    // 0x2efa7c: 0x1083004a  beq         $a0, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x2EFA7Cu;
    {
        const bool branch_taken_0x2efa7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EFA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA7Cu;
        // 0x2efa80: 0x24030840  addiu       $v1, $zero, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efa7c) {
            ctx->pc = 0x2EFBA8u;
            goto label_2efba8;
        }
    }
    ctx->pc = 0x2EFA84u;
    // 0x2efa84: 0x10830044  beq         $a0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x2EFA84u;
    {
        const bool branch_taken_0x2efa84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2efa84) {
            ctx->pc = 0x2EFB98u;
            goto label_2efb98;
        }
    }
    ctx->pc = 0x2EFA8Cu;
    // 0x2efa8c: 0x24030786  addiu       $v1, $zero, 0x786
    ctx->pc = 0x2efa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1926));
    // 0x2efa90: 0x1083003d  beq         $a0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x2EFA90u;
    {
        const bool branch_taken_0x2efa90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EFA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA90u;
        // 0x2efa94: 0x240303d6  addiu       $v1, $zero, 0x3D6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 982));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efa90) {
            ctx->pc = 0x2EFB88u;
            goto label_2efb88;
        }
    }
    ctx->pc = 0x2EFA98u;
    // 0x2efa98: 0x10830037  beq         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2EFA98u;
    {
        const bool branch_taken_0x2efa98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2efa98) {
            ctx->pc = 0x2EFB78u;
            goto label_2efb78;
        }
    }
    ctx->pc = 0x2EFAA0u;
    // 0x2efaa0: 0x24030393  addiu       $v1, $zero, 0x393
    ctx->pc = 0x2efaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 915));
    // 0x2efaa4: 0x10830030  beq         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2EFAA4u;
    {
        const bool branch_taken_0x2efaa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EFAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFAA4u;
        // 0x2efaa8: 0x24030383  addiu       $v1, $zero, 0x383 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 899));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efaa4) {
            ctx->pc = 0x2EFB68u;
            goto label_2efb68;
        }
    }
    ctx->pc = 0x2EFAACu;
    // 0x2efaac: 0x1083002a  beq         $a0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2EFAACu;
    {
        const bool branch_taken_0x2efaac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2efaac) {
            ctx->pc = 0x2EFB58u;
            goto label_2efb58;
        }
    }
    ctx->pc = 0x2EFAB4u;
    // 0x2efab4: 0x24030392  addiu       $v1, $zero, 0x392
    ctx->pc = 0x2efab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 914));
    // 0x2efab8: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2EFAB8u;
    {
        const bool branch_taken_0x2efab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EFABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFAB8u;
        // 0x2efabc: 0x24030382  addiu       $v1, $zero, 0x382 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 898));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efab8) {
            ctx->pc = 0x2EFB48u;
            goto label_2efb48;
        }
    }
    ctx->pc = 0x2EFAC0u;
    // 0x2efac0: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2EFAC0u;
    {
        const bool branch_taken_0x2efac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2efac0) {
            ctx->pc = 0x2EFB38u;
            goto label_2efb38;
        }
    }
    ctx->pc = 0x2EFAC8u;
    // 0x2efac8: 0x24030284  addiu       $v1, $zero, 0x284
    ctx->pc = 0x2efac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 644));
    // 0x2efacc: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2EFACCu;
    {
        const bool branch_taken_0x2efacc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EFAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFACCu;
        // 0x2efad0: 0x24030272  addiu       $v1, $zero, 0x272 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 626));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efacc) {
            ctx->pc = 0x2EFB28u;
            goto label_2efb28;
        }
    }
    ctx->pc = 0x2EFAD4u;
    // 0x2efad4: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EFAD4u;
    {
        const bool branch_taken_0x2efad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2efad4) {
            ctx->pc = 0x2EFB18u;
            goto label_2efb18;
        }
    }
    ctx->pc = 0x2EFADCu;
    // 0x2efadc: 0x24030243  addiu       $v1, $zero, 0x243
    ctx->pc = 0x2efadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 579));
    // 0x2efae0: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EFAE0u;
    {
        const bool branch_taken_0x2efae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EFAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFAE0u;
        // 0x2efae4: 0x24030242  addiu       $v1, $zero, 0x242 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 578));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efae0) {
            ctx->pc = 0x2EFB08u;
            goto label_2efb08;
        }
    }
    ctx->pc = 0x2EFAE8u;
    // 0x2efae8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EFAE8u;
    {
        const bool branch_taken_0x2efae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2efae8) {
            ctx->pc = 0x2EFAF8u;
            goto label_2efaf8;
        }
    }
    ctx->pc = 0x2EFAF0u;
    // 0x2efaf0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2EFAF0u;
    {
        const bool branch_taken_0x2efaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efaf0) {
            ctx->pc = 0x2EFBB0u;
            goto label_2efbb0;
        }
    }
    ctx->pc = 0x2EFAF8u;
label_2efaf8:
    // 0x2efaf8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2efaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2efafc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2EFAFCu;
    {
        const bool branch_taken_0x2efafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFAFCu;
        // 0x2efb00: 0xa2032b27  sb          $v1, 0x2B27($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11047), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efafc) {
            ctx->pc = 0x2EFBB0u;
            goto label_2efbb0;
        }
    }
    ctx->pc = 0x2EFB04u;
    // 0x2efb04: 0x0  nop
    ctx->pc = 0x2efb04u;
    // NOP
label_2efb08:
    // 0x2efb08: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2efb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2efb0c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2EFB0Cu;
    {
        const bool branch_taken_0x2efb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB0Cu;
        // 0x2efb10: 0xa2032b27  sb          $v1, 0x2B27($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11047), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb0c) {
            ctx->pc = 0x2EFBB0u;
            goto label_2efbb0;
        }
    }
    ctx->pc = 0x2EFB14u;
    // 0x2efb14: 0x0  nop
    ctx->pc = 0x2efb14u;
    // NOP
label_2efb18:
    // 0x2efb18: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2efb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2efb1c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2EFB1Cu;
    {
        const bool branch_taken_0x2efb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB1Cu;
        // 0x2efb20: 0xa2032b27  sb          $v1, 0x2B27($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11047), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb1c) {
            ctx->pc = 0x2EFBB0u;
            goto label_2efbb0;
        }
    }
    ctx->pc = 0x2EFB24u;
    // 0x2efb24: 0x0  nop
    ctx->pc = 0x2efb24u;
    // NOP
label_2efb28:
    // 0x2efb28: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2efb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2efb2c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2EFB2Cu;
    {
        const bool branch_taken_0x2efb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB2Cu;
        // 0x2efb30: 0xa2032b27  sb          $v1, 0x2B27($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11047), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb2c) {
            ctx->pc = 0x2EFBB0u;
            goto label_2efbb0;
        }
    }
    ctx->pc = 0x2EFB34u;
    // 0x2efb34: 0x0  nop
    ctx->pc = 0x2efb34u;
    // NOP
label_2efb38:
    // 0x2efb38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2efb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2efb3c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2EFB3Cu;
    {
        const bool branch_taken_0x2efb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB3Cu;
        // 0x2efb40: 0xa2032b27  sb          $v1, 0x2B27($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11047), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb3c) {
            ctx->pc = 0x2EFBB0u;
            goto label_2efbb0;
        }
    }
    ctx->pc = 0x2EFB44u;
    // 0x2efb44: 0x0  nop
    ctx->pc = 0x2efb44u;
    // NOP
label_2efb48:
    // 0x2efb48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2efb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2efb4c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2EFB4Cu;
    {
        const bool branch_taken_0x2efb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB4Cu;
        // 0x2efb50: 0xa2032b27  sb          $v1, 0x2B27($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11047), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb4c) {
            ctx->pc = 0x2EFBB0u;
            goto label_2efbb0;
        }
    }
    ctx->pc = 0x2EFB54u;
    // 0x2efb54: 0x0  nop
    ctx->pc = 0x2efb54u;
    // NOP
label_2efb58:
    // 0x2efb58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2efb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2efb5c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2EFB5Cu;
    {
        const bool branch_taken_0x2efb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB5Cu;
        // 0x2efb60: 0xa2032b27  sb          $v1, 0x2B27($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11047), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb5c) {
            ctx->pc = 0x2EFBB0u;
            goto label_2efbb0;
        }
    }
    ctx->pc = 0x2EFB64u;
    // 0x2efb64: 0x0  nop
    ctx->pc = 0x2efb64u;
    // NOP
label_2efb68:
    // 0x2efb68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2efb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2efb6c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2EFB6Cu;
    {
        const bool branch_taken_0x2efb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB6Cu;
        // 0x2efb70: 0xa2032b27  sb          $v1, 0x2B27($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11047), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb6c) {
            ctx->pc = 0x2EFBB0u;
            goto label_2efbb0;
        }
    }
    ctx->pc = 0x2EFB74u;
    // 0x2efb74: 0x0  nop
    ctx->pc = 0x2efb74u;
    // NOP
label_2efb78:
    // 0x2efb78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2efb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2efb7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2EFB7Cu;
    {
        const bool branch_taken_0x2efb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB7Cu;
        // 0x2efb80: 0xa2032b27  sb          $v1, 0x2B27($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11047), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb7c) {
            ctx->pc = 0x2EFBB0u;
            goto label_2efbb0;
        }
    }
    ctx->pc = 0x2EFB84u;
    // 0x2efb84: 0x0  nop
    ctx->pc = 0x2efb84u;
    // NOP
label_2efb88:
    // 0x2efb88: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2efb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2efb8c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EFB8Cu;
    {
        const bool branch_taken_0x2efb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB8Cu;
        // 0x2efb90: 0xa2032b27  sb          $v1, 0x2B27($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11047), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb8c) {
            ctx->pc = 0x2EFBB0u;
            goto label_2efbb0;
        }
    }
    ctx->pc = 0x2EFB94u;
    // 0x2efb94: 0x0  nop
    ctx->pc = 0x2efb94u;
    // NOP
label_2efb98:
    // 0x2efb98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2efb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2efb9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFB9Cu;
    {
        const bool branch_taken_0x2efb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB9Cu;
        // 0x2efba0: 0xa2032b27  sb          $v1, 0x2B27($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11047), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb9c) {
            ctx->pc = 0x2EFBB0u;
            goto label_2efbb0;
        }
    }
    ctx->pc = 0x2EFBA4u;
    // 0x2efba4: 0x0  nop
    ctx->pc = 0x2efba4u;
    // NOP
label_2efba8:
    // 0x2efba8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2efba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2efbac: 0xa2032b27  sb          $v1, 0x2B27($s0)
    ctx->pc = 0x2efbacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11047), (uint8_t)GPR_U32(ctx, 3));
label_2efbb0:
    // 0x2efbb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2efbb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2efbb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2efbb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2efbb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFBB8u;
        // 0x2efbbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFBB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EFBC0u;
}
