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

// Function: sub_0032F850
// Address: 0x32f850 - 0x32fac4
void sub_0032F850_0x32f850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F850_0x32f850");
#endif

    switch (ctx->pc) {
        case 0x32f918u: goto label_32f918;
        case 0x32f920u: goto label_32f920;
        case 0x32f944u: goto label_32f944;
        case 0x32f988u: goto label_32f988;
        case 0x32f990u: goto label_32f990;
        case 0x32f9d4u: goto label_32f9d4;
        case 0x32f9e0u: goto label_32f9e0;
        case 0x32fa00u: goto label_32fa00;
        case 0x32fa08u: goto label_32fa08;
        case 0x32fa28u: goto label_32fa28;
        case 0x32fa38u: goto label_32fa38;
        case 0x32fa58u: goto label_32fa58;
        case 0x32fa60u: goto label_32fa60;
        case 0x32fa6cu: goto label_32fa6c;
        case 0x32fa7cu: goto label_32fa7c;
        case 0x32fa94u: goto label_32fa94;
        case 0x32fa9cu: goto label_32fa9c;
        case 0x32faa4u: goto label_32faa4;
        default: break;
    }

    ctx->pc = 0x32f850u;

    // 0x32f850: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32f850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x32f854: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x32f854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x32f858: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32f858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x32f85c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32f85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32f860: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x32f860u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f864: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32f864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32f868: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x32f868u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f86c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32f86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32f870: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x32f870u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x32f874: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32f874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32f878: 0x24c69e40  addiu       $a2, $a2, -0x61C0
    ctx->pc = 0x32f878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942272));
    // 0x32f87c: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x32f87cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x32f880: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x32f880u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x32f884: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x32f884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x32f888: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x32f888u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x32f88c: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x32f88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x32f890: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x32f890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x32f894: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x32f894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x32f898: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x32f898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x32f89c: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x32f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x32f8a0: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x32f8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x32f8a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32f8a8: 0x24a59e44  addiu       $a1, $a1, -0x61BC
    ctx->pc = 0x32f8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942276));
    // 0x32f8ac: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x32f8acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x32f8b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x32f8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32f8b4: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x32f8b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32f8b8: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x32f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x32f8bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x32f8bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f8c0: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x32f8c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f8c4: 0x8ce70004  lw          $a3, 0x4($a3)
    ctx->pc = 0x32f8c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x32f8c8: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x32f8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x32f8cc: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x32f8ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32f8d0: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x32f8d0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x32f8d4: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x32f8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x32f8d8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x32f8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x32f8dc: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x32f8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32f8e0: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x32f8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x32f8e4: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x32f8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32f8e8: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x32f8e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32f8ec: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x32f8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x32f8f0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x32f8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x32f8f4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x32f8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32f8f8: 0xa0850010  sb          $a1, 0x10($a0)
    ctx->pc = 0x32f8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x32f8fc: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x32f8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x32f900: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x32f900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x32f904: 0xa080001c  sb          $zero, 0x1C($a0)
    ctx->pc = 0x32f904u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x32f908: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x32f908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x32f90c: 0xa0801ca8  sb          $zero, 0x1CA8($a0)
    ctx->pc = 0x32f90cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7336), (uint8_t)GPR_U32(ctx, 0));
    // 0x32f910: 0xa0821c48  sb          $v0, 0x1C48($a0)
    ctx->pc = 0x32f910u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7240), (uint8_t)GPR_U32(ctx, 2));
    // 0x32f914: 0xa0801c49  sb          $zero, 0x1C49($a0)
    ctx->pc = 0x32f914u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7241), (uint8_t)GPR_U32(ctx, 0));
label_32f918:
    // 0x32f918: 0xc0cde18  jal         func_337860
    ctx->pc = 0x32F918u;
    SET_GPR_U32(ctx, 31, 0x32F920u);
    ctx->pc = 0x32F91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F918u;
    // 0x32f91c: 0x26241c4a  addiu       $a0, $s1, 0x1C4A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 7242));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337860u, 0x32F918u, 0x32F920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F920u;
