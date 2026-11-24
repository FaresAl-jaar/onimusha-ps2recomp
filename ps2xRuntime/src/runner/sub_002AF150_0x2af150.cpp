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

// Function: sub_002AF150
// Address: 0x2af150 - 0x2af298
void sub_002AF150_0x2af150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF150_0x2af150");
#endif

    switch (ctx->pc) {
        case 0x2af180u: goto label_2af180;
        case 0x2af198u: goto label_2af198;
        case 0x2af26cu: goto label_2af26c;
        default: break;
    }

    ctx->pc = 0x2af150u;

    // 0x2af150: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2af150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2af154: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2af154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2af158: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2af158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2af15c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2af15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2af160: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2af160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2af164: 0x90830063  lbu         $v1, 0x63($a0)
    ctx->pc = 0x2af164u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 99)));
    // 0x2af168: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2af168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2af16c: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x2AF16Cu;
    {
        const bool branch_taken_0x2af16c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF16Cu;
        // 0x2af170: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af16c) {
            ctx->pc = 0x2AF280u;
            goto label_2af280;
        }
    }
    ctx->pc = 0x2AF174u;
    // 0x2af174: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2af174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af178: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2af178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af17c: 0x0  nop
    ctx->pc = 0x2af17cu;
    // NOP
label_2af180:
    // 0x2af180: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2af180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2af184: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x2AF184u;
    {
        const bool branch_taken_0x2af184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF184u;
        // 0x2af188: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af184) {
            ctx->pc = 0x2AF270u;
            goto label_2af270;
        }
    }
    ctx->pc = 0x2AF18Cu;
    // 0x2af18c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x2af18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2af190: 0xc05e360  jal         func_178D80
    ctx->pc = 0x2AF190u;
    SET_GPR_U32(ctx, 31, 0x2AF198u);
    ctx->pc = 0x2AF194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF190u;
    // 0x2af194: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x2AF190u, 0x2AF198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF198u;
label_2af198:
    // 0x2af198: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2af198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2af19c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2af19cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2af1a0: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x2af1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x2af1a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2af1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af1a8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2af1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2af1ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2af1acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2af1b0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2af1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2af1b4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2af1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2af1b8: 0x92030008  lbu         $v1, 0x8($s0)
    ctx->pc = 0x2af1b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2af1bc: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x2af1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x2af1c0: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x2af1c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x2af1c4: 0xa0430009  sb          $v1, 0x9($v0)
    ctx->pc = 0x2af1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x2af1c8: 0x9203000a  lbu         $v1, 0xA($s0)
    ctx->pc = 0x2af1c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x2af1cc: 0xa043000a  sb          $v1, 0xA($v0)
    ctx->pc = 0x2af1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x2af1d0: 0x9203000b  lbu         $v1, 0xB($s0)
    ctx->pc = 0x2af1d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x2af1d4: 0xa043000b  sb          $v1, 0xB($v0)
    ctx->pc = 0x2af1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x2af1d8: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x2af1d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2af1dc: 0xa043000c  sb          $v1, 0xC($v0)
    ctx->pc = 0x2af1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x2af1e0: 0x9203000d  lbu         $v1, 0xD($s0)
    ctx->pc = 0x2af1e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x2af1e4: 0xa043000d  sb          $v1, 0xD($v0)
    ctx->pc = 0x2af1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x2af1e8: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x2af1e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2af1ec: 0xa043000e  sb          $v1, 0xE($v0)
    ctx->pc = 0x2af1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x2af1f0: 0x9203000f  lbu         $v1, 0xF($s0)
    ctx->pc = 0x2af1f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x2af1f4: 0xa043000f  sb          $v1, 0xF($v0)
    ctx->pc = 0x2af1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x2af1f8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2af1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2af1fc: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x2af1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x2af200: 0x96030014  lhu         $v1, 0x14($s0)
    ctx->pc = 0x2af200u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2af204: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x2af204u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x2af208: 0x96030016  lhu         $v1, 0x16($s0)
    ctx->pc = 0x2af208u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x2af20c: 0xa4430016  sh          $v1, 0x16($v0)
    ctx->pc = 0x2af20cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x2af210: 0x96030018  lhu         $v1, 0x18($s0)
    ctx->pc = 0x2af210u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2af214: 0xa4430018  sh          $v1, 0x18($v0)
    ctx->pc = 0x2af214u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x2af218: 0x9603001a  lhu         $v1, 0x1A($s0)
    ctx->pc = 0x2af218u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x2af21c: 0xa443001a  sh          $v1, 0x1A($v0)
    ctx->pc = 0x2af21cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x2af220: 0x9603001c  lhu         $v1, 0x1C($s0)
    ctx->pc = 0x2af220u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2af224: 0xa443001c  sh          $v1, 0x1C($v0)
    ctx->pc = 0x2af224u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x2af228: 0x9603001e  lhu         $v1, 0x1E($s0)
    ctx->pc = 0x2af228u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x2af22c: 0xa443001e  sh          $v1, 0x1E($v0)
    ctx->pc = 0x2af22cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x2af230: 0x96030020  lhu         $v1, 0x20($s0)
    ctx->pc = 0x2af230u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2af234: 0xa4430020  sh          $v1, 0x20($v0)
    ctx->pc = 0x2af234u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x2af238: 0x96030022  lhu         $v1, 0x22($s0)
    ctx->pc = 0x2af238u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x2af23c: 0xa4430022  sh          $v1, 0x22($v0)
    ctx->pc = 0x2af23cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2af240: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2af240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2af244: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x2af244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x2af248: 0x96030028  lhu         $v1, 0x28($s0)
    ctx->pc = 0x2af248u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2af24c: 0xa4430028  sh          $v1, 0x28($v0)
    ctx->pc = 0x2af24cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x2af250: 0x9603002a  lhu         $v1, 0x2A($s0)
    ctx->pc = 0x2af250u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x2af254: 0xa443002a  sh          $v1, 0x2A($v0)
    ctx->pc = 0x2af254u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x2af258: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x2af258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2af25c: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x2af25cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x2af260: 0x92430062  lbu         $v1, 0x62($s2)
    ctx->pc = 0x2af260u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 98)));
    // 0x2af264: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x2AF264u;
    SET_GPR_U32(ctx, 31, 0x2AF26Cu);
    ctx->pc = 0x2AF268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF264u;
    // 0x2af268: 0xa043000b  sb          $v1, 0xB($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x2AF264u, 0x2AF26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF26Cu;
label_2af26c:
    // 0x2af26c: 0x0  nop
    ctx->pc = 0x2af26cu;
    // NOP
label_2af270:
    // 0x2af270: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2af270u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2af274: 0x2e230002  sltiu       $v1, $s1, 0x2
    ctx->pc = 0x2af274u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2af278: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x2AF278u;
    {
        const bool branch_taken_0x2af278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF278u;
        // 0x2af27c: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af278) {
            ctx->pc = 0x2AF180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af180;
        }
    }
    ctx->pc = 0x2AF280u;
label_2af280:
    // 0x2af280: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2af280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2af284: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2af284u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2af288: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2af288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af28c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2af28cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af290: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF290u;
        // 0x2af294: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF298u;
}
