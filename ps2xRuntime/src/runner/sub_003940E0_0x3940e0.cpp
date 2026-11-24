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

// Function: sub_003940E0
// Address: 0x3940e0 - 0x394244
void sub_003940E0_0x3940e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003940E0_0x3940e0");
#endif

    switch (ctx->pc) {
        case 0x394160u: goto label_394160;
        case 0x394230u: goto label_394230;
        default: break;
    }

    ctx->pc = 0x3940e0u;

    // 0x3940e0: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x3940e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x3940e4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3940e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3940e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3940e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3940ec: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3940ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3940f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3940f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3940f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3940f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3940f8: 0x0  nop
    ctx->pc = 0x3940f8u;
    // NOP
    // 0x3940fc: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x3940fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x394100: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x394100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x394104: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x394104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x394108: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x394108u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39410c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x39410Cu;
    {
        const bool branch_taken_0x39410c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x394110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39410Cu;
        // 0x394110: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39410c) {
            ctx->pc = 0x394124u;
            goto label_394124;
        }
    }
    ctx->pc = 0x394114u;
    // 0x394114: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x394114u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x394118: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x394118u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x39411c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39411Cu;
    {
        const bool branch_taken_0x39411c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39411Cu;
        // 0x394120: 0x2e010081  sltiu       $at, $s0, 0x81 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39411c) {
            ctx->pc = 0x394140u;
            goto label_394140;
        }
    }
    ctx->pc = 0x394124u;
label_394124:
    // 0x394124: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x394124u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x394128: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x394128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x39412c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39412cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x394130: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x394130u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x394134: 0x0  nop
    ctx->pc = 0x394134u;
    // NOP
    // 0x394138: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x394138u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x39413c: 0x2e010081  sltiu       $at, $s0, 0x81
    ctx->pc = 0x39413cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_394140:
    // 0x394140: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x394140u;
    {
        const bool branch_taken_0x394140 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x394140) {
            ctx->pc = 0x394150u;
            goto label_394150;
        }
    }
    ctx->pc = 0x394148u;
    // 0x394148: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x394148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x39414c: 0x0  nop
    ctx->pc = 0x39414cu;
    // NOP
label_394150:
    // 0x394150: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x394150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x394154: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x394154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x394158: 0xc05e360  jal         func_178D80
    ctx->pc = 0x394158u;
    SET_GPR_U32(ctx, 31, 0x394160u);
    ctx->pc = 0x39415Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394158u;
    // 0x39415c: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x394158u, 0x394160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394160u;
label_394160:
    // 0x394160: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x394160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x394164: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x394164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x394168: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x394168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x39416c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39416cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394170: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x394170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x394174: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x394174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x394178: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x394178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x39417c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x39417cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x394180: 0x92230008  lbu         $v1, 0x8($s1)
    ctx->pc = 0x394180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x394184: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x394184u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x394188: 0x92230009  lbu         $v1, 0x9($s1)
    ctx->pc = 0x394188u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x39418c: 0xa0430009  sb          $v1, 0x9($v0)
    ctx->pc = 0x39418cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x394190: 0x9223000a  lbu         $v1, 0xA($s1)
    ctx->pc = 0x394190u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x394194: 0xa043000a  sb          $v1, 0xA($v0)
    ctx->pc = 0x394194u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x394198: 0x9223000b  lbu         $v1, 0xB($s1)
    ctx->pc = 0x394198u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
    // 0x39419c: 0xa043000b  sb          $v1, 0xB($v0)
    ctx->pc = 0x39419cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x3941a0: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x3941a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3941a4: 0xa043000c  sb          $v1, 0xC($v0)
    ctx->pc = 0x3941a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x3941a8: 0x9223000d  lbu         $v1, 0xD($s1)
    ctx->pc = 0x3941a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x3941ac: 0xa043000d  sb          $v1, 0xD($v0)
    ctx->pc = 0x3941acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x3941b0: 0x9223000e  lbu         $v1, 0xE($s1)
    ctx->pc = 0x3941b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x3941b4: 0xa043000e  sb          $v1, 0xE($v0)
    ctx->pc = 0x3941b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x3941b8: 0x9223000f  lbu         $v1, 0xF($s1)
    ctx->pc = 0x3941b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
    // 0x3941bc: 0xa043000f  sb          $v1, 0xF($v0)
    ctx->pc = 0x3941bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x3941c0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3941c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3941c4: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x3941c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x3941c8: 0x96230014  lhu         $v1, 0x14($s1)
    ctx->pc = 0x3941c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3941cc: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x3941ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x3941d0: 0x96230016  lhu         $v1, 0x16($s1)
    ctx->pc = 0x3941d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x3941d4: 0xa4430016  sh          $v1, 0x16($v0)
    ctx->pc = 0x3941d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x3941d8: 0x96230018  lhu         $v1, 0x18($s1)
    ctx->pc = 0x3941d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x3941dc: 0xa4430018  sh          $v1, 0x18($v0)
    ctx->pc = 0x3941dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x3941e0: 0x9623001a  lhu         $v1, 0x1A($s1)
    ctx->pc = 0x3941e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x3941e4: 0xa443001a  sh          $v1, 0x1A($v0)
    ctx->pc = 0x3941e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x3941e8: 0x9623001c  lhu         $v1, 0x1C($s1)
    ctx->pc = 0x3941e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x3941ec: 0xa443001c  sh          $v1, 0x1C($v0)
    ctx->pc = 0x3941ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x3941f0: 0x9623001e  lhu         $v1, 0x1E($s1)
    ctx->pc = 0x3941f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x3941f4: 0xa443001e  sh          $v1, 0x1E($v0)
    ctx->pc = 0x3941f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x3941f8: 0x96230020  lhu         $v1, 0x20($s1)
    ctx->pc = 0x3941f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3941fc: 0xa4430020  sh          $v1, 0x20($v0)
    ctx->pc = 0x3941fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x394200: 0x96230022  lhu         $v1, 0x22($s1)
    ctx->pc = 0x394200u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x394204: 0xa4430022  sh          $v1, 0x22($v0)
    ctx->pc = 0x394204u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x394208: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x394208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x39420c: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x39420cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x394210: 0x96230028  lhu         $v1, 0x28($s1)
    ctx->pc = 0x394210u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x394214: 0xa4430028  sh          $v1, 0x28($v0)
    ctx->pc = 0x394214u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x394218: 0x9623002a  lhu         $v1, 0x2A($s1)
    ctx->pc = 0x394218u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x39421c: 0xa443002a  sh          $v1, 0x2A($v0)
    ctx->pc = 0x39421cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x394220: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x394220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x394224: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x394224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x394228: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x394228u;
    SET_GPR_U32(ctx, 31, 0x394230u);
    ctx->pc = 0x39422Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394228u;
    // 0x39422c: 0xa050000b  sb          $s0, 0xB($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x394228u, 0x394230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394230u;
label_394230:
    // 0x394230: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x394230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x394234: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x394234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x394238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x394238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39423c: 0x3e00008  jr          $ra
    ctx->pc = 0x39423Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39423Cu;
        // 0x394240: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39423Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394244u;
}