label_32f920:
    // 0x32f920: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x32f920u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x32f924: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x32f924u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x32f928: 0x2e420005  sltiu       $v0, $s2, 0x5
    ctx->pc = 0x32f928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x32f92c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32F92Cu;
    {
        const bool branch_taken_0x32f92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32f92c) {
            ctx->pc = 0x32F918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32f918;
        }
    }
    ctx->pc = 0x32F934u;
    // 0x32f934: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32f934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32f938: 0x26841c7c  addiu       $a0, $s4, 0x1C7C
    ctx->pc = 0x32f938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 7292));
    // 0x32f93c: 0xc0cde18  jal         func_337860
    ctx->pc = 0x32F93Cu;
    SET_GPR_U32(ctx, 31, 0x32F944u);
    ctx->pc = 0x32F940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F93Cu;
    // 0x32f940: 0xa6821c7a  sh          $v0, 0x1C7A($s4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 20), 7290), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337860u, 0x32F93Cu, 0x32F944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F944u;
label_32f944:
    // 0x32f944: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x32f944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x32f948: 0x3c030092  lui         $v1, 0x92
    ctx->pc = 0x32f948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
    // 0x32f94c: 0x8024172e  lb          $a0, 0x172E($at)
    ctx->pc = 0x32f94cu;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x92172Eu));
    // 0x32f950: 0x246315bd  addiu       $v1, $v1, 0x15BD
    ctx->pc = 0x32f950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5565));
    // 0x32f954: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x32f954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x32f958: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32f958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32f95c: 0x2c41000a  sltiu       $at, $v0, 0xA
    ctx->pc = 0x32f95cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x32f960: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x32F960u;
    {
        const bool branch_taken_0x32f960 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F960u;
        // 0x32f964: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f960) {
            ctx->pc = 0x32FA60u;
            goto label_32fa60;
        }
    }
    ctx->pc = 0x32F968u;
    // 0x32f968: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x32f968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x32f96c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32f970: 0x2463cd90  addiu       $v1, $v1, -0x3270
    ctx->pc = 0x32f970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954384));
    // 0x32f974: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32f974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32f978: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32f97c: 0x400008  jr          $v0
    ctx->pc = 0x32F97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x32F988u: goto label_32f988;
            case 0x32F990u: goto label_32f990;
            case 0x32F9E0u: goto label_32f9e0;
            case 0x32FA08u: goto label_32fa08;
            case 0x32FA38u: goto label_32fa38;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F97Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x32F984u;
    // 0x32f984: 0x0  nop
    ctx->pc = 0x32f984u;
    // NOP
label_32f988:
    // 0x32f988: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x32F988u;
    {
        const bool branch_taken_0x32f988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F988u;
        // 0x32f98c: 0xa2841c49  sb          $a0, 0x1C49($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 7241), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f988) {
            ctx->pc = 0x32FA60u;
            goto label_32fa60;
        }
    }
    ctx->pc = 0x32F990u;
label_32f990:
    // 0x32f990: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x32f990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x32f994: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x32f994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x32f998: 0x3c030092  lui         $v1, 0x92
    ctx->pc = 0x32f998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
    // 0x32f99c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x32f99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32f9a0: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x32f9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x32f9a4: 0x80221733  lb          $v0, 0x1733($at)
    ctx->pc = 0x32f9a4u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x921733u));
    // 0x32f9a8: 0x24631400  addiu       $v1, $v1, 0x1400
    ctx->pc = 0x32f9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5120));
    // 0x32f9ac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x32f9acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32f9b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32f9b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32f9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32f9b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32f9bc: 0x8c4201d0  lw          $v0, 0x1D0($v0)
    ctx->pc = 0x32f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 464)));
    // 0x32f9c0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x32F9C0u;
    {
        const bool branch_taken_0x32f9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f9c0) {
            ctx->pc = 0x32FA60u;
            goto label_32fa60;
        }
    }
    ctx->pc = 0x32F9C8u;
    // 0x32f9c8: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x32f9c8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x32f9cc: 0xc0cbeb4  jal         func_32FAD0
    ctx->pc = 0x32F9CCu;
    SET_GPR_U32(ctx, 31, 0x32F9D4u);
    ctx->pc = 0x32F9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F9CCu;
    // 0x32f9d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FAD0u, 0x32F9CCu, 0x32F9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F9D4u;
