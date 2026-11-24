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

// Function: sub_00151410
// Address: 0x151410 - 0x151568
void sub_00151410_0x151410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151410_0x151410");
#endif

    switch (ctx->pc) {
        case 0x151428u: goto label_151428;
        case 0x151450u: goto label_151450;
        case 0x151548u: goto label_151548;
        default: break;
    }

    ctx->pc = 0x151410u;

    // 0x151410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x151410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x151414: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x151414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x151418: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x151418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15141c: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x15141cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x151420: 0x460004d  bltz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x151420u;
    {
        const bool branch_taken_0x151420 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x151424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151420u;
        // 0x151424: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151420) {
            ctx->pc = 0x151558u;
            goto label_151558;
        }
    }
    ctx->pc = 0x151428u;
label_151428:
    // 0x151428: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x151428u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x15142c: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x15142cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x151430: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x151430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x151434: 0x92070003  lbu         $a3, 0x3($s0)
    ctx->pc = 0x151434u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x151438: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x151438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
    // 0x15143c: 0x920b0005  lbu         $t3, 0x5($s0)
    ctx->pc = 0x15143cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x151440: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x151440u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151444: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x151444u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151448: 0xc0510e0  jal         func_144380
    ctx->pc = 0x151448u;
    SET_GPR_U32(ctx, 31, 0x151450u);
    ctx->pc = 0x15144Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151448u;
    // 0x15144c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x151448u, 0x151450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151450u;
label_151450:
    // 0x151450: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x151450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151454: 0x1080003c  beqz        $a0, . + 4 + (0x3C << 2)
    ctx->pc = 0x151454u;
    {
        const bool branch_taken_0x151454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x151454) {
            ctx->pc = 0x151548u;
            goto label_151548;
        }
    }
    ctx->pc = 0x15145Cu;
    // 0x15145c: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x15145cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x151460: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x151460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x151464: 0xa0830032  sb          $v1, 0x32($a0)
    ctx->pc = 0x151464u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 3));
    // 0x151468: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x151468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15146c: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x15146cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x151470: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x151470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151474: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x151474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x151478: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x151478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15147c: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x15147cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x151480: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x151480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x151484: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x151484u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x151488: 0xa48200c2  sh          $v0, 0xC2($a0)
    ctx->pc = 0x151488u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x15148c: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x15148cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x151490: 0x2462fffb  addiu       $v0, $v1, -0x5
    ctx->pc = 0x151490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x151494: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x151494u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x151498: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x151498u;
    {
        const bool branch_taken_0x151498 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151498u;
        // 0x15149c: 0x2462ffdc  addiu       $v0, $v1, -0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151498) {
            ctx->pc = 0x1514B8u;
            goto label_1514b8;
        }
    }
    ctx->pc = 0x1514A0u;
    // 0x1514a0: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1514a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1514a4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1514A4u;
    {
        const bool branch_taken_0x1514a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1514a4) {
            ctx->pc = 0x1514B8u;
            goto label_1514b8;
        }
    }
    ctx->pc = 0x1514ACu;
    // 0x1514ac: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x1514acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1514b0: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1514B0u;
    {
        const bool branch_taken_0x1514b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1514b0) {
            ctx->pc = 0x151540u;
            goto label_151540;
        }
    }
    ctx->pc = 0x1514B8u;