label_32f9d4:
    // 0x32f9d4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x32F9D4u;
    {
        const bool branch_taken_0x32f9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F9D4u;
        // 0x32f9d8: 0xa2821c49  sb          $v0, 0x1C49($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 7241), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f9d4) {
            ctx->pc = 0x32FA60u;
            goto label_32fa60;
        }
    }
    ctx->pc = 0x32F9DCu;
    // 0x32f9dc: 0x0  nop
    ctx->pc = 0x32f9dcu;
    // NOP
label_32f9e0:
    // 0x32f9e0: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x32f9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x32f9e4: 0x94261412  lhu         $a2, 0x1412($at)
    ctx->pc = 0x32f9e4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x921412u));
    // 0x32f9e8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x32f9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x32f9ec: 0x10c2001c  beq         $a2, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x32F9ECu;
    {
        const bool branch_taken_0x32f9ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x32F9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F9ECu;
        // 0x32f9f0: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f9ec) {
            ctx->pc = 0x32FA60u;
            goto label_32fa60;
        }
    }
    ctx->pc = 0x32F9F4u;
    // 0x32f9f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32f9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f9f8: 0xc0bce30  jal         func_2F38C0
    ctx->pc = 0x32F9F8u;
    SET_GPR_U32(ctx, 31, 0x32FA00u);
    ctx->pc = 0x32F9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F9F8u;
    // 0x32f9fc: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F38C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F38C0u, 0x32F9F8u, 0x32FA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FA00u;
label_32fa00:
    // 0x32fa00: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x32FA00u;
    {
        const bool branch_taken_0x32fa00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FA00u;
        // 0x32fa04: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fa00) {
            ctx->pc = 0x32FA60u;
            goto label_32fa60;
        }
    }
    ctx->pc = 0x32FA08u;
label_32fa08:
    // 0x32fa08: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x32fa08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x32fa0c: 0x9023141c  lbu         $v1, 0x141C($at)
    ctx->pc = 0x32fa0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x92141Cu));
    // 0x32fa10: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x32fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32fa14: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x32FA14u;
    {
        const bool branch_taken_0x32fa14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FA14u;
        // 0x32fa18: 0x3c010092  lui         $at, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fa14) {
            ctx->pc = 0x32FA60u;
            goto label_32fa60;
        }
    }
    ctx->pc = 0x32FA1Cu;
    // 0x32fa1c: 0x94251402  lhu         $a1, 0x1402($at)
    ctx->pc = 0x32fa1cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 5122)));
    // 0x32fa20: 0xc0cbeb4  jal         func_32FAD0
    ctx->pc = 0x32FA20u;
    SET_GPR_U32(ctx, 31, 0x32FA28u);
    ctx->pc = 0x32FA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FA20u;
    // 0x32fa24: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FAD0u, 0x32FA20u, 0x32FA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FA28u;
label_32fa28:
    // 0x32fa28: 0xa2821c49  sb          $v0, 0x1C49($s4)
    ctx->pc = 0x32fa28u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7241), (uint8_t)GPR_U32(ctx, 2));
    // 0x32fa2c: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x32fa2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x32fa30: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x32FA30u;
    {
        const bool branch_taken_0x32fa30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FA30u;
        // 0x32fa34: 0x94331400  lhu         $s3, 0x1400($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 5120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fa30) {
            ctx->pc = 0x32FA60u;
            goto label_32fa60;
        }
    }
    ctx->pc = 0x32FA38u;
label_32fa38:
    // 0x32fa38: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x32fa38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x32fa3c: 0x9023141c  lbu         $v1, 0x141C($at)
    ctx->pc = 0x32fa3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x92141Cu));
    // 0x32fa40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32fa40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32fa44: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32FA44u;
    {
        const bool branch_taken_0x32fa44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32FA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FA44u;
        // 0x32fa48: 0x3c010092  lui         $at, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fa44) {
            ctx->pc = 0x32FA60u;
            goto label_32fa60;
        }
    }
    ctx->pc = 0x32FA4Cu;
    // 0x32fa4c: 0x94251408  lhu         $a1, 0x1408($at)
    ctx->pc = 0x32fa4cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 5128)));
    // 0x32fa50: 0xc0cbeb4  jal         func_32FAD0
    ctx->pc = 0x32FA50u;
    SET_GPR_U32(ctx, 31, 0x32FA58u);
    ctx->pc = 0x32FA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FA50u;
    // 0x32fa54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FAD0u, 0x32FA50u, 0x32FA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FA58u;
label_32fa58:
    // 0x32fa58: 0xa2821c49  sb          $v0, 0x1C49($s4)
    ctx->pc = 0x32fa58u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7241), (uint8_t)GPR_U32(ctx, 2));
    // 0x32fa5c: 0x0  nop
    ctx->pc = 0x32fa5cu;
    // NOP
label_32fa60:
    // 0x32fa60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x32fa60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fa64: 0xc0cbf1c  jal         func_32FC70
    ctx->pc = 0x32FA64u;
    SET_GPR_U32(ctx, 31, 0x32FA6Cu);
    ctx->pc = 0x32FA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FA64u;
    // 0x32fa68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FC70u, 0x32FA64u, 0x32FA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FA6Cu;
label_32fa6c:
    // 0x32fa6c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x32fa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x32fa70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32fa70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fa74: 0xc0ceb84  jal         func_33AE10
    ctx->pc = 0x32FA74u;
    SET_GPR_U32(ctx, 31, 0x32FA7Cu);
    ctx->pc = 0x32FA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FA74u;
    // 0x32fa78: 0x248440c0  addiu       $a0, $a0, 0x40C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AE10u, 0x32FA74u, 0x32FA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FA7Cu;
label_32fa7c:
    // 0x32fa7c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x32fa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x32fa80: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x32fa80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x32fa84: 0x248440c0  addiu       $a0, $a0, 0x40C0
    ctx->pc = 0x32fa84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16576));
    // 0x32fa88: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x32fa88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32fa8c: 0xc0cebec  jal         func_33AFB0
    ctx->pc = 0x32FA8Cu;
    SET_GPR_U32(ctx, 31, 0x32FA94u);
    ctx->pc = 0x32FA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FA8Cu;
    // 0x32fa90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AFB0u, 0x32FA8Cu, 0x32FA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FA94u;
label_32fa94:
    // 0x32fa94: 0xc0b78b4  jal         func_2DE2D0
    ctx->pc = 0x32FA94u;
    SET_GPR_U32(ctx, 31, 0x32FA9Cu);
    ctx->pc = 0x32FA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FA94u;
    // 0x32fa98: 0x26841c88  addiu       $a0, $s4, 0x1C88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 7304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2D0u, 0x32FA94u, 0x32FA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FA9Cu;
label_32fa9c:
    // 0x32fa9c: 0xc0b78b4  jal         func_2DE2D0
    ctx->pc = 0x32FA9Cu;
    SET_GPR_U32(ctx, 31, 0x32FAA4u);
    ctx->pc = 0x32FAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FA9Cu;
    // 0x32faa0: 0x26841c98  addiu       $a0, $s4, 0x1C98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 7320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2D0u, 0x32FA9Cu, 0x32FAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FAA4u;
label_32faa4:
    // 0x32faa4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x32faa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32faa8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32faa8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32faac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32faacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32fab0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32fab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32fab4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32fab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32fab8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32fab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fabc: 0x3e00008  jr          $ra
    ctx->pc = 0x32FABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FABCu;
        // 0x32fac0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FAC4u;
}