label_1514b8:
    // 0x1514b8: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x1514b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1514bc: 0xa4822acc  sh          $v0, 0x2ACC($a0)
    ctx->pc = 0x1514bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10956), (uint16_t)GPR_U32(ctx, 2));
    // 0x1514c0: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1514c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1514c4: 0xa4822ace  sh          $v0, 0x2ACE($a0)
    ctx->pc = 0x1514c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10958), (uint16_t)GPR_U32(ctx, 2));
    // 0x1514c8: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x1514c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1514cc: 0xa4822ad0  sh          $v0, 0x2AD0($a0)
    ctx->pc = 0x1514ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10960), (uint16_t)GPR_U32(ctx, 2));
    // 0x1514d0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x1514d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1514d4: 0xa4822ad2  sh          $v0, 0x2AD2($a0)
    ctx->pc = 0x1514d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10962), (uint16_t)GPR_U32(ctx, 2));
    // 0x1514d8: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x1514d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1514dc: 0xa4822ad4  sh          $v0, 0x2AD4($a0)
    ctx->pc = 0x1514dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10964), (uint16_t)GPR_U32(ctx, 2));
    // 0x1514e0: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x1514e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1514e4: 0xa4822ad6  sh          $v0, 0x2AD6($a0)
    ctx->pc = 0x1514e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10966), (uint16_t)GPR_U32(ctx, 2));
    // 0x1514e8: 0x94822ac4  lhu         $v0, 0x2AC4($a0)
    ctx->pc = 0x1514e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10948)));
    // 0x1514ec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1514ECu;
    {
        const bool branch_taken_0x1514ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1514ec) {
            ctx->pc = 0x151510u;
            goto label_151510;
        }
    }
    ctx->pc = 0x1514F4u;
    // 0x1514f4: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x1514f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1514f8: 0xa4822ac4  sh          $v0, 0x2AC4($a0)
    ctx->pc = 0x1514f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10948), (uint16_t)GPR_U32(ctx, 2));
    // 0x1514fc: 0x94822ac4  lhu         $v0, 0x2AC4($a0)
    ctx->pc = 0x1514fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10948)));
    // 0x151500: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151500u;
    {
        const bool branch_taken_0x151500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151500u;
        // 0x151504: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151500) {
            ctx->pc = 0x151510u;
            goto label_151510;
        }
    }
    ctx->pc = 0x151508u;
    // 0x151508: 0xa4822ac4  sh          $v0, 0x2AC4($a0)
    ctx->pc = 0x151508u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10948), (uint16_t)GPR_U32(ctx, 2));
    // 0x15150c: 0x0  nop
    ctx->pc = 0x15150cu;
    // NOP
label_151510:
    // 0x151510: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x151510u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x151514: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x151514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x151518: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x151518u;
    {
        const bool branch_taken_0x151518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151518u;
        // 0x15151c: 0x24020056  addiu       $v0, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151518) {
            ctx->pc = 0x151530u;
            goto label_151530;
        }
    }
    ctx->pc = 0x151520u;
    // 0x151520: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151520u;
    {
        const bool branch_taken_0x151520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x151520) {
            ctx->pc = 0x151530u;
            goto label_151530;
        }
    }
    ctx->pc = 0x151528u;
    // 0x151528: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x151528u;
    {
        const bool branch_taken_0x151528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151528) {
            ctx->pc = 0x151540u;
            goto label_151540;
        }
    }
    ctx->pc = 0x151530u;
label_151530:
    // 0x151530: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x151530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151534: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x151534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x151538: 0xa02268a2  sb          $v0, 0x68A2($at)
    ctx->pc = 0x151538u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E68A2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E68A2u, _value); } while (0);
    // 0x15153c: 0x0  nop
    ctx->pc = 0x15153cu;
    // NOP
label_151540:
    // 0x151540: 0xc0a6c8c  jal         func_29B230
    ctx->pc = 0x151540u;
    SET_GPR_U32(ctx, 31, 0x151548u);
    ctx->pc = 0x29B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B230u, 0x151540u, 0x151548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151548u;
label_151548:
    // 0x151548: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x151548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x15154c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x15154cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151550: 0x461ffb5  bgez        $v1, . + 4 + (-0x4B << 2)
    ctx->pc = 0x151550u;
    {
        const bool branch_taken_0x151550 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x151550) {
            ctx->pc = 0x151428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151428;
        }
    }
    ctx->pc = 0x151558u;
label_151558:
    // 0x151558: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x151558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15155c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15155cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151560: 0x3e00008  jr          $ra
    ctx->pc = 0x151560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151560u;
        // 0x151564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151568u;
}
