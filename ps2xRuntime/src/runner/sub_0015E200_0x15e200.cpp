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

// Function: sub_0015E200
// Address: 0x15e200 - 0x15ed64
void sub_0015E200_0x15e200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E200_0x15e200");
#endif

    switch (ctx->pc) {
        case 0x15e2a4u: goto label_15e2a4;
        case 0x15e360u: goto label_15e360;
        case 0x15eb68u: goto label_15eb68;
        case 0x15ebc4u: goto label_15ebc4;
        case 0x15ec20u: goto label_15ec20;
        case 0x15ec7cu: goto label_15ec7c;
        default: break;
    }

    ctx->pc = 0x15e200u;

    // 0x15e200: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15e200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15e204: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15e204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15e208: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15e208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15e20c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15e20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15e210: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15e210u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e214: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15e214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15e218: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15e218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e21c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15e21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15e220: 0x8cb10090  lw          $s1, 0x90($a1)
    ctx->pc = 0x15e220u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x15e224: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x15e224u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x15e228: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x15e228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x15e22c: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x15e22cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x15e230: 0x94a20010  lhu         $v0, 0x10($a1)
    ctx->pc = 0x15e230u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15e234: 0x34420019  ori         $v0, $v0, 0x19
    ctx->pc = 0x15e234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25);
    // 0x15e238: 0xa4820010  sh          $v0, 0x10($a0)
    ctx->pc = 0x15e238u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x15e23c: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x15e23cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x15e240: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x15e240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x15e244: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15E244u;
    {
        const bool branch_taken_0x15e244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E244u;
        // 0x15e248: 0x2610aad0  addiu       $s0, $s0, -0x5530 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e244) {
            ctx->pc = 0x15E258u;
            goto label_15e258;
        }
    }
    ctx->pc = 0x15E24Cu;
    // 0x15e24c: 0x96620010  lhu         $v0, 0x10($s3)
    ctx->pc = 0x15e24cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x15e250: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x15e250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x15e254: 0xa6620010  sh          $v0, 0x10($s3)
    ctx->pc = 0x15e254u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 2));
label_15e258:
    // 0x15e258: 0x92220035  lbu         $v0, 0x35($s1)
    ctx->pc = 0x15e258u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
    // 0x15e25c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15E25Cu;
    {
        const bool branch_taken_0x15e25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e25c) {
            ctx->pc = 0x15E270u;
            goto label_15e270;
        }
    }
    ctx->pc = 0x15E264u;
    // 0x15e264: 0x96620010  lhu         $v0, 0x10($s3)
    ctx->pc = 0x15e264u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x15e268: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x15e268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x15e26c: 0xa6620010  sh          $v0, 0x10($s3)
    ctx->pc = 0x15e26cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 2));
label_15e270:
    // 0x15e270: 0x9222000e  lbu         $v0, 0xE($s1)
    ctx->pc = 0x15e270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x15e274: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15E274u;
    {
        const bool branch_taken_0x15e274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e274) {
            ctx->pc = 0x15E288u;
            goto label_15e288;
        }
    }
    ctx->pc = 0x15E27Cu;
    // 0x15e27c: 0x96620010  lhu         $v0, 0x10($s3)
    ctx->pc = 0x15e27cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x15e280: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x15e280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x15e284: 0xa6620010  sh          $v0, 0x10($s3)
    ctx->pc = 0x15e284u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 2));
label_15e288:
    // 0x15e288: 0x92420012  lbu         $v0, 0x12($s2)
    ctx->pc = 0x15e288u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x15e28c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e290: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15e290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e294: 0xa2620012  sb          $v0, 0x12($s3)
    ctx->pc = 0x15e294u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x15e298: 0x92420013  lbu         $v0, 0x13($s2)
    ctx->pc = 0x15e298u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 19)));
    // 0x15e29c: 0xc059924  jal         func_166490
    ctx->pc = 0x15E29Cu;
    SET_GPR_U32(ctx, 31, 0x15E2A4u);
    ctx->pc = 0x15E2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E29Cu;
    // 0x15e2a0: 0xa2620013  sb          $v0, 0x13($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 19), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166490u, 0x15E29Cu, 0x15E2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E2A4u;
label_15e2a4:
    // 0x15e2a4: 0x8642002c  lh          $v0, 0x2C($s2)
    ctx->pc = 0x15e2a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x15e2a8: 0xa662002c  sh          $v0, 0x2C($s3)
    ctx->pc = 0x15e2a8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x15e2ac: 0x9242004e  lbu         $v0, 0x4E($s2)
    ctx->pc = 0x15e2acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 78)));
    // 0x15e2b0: 0xa262004e  sb          $v0, 0x4E($s3)
    ctx->pc = 0x15e2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x15e2b4: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x15e2b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x15e2b8: 0xa26200a0  sb          $v0, 0xA0($s3)
    ctx->pc = 0x15e2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 160), (uint8_t)GPR_U32(ctx, 2));
    // 0x15e2bc: 0x9222000f  lbu         $v0, 0xF($s1)
    ctx->pc = 0x15e2bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
    // 0x15e2c0: 0xa26200a1  sb          $v0, 0xA1($s3)
    ctx->pc = 0x15e2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 161), (uint8_t)GPR_U32(ctx, 2));
    // 0x15e2c4: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x15e2c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x15e2c8: 0x92230021  lbu         $v1, 0x21($s1)
    ctx->pc = 0x15e2c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x15e2cc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15E2CCu;
    {
        const bool branch_taken_0x15e2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x15e2cc) {
            ctx->pc = 0x15E2E0u;
            goto label_15e2e0;
        }
    }
    ctx->pc = 0x15E2D4u;
    // 0x15e2d4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x15E2D4u;
    {
        const bool branch_taken_0x15e2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e2d4) {
            ctx->pc = 0x15E338u;
            goto label_15e338;
        }
    }
    ctx->pc = 0x15E2DCu;
    // 0x15e2dc: 0x0  nop
    ctx->pc = 0x15e2dcu;
    // NOP
label_15e2e0:
    // 0x15e2e0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e2e4: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x15e2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F004u));
    // 0x15e2e8: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15e2ec: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x15e2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15e2f0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x15e2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15e2f4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e2f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e2f8: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15e2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15e2fc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15e2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15e300: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15e300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15e304: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x15e304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x15e308: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x15e308u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x15e30c: 0x22202  srl         $a0, $v0, 8
    ctx->pc = 0x15e30cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x15e310: 0x92220021  lbu         $v0, 0x21($s1)
    ctx->pc = 0x15e310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x15e314: 0x92230020  lbu         $v1, 0x20($s1)
    ctx->pc = 0x15e314u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x15e318: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15e318u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15e31c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15e31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15e320: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x15e320u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x15e324: 0x0  nop
    ctx->pc = 0x15e324u;
    // NOP
    // 0x15e328: 0x0  nop
    ctx->pc = 0x15e328u;
    // NOP
    // 0x15e32c: 0x1010  mfhi        $v0
    ctx->pc = 0x15e32cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x15e330: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15e330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15e334: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15e334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15e338:
    // 0x15e338: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x15e338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x15e33c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x15e33cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15e340: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e344: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15e344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15e348: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15e348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15e34c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x15e34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15e350: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15e350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15e354: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15E354u;
    {
        const bool branch_taken_0x15e354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E354u;
        // 0x15e358: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e354) {
            ctx->pc = 0x15E368u;
            goto label_15e368;
        }
    }
    ctx->pc = 0x15E35Cu;
    // 0x15e35c: 0x0  nop
    ctx->pc = 0x15e35cu;
    // NOP
label_15e360:
    // 0x15e360: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x15e360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x15e364: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15e364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15e368:
    // 0x15e368: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x15e368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x15e36c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15E36Cu;
    {
        const bool branch_taken_0x15e36c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e36c) {
            ctx->pc = 0x15E388u;
            goto label_15e388;
        }
    }
    ctx->pc = 0x15E374u;
    // 0x15e374: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x15e374u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x15e378: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x15e378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x15e37c: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x15E37Cu;
    {
        const bool branch_taken_0x15e37c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e37c) {
            ctx->pc = 0x15E360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15e360;
        }
    }
    ctx->pc = 0x15E384u;
    // 0x15e384: 0x0  nop
    ctx->pc = 0x15e384u;
    // NOP
label_15e388:
    // 0x15e388: 0x92260023  lbu         $a2, 0x23($s1)
    ctx->pc = 0x15e388u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x15e38c: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x15e38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15e390: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x15e390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15e394: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x15e394u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x15e398: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15E398u;
    {
        const bool branch_taken_0x15e398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E398u;
        // 0x15e39c: 0x92250022  lbu         $a1, 0x22($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e398) {
            ctx->pc = 0x15E3B8u;
            goto label_15e3b8;
        }
    }
    ctx->pc = 0x15E3A0u;
    // 0x15e3a0: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x15e3a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x15e3a4: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x15e3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15e3a8: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x15e3a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x15e3ac: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x15E3ACu;
    {
        const bool branch_taken_0x15e3ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e3ac) {
            ctx->pc = 0x15E3B8u;
            goto label_15e3b8;
        }
    }
    ctx->pc = 0x15E3B4u;
    // 0x15e3b4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x15e3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15e3b8:
    // 0x15e3b8: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x15e3b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15e3bc: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x15e3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x15e3c0: 0x14e30003  bne         $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E3C0u;
    {
        const bool branch_taken_0x15e3c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x15e3c0) {
            ctx->pc = 0x15E3D0u;
            goto label_15e3d0;
        }
    }
    ctx->pc = 0x15E3C8u;
    // 0x15e3c8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x15E3C8u;
    {
        const bool branch_taken_0x15e3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e3c8) {
            ctx->pc = 0x15E420u;
            goto label_15e420;
        }
    }
    ctx->pc = 0x15E3D0u;
label_15e3d0:
    // 0x15e3d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e3d4: 0x8c25f004  lw          $a1, -0xFFC($at)
    ctx->pc = 0x15e3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81F004u));
    // 0x15e3d8: 0x3c04873c  lui         $a0, 0x873C
    ctx->pc = 0x15e3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34620 << 16));
    // 0x15e3dc: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x15e3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x15e3e0: 0x3484a9e5  ori         $a0, $a0, 0xA9E5
    ctx->pc = 0x15e3e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43493);
    // 0x15e3e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15e3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15e3e8: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x15e3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x15e3ec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e3f0: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x15e3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x15e3f4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15e3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15e3f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15e3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15e3fc: 0xa42026  xor         $a0, $a1, $a0
    ctx->pc = 0x15e3fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x15e400: 0xac24f004  sw          $a0, -0xFFC($at)
    ctx->pc = 0x15e400u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 4));
    // 0x15e404: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x15e404u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x15e408: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x15e408u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x15e40c: 0x0  nop
    ctx->pc = 0x15e40cu;
    // NOP
    // 0x15e410: 0x0  nop
    ctx->pc = 0x15e410u;
    // NOP
    // 0x15e414: 0x1810  mfhi        $v1
    ctx->pc = 0x15e414u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x15e418: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x15e418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x15e41c: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x15e41cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_15e420:
    // 0x15e420: 0x8e680018  lw          $t0, 0x18($s3)
    ctx->pc = 0x15e420u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x15e424: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15e424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15e428: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x15e428u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x15e42c: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x15e42cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15e430: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e434: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15e434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15e438: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x15e438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15e43c: 0x3449a9e5  ori         $t1, $v0, 0xA9E5
    ctx->pc = 0x15e43cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15e440: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x15e440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x15e444: 0x24020fff  addiu       $v0, $zero, 0xFFF
    ctx->pc = 0x15e444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15e448: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x15e448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x15e44c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x15e44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x15e450: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x15e450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15e454: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x15e454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15e458: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x15e458u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x15e45c: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x15e45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x15e460: 0xae66001c  sw          $a2, 0x1C($s3)
    ctx->pc = 0x15e460u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 6));
    // 0x15e464: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x15e464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x15e468: 0x90c60002  lbu         $a2, 0x2($a2)
    ctx->pc = 0x15e468u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x15e46c: 0xa266002f  sb          $a2, 0x2F($s3)
    ctx->pc = 0x15e46cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 47), (uint8_t)GPR_U32(ctx, 6));
    // 0x15e470: 0x8c26f004  lw          $a2, -0xFFC($at)
    ctx->pc = 0x15e470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x15e474: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x15e474u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x15e478: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e47c: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x15e47cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x15e480: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x15e480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15e484: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15e484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15e488: 0xc93026  xor         $a2, $a2, $t1
    ctx->pc = 0x15e488u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 9));
    // 0x15e48c: 0xac26f004  sw          $a2, -0xFFC($at)
    ctx->pc = 0x15e48cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 6));
    // 0x15e490: 0x64202  srl         $t0, $a2, 8
    ctx->pc = 0x15e490u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x15e494: 0x92270028  lbu         $a3, 0x28($s1)
    ctx->pc = 0x15e494u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x15e498: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e49c: 0x96460028  lhu         $a2, 0x28($s2)
    ctx->pc = 0x15e49cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x15e4a0: 0x673823  subu        $a3, $v1, $a3
    ctx->pc = 0x15e4a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x15e4a4: 0xe23807  srav        $a3, $v0, $a3
    ctx->pc = 0x15e4a4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x15e4a8: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x15e4a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x15e4ac: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x15e4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x15e4b0: 0xa6660028  sh          $a2, 0x28($s3)
    ctx->pc = 0x15e4b0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 40), (uint16_t)GPR_U32(ctx, 6));
    // 0x15e4b4: 0x8c26f004  lw          $a2, -0xFFC($at)
    ctx->pc = 0x15e4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x15e4b8: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x15e4b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x15e4bc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e4bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e4c0: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x15e4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x15e4c4: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x15e4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15e4c8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15e4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15e4cc: 0xc93026  xor         $a2, $a2, $t1
    ctx->pc = 0x15e4ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 9));
    // 0x15e4d0: 0xac26f004  sw          $a2, -0xFFC($at)
    ctx->pc = 0x15e4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 6));
    // 0x15e4d4: 0x64202  srl         $t0, $a2, 8
    ctx->pc = 0x15e4d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x15e4d8: 0x92270029  lbu         $a3, 0x29($s1)
    ctx->pc = 0x15e4d8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x15e4dc: 0x9646002a  lhu         $a2, 0x2A($s2)
    ctx->pc = 0x15e4dcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
    // 0x15e4e0: 0x673823  subu        $a3, $v1, $a3
    ctx->pc = 0x15e4e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x15e4e4: 0xe23807  srav        $a3, $v0, $a3
    ctx->pc = 0x15e4e4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x15e4e8: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x15e4e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x15e4ec: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x15e4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x15e4f0: 0x30c60fff  andi        $a2, $a2, 0xFFF
    ctx->pc = 0x15e4f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x15e4f4: 0xa666002a  sh          $a2, 0x2A($s3)
    ctx->pc = 0x15e4f4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 42), (uint16_t)GPR_U32(ctx, 6));
    // 0x15e4f8: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x15e4f8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15e4fc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e500: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x15e500u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e504: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x15e504u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x15e508: 0x3c04873c  lui         $a0, 0x873C
    ctx->pc = 0x15e508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34620 << 16));
    // 0x15e50c: 0x8c2bf004  lw          $t3, -0xFFC($at)
    ctx->pc = 0x15e50cu;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81F004u));
    // 0x15e510: 0x3489a9e5  ori         $t1, $a0, 0xA9E5
    ctx->pc = 0x15e510u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43493);
    // 0x15e514: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x15e514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x15e518: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x15e518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x15e51c: 0x44844000  mtc1        $a0, $f8
    ctx->pc = 0x15e51cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x15e520: 0x3c06873c  lui         $a2, 0x873C
    ctx->pc = 0x15e520u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34620 << 16));
    // 0x15e524: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x15e524u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x15e528: 0x34c6a9e5  ori         $a2, $a2, 0xA9E5
    ctx->pc = 0x15e528u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)43493);
    // 0x15e52c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x15e52cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x15e530: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x15e530u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x15e534: 0x26650060  addiu       $a1, $s3, 0x60
    ctx->pc = 0x15e534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x15e538: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e53c: 0xb5840  sll         $t3, $t3, 1
    ctx->pc = 0x15e53cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x15e540: 0x8c2af004  lw          $t2, -0xFFC($at)
    ctx->pc = 0x15e540u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x15e544: 0x3c04873c  lui         $a0, 0x873C
    ctx->pc = 0x15e544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34620 << 16));
    // 0x15e548: 0x3488a9e5  ori         $t0, $a0, 0xA9E5
    ctx->pc = 0x15e548u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43493);
    // 0x15e54c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x15e54cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x15e550: 0x44843000  mtc1        $a0, $f6
    ctx->pc = 0x15e550u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x15e554: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x15e554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x15e558: 0xa57c2  srl         $t2, $t2, 31
    ctx->pc = 0x15e558u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x15e55c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e560: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x15e560u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x15e564: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x15e564u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x15e568: 0x1494826  xor         $t1, $t2, $t1
    ctx->pc = 0x15e568u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 9));
    // 0x15e56c: 0xac29f004  sw          $t1, -0xFFC($at)
    ctx->pc = 0x15e56cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 9));
    // 0x15e570: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x15e570u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15e574: 0x94ac2  srl         $t1, $t1, 11
    ctx->pc = 0x15e574u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 11));
    // 0x15e578: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e57c: 0x3129003f  andi        $t1, $t1, 0x3F
    ctx->pc = 0x15e57cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)63);
    // 0x15e580: 0x3c04873c  lui         $a0, 0x873C
    ctx->pc = 0x15e580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34620 << 16));
    // 0x15e584: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x15e584u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x15e588: 0x3487a9e5  ori         $a3, $a0, 0xA9E5
    ctx->pc = 0x15e588u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43493);
    // 0x15e58c: 0x2094821  addu        $t1, $s0, $t1
    ctx->pc = 0x15e58cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x15e590: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x15e590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x15e594: 0xc5270000  lwc1        $f7, 0x0($t1)
    ctx->pc = 0x15e594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15e598: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x15e598u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15e59c: 0xc6210048  lwc1        $f1, 0x48($s1)
    ctx->pc = 0x15e59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15e5a0: 0xc6600050  lwc1        $f0, 0x50($s3)
    ctx->pc = 0x15e5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e5a4: 0x26640050  addiu       $a0, $s3, 0x50
    ctx->pc = 0x15e5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x15e5a8: 0x460741c2  mul.s       $f7, $f8, $f7
    ctx->pc = 0x15e5a8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x15e5ac: 0x46053941  sub.s       $f5, $f7, $f5
    ctx->pc = 0x15e5acu;
    ctx->f[5] = FPU_SUB_S(ctx->f[7], ctx->f[5]);
    // 0x15e5b0: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x15e5b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x15e5b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15e5b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15e5b8: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x15e5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x15e5bc: 0x8c2af004  lw          $t2, -0xFFC($at)
    ctx->pc = 0x15e5bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x15e5c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e5c4: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x15e5c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x15e5c8: 0x8c29f004  lw          $t1, -0xFFC($at)
    ctx->pc = 0x15e5c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x15e5cc: 0x94fc2  srl         $t1, $t1, 31
    ctx->pc = 0x15e5ccu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x15e5d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e5d4: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x15e5d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x15e5d8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x15e5d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x15e5dc: 0x1284026  xor         $t0, $t1, $t0
    ctx->pc = 0x15e5dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 8));
    // 0x15e5e0: 0xac28f004  sw          $t0, -0xFFC($at)
    ctx->pc = 0x15e5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 8));
    // 0x15e5e4: 0x84382  srl         $t0, $t0, 14
    ctx->pc = 0x15e5e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 14));
    // 0x15e5e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e5ec: 0x3108003f  andi        $t0, $t0, 0x3F
    ctx->pc = 0x15e5ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
    // 0x15e5f0: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x15e5f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x15e5f4: 0x2084021  addu        $t0, $s0, $t0
    ctx->pc = 0x15e5f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x15e5f8: 0xc5050000  lwc1        $f5, 0x0($t0)
    ctx->pc = 0x15e5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15e5fc: 0xc621004c  lwc1        $f1, 0x4C($s1)
    ctx->pc = 0x15e5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15e600: 0xc6600054  lwc1        $f0, 0x54($s3)
    ctx->pc = 0x15e600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e604: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x15e604u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x15e608: 0x460328c1  sub.s       $f3, $f5, $f3
    ctx->pc = 0x15e608u;
    ctx->f[3] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x15e60c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x15e60cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x15e610: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15e610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15e614: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x15e614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x15e618: 0x8c29f004  lw          $t1, -0xFFC($at)
    ctx->pc = 0x15e618u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x15e61c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e61cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e620: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x15e620u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x15e624: 0x8c28f004  lw          $t0, -0xFFC($at)
    ctx->pc = 0x15e624u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x15e628: 0x847c2  srl         $t0, $t0, 31
    ctx->pc = 0x15e628u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x15e62c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e630: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x15e630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x15e634: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x15e634u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x15e638: 0x1073826  xor         $a3, $t0, $a3
    ctx->pc = 0x15e638u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 7));
    // 0x15e63c: 0xac27f004  sw          $a3, -0xFFC($at)
    ctx->pc = 0x15e63cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 7));
    // 0x15e640: 0x73c42  srl         $a3, $a3, 17
    ctx->pc = 0x15e640u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 17));
    // 0x15e644: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e648: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x15e648u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x15e64c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x15e64cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x15e650: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x15e650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x15e654: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x15e654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15e658: 0xc6210050  lwc1        $f1, 0x50($s1)
    ctx->pc = 0x15e658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15e65c: 0xc6600058  lwc1        $f0, 0x58($s3)
    ctx->pc = 0x15e65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e660: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x15e660u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x15e664: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x15e664u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x15e668: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x15e668u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15e66c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15e66cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15e670: 0xe6600058  swc1        $f0, 0x58($s3)
    ctx->pc = 0x15e670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x15e674: 0x788c0000  lq          $t4, 0x0($a0)
    ctx->pc = 0x15e674u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15e678: 0x7cac0000  sq          $t4, 0x0($a1)
    ctx->pc = 0x15e678u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 12));
    // 0x15e67c: 0x92640023  lbu         $a0, 0x23($s3)
    ctx->pc = 0x15e67cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
    // 0x15e680: 0xa2640094  sb          $a0, 0x94($s3)
    ctx->pc = 0x15e680u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 148), (uint8_t)GPR_U32(ctx, 4));
    // 0x15e684: 0xa2600095  sb          $zero, 0x95($s3)
    ctx->pc = 0x15e684u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 149), (uint8_t)GPR_U32(ctx, 0));
    // 0x15e688: 0x8c25f004  lw          $a1, -0xFFC($at)
    ctx->pc = 0x15e688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x15e68c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e68cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e690: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x15e690u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x15e694: 0x8c24f004  lw          $a0, -0xFFC($at)
    ctx->pc = 0x15e694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x15e698: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15e698u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15e69c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e69cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e6a0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15e6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15e6a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15e6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15e6a8: 0x862026  xor         $a0, $a0, $a2
    ctx->pc = 0x15e6a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
    // 0x15e6ac: 0xac24f004  sw          $a0, -0xFFC($at)
    ctx->pc = 0x15e6acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 4));
    // 0x15e6b0: 0x422c2  srl         $a0, $a0, 11
    ctx->pc = 0x15e6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 11));
    // 0x15e6b4: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x15e6b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15e6b8: 0x9624003e  lhu         $a0, 0x3E($s1)
    ctx->pc = 0x15e6b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 62)));
    // 0x15e6bc: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x15e6bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15e6c0: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x15e6c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15e6c4: 0x30e4f000  andi        $a0, $a3, 0xF000
    ctx->pc = 0x15e6c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x15e6c8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E6C8u;
    {
        const bool branch_taken_0x15e6c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6C8u;
        // 0x15e6cc: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e6c8) {
            ctx->pc = 0x15E6D8u;
            goto label_15e6d8;
        }
    }
    ctx->pc = 0x15E6D0u;
    // 0x15e6d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15E6D0u;
    {
        const bool branch_taken_0x15e6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6D0u;
        // 0x15e6d4: 0x30e20fff  andi        $v0, $a3, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e6d0) {
            ctx->pc = 0x15E6F8u;
            goto label_15e6f8;
        }
    }
    ctx->pc = 0x15E6D8u;
label_15e6d8:
    // 0x15e6d8: 0x73303  sra         $a2, $a3, 12
    ctx->pc = 0x15e6d8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 12));
    // 0x15e6dc: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x15e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x15e6e0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x15e6e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x15e6e4: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x15e6e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x15e6e8: 0x30e40fff  andi        $a0, $a3, 0xFFF
    ctx->pc = 0x15e6e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x15e6ec: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x15e6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x15e6f0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x15e6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15e6f4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15e6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15e6f8:
    // 0x15e6f8: 0xa6620096  sh          $v0, 0x96($s3)
    ctx->pc = 0x15e6f8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x15e6fc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e700: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15e700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15e704: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x15e704u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F004u));
    // 0x15e708: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x15e708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15e70c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x15e70cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15e710: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e714: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15e714u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15e718: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15e718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15e71c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15e71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15e720: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x15e720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x15e724: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x15e724u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x15e728: 0x96240040  lhu         $a0, 0x40($s1)
    ctx->pc = 0x15e728u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x15e72c: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x15e72cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x15e730: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x15e730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15e734: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x15e734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x15e738: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E738u;
    {
        const bool branch_taken_0x15e738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e738) {
            ctx->pc = 0x15E748u;
            goto label_15e748;
        }
    }
    ctx->pc = 0x15E740u;
    // 0x15e740: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15E740u;
    {
        const bool branch_taken_0x15e740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E740u;
        // 0x15e744: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e740) {
            ctx->pc = 0x15E770u;
            goto label_15e770;
        }
    }
    ctx->pc = 0x15E748u;
label_15e748:
    // 0x15e748: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x15e748u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x15e74c: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x15e74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x15e750: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x15e750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15e754: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x15e754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15e758: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x15e758u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15e75c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15e75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15e760: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x15e760u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x15e764: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15e764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15e768: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15e768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15e76c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15e76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15e770:
    // 0x15e770: 0xa6620098  sh          $v0, 0x98($s3)
    ctx->pc = 0x15e770u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 152), (uint16_t)GPR_U32(ctx, 2));
    // 0x15e774: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e778: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15e778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15e77c: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x15e77cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F004u));
    // 0x15e780: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x15e780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15e784: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x15e784u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15e788: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e78c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15e78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15e790: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15e790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15e794: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15e794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15e798: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x15e798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x15e79c: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x15e79cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x15e7a0: 0x96240042  lhu         $a0, 0x42($s1)
    ctx->pc = 0x15e7a0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
    // 0x15e7a4: 0x21442  srl         $v0, $v0, 17
    ctx->pc = 0x15e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 17));
    // 0x15e7a8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x15e7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15e7ac: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x15e7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x15e7b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E7B0u;
    {
        const bool branch_taken_0x15e7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e7b0) {
            ctx->pc = 0x15E7C0u;
            goto label_15e7c0;
        }
    }
    ctx->pc = 0x15E7B8u;
    // 0x15e7b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15E7B8u;
    {
        const bool branch_taken_0x15e7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E7B8u;
        // 0x15e7bc: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e7b8) {
            ctx->pc = 0x15E7E8u;
            goto label_15e7e8;
        }
    }
    ctx->pc = 0x15E7C0u;
label_15e7c0:
    // 0x15e7c0: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x15e7c0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x15e7c4: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x15e7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x15e7c8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x15e7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15e7cc: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x15e7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15e7d0: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x15e7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15e7d4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15e7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15e7d8: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x15e7d8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x15e7dc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15e7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15e7e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15e7e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15e7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15e7e8:
    // 0x15e7e8: 0xa662009a  sh          $v0, 0x9A($s3)
    ctx->pc = 0x15e7e8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 154), (uint16_t)GPR_U32(ctx, 2));
    // 0x15e7ec: 0x96640096  lhu         $a0, 0x96($s3)
    ctx->pc = 0x15e7ecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 150)));
    // 0x15e7f0: 0x96630098  lhu         $v1, 0x98($s3)
    ctx->pc = 0x15e7f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x15e7f4: 0x9662009a  lhu         $v0, 0x9A($s3)
    ctx->pc = 0x15e7f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 154)));
    // 0x15e7f8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15e7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15e7fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15e800: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15e800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x15e804: 0xa6620092  sh          $v0, 0x92($s3)
    ctx->pc = 0x15e804u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 146), (uint16_t)GPR_U32(ctx, 2));
    // 0x15e808: 0x96620096  lhu         $v0, 0x96($s3)
    ctx->pc = 0x15e808u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 150)));
    // 0x15e80c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x15E80Cu;
    {
        const bool branch_taken_0x15e80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E80Cu;
        // 0x15e810: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e80c) {
            ctx->pc = 0x15E888u;
            goto label_15e888;
        }
    }
    ctx->pc = 0x15E814u;
    // 0x15e814: 0xa6640090  sh          $a0, 0x90($s3)
    ctx->pc = 0x15e814u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x15e818: 0x92630094  lbu         $v1, 0x94($s3)
    ctx->pc = 0x15e818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x15e81c: 0x96620096  lhu         $v0, 0x96($s3)
    ctx->pc = 0x15e81cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 150)));
    // 0x15e820: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x15e820u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15e824: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x15E824u;
    {
        const bool branch_taken_0x15e824 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e824) {
            ctx->pc = 0x15E838u;
            goto label_15e838;
        }
    }
    ctx->pc = 0x15E82Cu;
    // 0x15e82c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15E82Cu;
    {
        const bool branch_taken_0x15e82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E82Cu;
        // 0x15e830: 0xae640030  sw          $a0, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e82c) {
            ctx->pc = 0x15E860u;
            goto label_15e860;
        }
    }
    ctx->pc = 0x15E834u;
    // 0x15e834: 0x0  nop
    ctx->pc = 0x15e834u;
    // NOP
label_15e838:
    // 0x15e838: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x15e838u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x15e83c: 0x0  nop
    ctx->pc = 0x15e83cu;
    // NOP
    // 0x15e840: 0x0  nop
    ctx->pc = 0x15e840u;
    // NOP
    // 0x15e844: 0x1010  mfhi        $v0
    ctx->pc = 0x15e844u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x15e848: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E848u;
    {
        const bool branch_taken_0x15e848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e848) {
            ctx->pc = 0x15E858u;
            goto label_15e858;
        }
    }
    ctx->pc = 0x15E850u;
    // 0x15e850: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15E850u;
    {
        const bool branch_taken_0x15e850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E850u;
        // 0x15e854: 0xae600030  sw          $zero, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e850) {
            ctx->pc = 0x15E860u;
            goto label_15e860;
        }
    }
    ctx->pc = 0x15E858u;
label_15e858:
    // 0x15e858: 0xae640030  sw          $a0, 0x30($s3)
    ctx->pc = 0x15e858u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 4));
    // 0x15e85c: 0x0  nop
    ctx->pc = 0x15e85cu;
    // NOP
label_15e860:
    // 0x15e860: 0x92630094  lbu         $v1, 0x94($s3)
    ctx->pc = 0x15e860u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x15e864: 0x96620096  lhu         $v0, 0x96($s3)
    ctx->pc = 0x15e864u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 150)));
    // 0x15e868: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x15e868u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x15e86c: 0x0  nop
    ctx->pc = 0x15e86cu;
    // NOP
    // 0x15e870: 0x0  nop
    ctx->pc = 0x15e870u;
    // NOP
    // 0x15e874: 0x1012  mflo        $v0
    ctx->pc = 0x15e874u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x15e878: 0xa2620095  sb          $v0, 0x95($s3)
    ctx->pc = 0x15e878u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 149), (uint8_t)GPR_U32(ctx, 2));
    // 0x15e87c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15E87Cu;
    {
        const bool branch_taken_0x15e87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E87Cu;
        // 0x15e880: 0xa2620023  sb          $v0, 0x23($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 35), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e87c) {
            ctx->pc = 0x15E898u;
            goto label_15e898;
        }
    }
    ctx->pc = 0x15E884u;
    // 0x15e884: 0x0  nop
    ctx->pc = 0x15e884u;
    // NOP
label_15e888:
    // 0x15e888: 0x96630098  lhu         $v1, 0x98($s3)
    ctx->pc = 0x15e888u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x15e88c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e890: 0xa6630090  sh          $v1, 0x90($s3)
    ctx->pc = 0x15e890u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x15e894: 0xae620030  sw          $v0, 0x30($s3)
    ctx->pc = 0x15e894u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
label_15e898:
    // 0x15e898: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e89c: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x15e89cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F004u));
    // 0x15e8a0: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15e8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15e8a4: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x15e8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15e8a8: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x15e8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15e8ac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e8b0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15e8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15e8b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15e8b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15e8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15e8bc: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x15e8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x15e8c0: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x15e8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x15e8c4: 0x96250044  lhu         $a1, 0x44($s1)
    ctx->pc = 0x15e8c4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x15e8c8: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x15e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x15e8cc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x15e8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15e8d0: 0x30a2f000  andi        $v0, $a1, 0xF000
    ctx->pc = 0x15e8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)61440);
    // 0x15e8d4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x15E8D4u;
    {
        const bool branch_taken_0x15e8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8D4u;
        // 0x15e8d8: 0x30a20800  andi        $v0, $a1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e8d4) {
            ctx->pc = 0x15E918u;
            goto label_15e918;
        }
    }
    ctx->pc = 0x15E8DCu;
    // 0x15e8dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15E8DCu;
    {
        const bool branch_taken_0x15e8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e8dc) {
            ctx->pc = 0x15E8F8u;
            goto label_15e8f8;
        }
    }
    ctx->pc = 0x15E8E4u;
    // 0x15e8e4: 0x30a207ff  andi        $v0, $a1, 0x7FF
    ctx->pc = 0x15e8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x15e8e8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15e8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15e8ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15e8ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15e8f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15E8F0u;
    {
        const bool branch_taken_0x15e8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8F0u;
        // 0x15e8f4: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e8f0) {
            ctx->pc = 0x15E908u;
            goto label_15e908;
        }
    }
    ctx->pc = 0x15E8F8u;
label_15e8f8:
    // 0x15e8f8: 0x30a207ff  andi        $v0, $a1, 0x7FF
    ctx->pc = 0x15e8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x15e8fc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15e8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15e900: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15e900u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15e904: 0x0  nop
    ctx->pc = 0x15e904u;
    // NOP
label_15e908:
    // 0x15e908: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15e908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15e90c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x15E90Cu;
    {
        const bool branch_taken_0x15e90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E90Cu;
        // 0x15e910: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e90c) {
            ctx->pc = 0x15E970u;
            goto label_15e970;
        }
    }
    ctx->pc = 0x15E914u;
    // 0x15e914: 0x0  nop
    ctx->pc = 0x15e914u;
    // NOP
label_15e918:
    // 0x15e918: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x15e918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15e91c: 0x52303  sra         $a0, $a1, 12
    ctx->pc = 0x15e91cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 12));
    // 0x15e920: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x15e920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15e924: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x15e924u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15e928: 0x24030fff  addiu       $v1, $zero, 0xFFF
    ctx->pc = 0x15e928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15e92c: 0x832007  srav        $a0, $v1, $a0
    ctx->pc = 0x15e92cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x15e930: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x15e930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x15e934: 0x30a307ff  andi        $v1, $a1, 0x7FF
    ctx->pc = 0x15e934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x15e938: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15e938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15e93c: 0x30a20800  andi        $v0, $a1, 0x800
    ctx->pc = 0x15e93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
    // 0x15e940: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x15e940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15e944: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15E944u;
    {
        const bool branch_taken_0x15e944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E944u;
        // 0x15e948: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e944) {
            ctx->pc = 0x15E960u;
            goto label_15e960;
        }
    }
    ctx->pc = 0x15E94Cu;
    // 0x15e94c: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x15e94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15e950: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15e950u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15e954: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15E954u;
    {
        const bool branch_taken_0x15e954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E954u;
        // 0x15e958: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e954) {
            ctx->pc = 0x15E968u;
            goto label_15e968;
        }
    }
    ctx->pc = 0x15E95Cu;
    // 0x15e95c: 0x0  nop
    ctx->pc = 0x15e95cu;
    // NOP
label_15e960:
    // 0x15e960: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x15e960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15e964: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15e964u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_15e968:
    // 0x15e968: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15e968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15e96c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15e96cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_15e970:
    // 0x15e970: 0xa662009c  sh          $v0, 0x9C($s3)
    ctx->pc = 0x15e970u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 156), (uint16_t)GPR_U32(ctx, 2));
    // 0x15e974: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e978: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15e978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15e97c: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x15e97cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F004u));
    // 0x15e980: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x15e980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15e984: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x15e984u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15e988: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e98c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15e98cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15e990: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15e990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15e994: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15e994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15e998: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x15e998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x15e99c: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x15e99cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x15e9a0: 0x96250046  lhu         $a1, 0x46($s1)
    ctx->pc = 0x15e9a0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 70)));
    // 0x15e9a4: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x15e9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x15e9a8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x15e9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15e9ac: 0x30a2f000  andi        $v0, $a1, 0xF000
    ctx->pc = 0x15e9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)61440);
    // 0x15e9b0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x15E9B0u;
    {
        const bool branch_taken_0x15e9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e9b0) {
            ctx->pc = 0x15E9F8u;
            goto label_15e9f8;
        }
    }
    ctx->pc = 0x15E9B8u;
    // 0x15e9b8: 0x30a20800  andi        $v0, $a1, 0x800
    ctx->pc = 0x15e9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
    // 0x15e9bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15E9BCu;
    {
        const bool branch_taken_0x15e9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E9BCu;
        // 0x15e9c0: 0x30a207ff  andi        $v0, $a1, 0x7FF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e9bc) {
            ctx->pc = 0x15E9D8u;
            goto label_15e9d8;
        }
    }
    ctx->pc = 0x15E9C4u;
    // 0x15e9c4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15e9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15e9c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15e9c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15e9cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15E9CCu;
    {
        const bool branch_taken_0x15e9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E9CCu;
        // 0x15e9d0: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e9cc) {
            ctx->pc = 0x15E9E8u;
            goto label_15e9e8;
        }
    }
    ctx->pc = 0x15E9D4u;
    // 0x15e9d4: 0x0  nop
    ctx->pc = 0x15e9d4u;
    // NOP
label_15e9d8:
    // 0x15e9d8: 0x30a207ff  andi        $v0, $a1, 0x7FF
    ctx->pc = 0x15e9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x15e9dc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15e9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15e9e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15e9e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15e9e4: 0x0  nop
    ctx->pc = 0x15e9e4u;
    // NOP
label_15e9e8:
    // 0x15e9e8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15e9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15e9ec: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x15E9ECu;
    {
        const bool branch_taken_0x15e9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E9ECu;
        // 0x15e9f0: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e9ec) {
            ctx->pc = 0x15EA50u;
            goto label_15ea50;
        }
    }
    ctx->pc = 0x15E9F4u;
    // 0x15e9f4: 0x0  nop
    ctx->pc = 0x15e9f4u;
    // NOP
label_15e9f8:
    // 0x15e9f8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x15e9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15e9fc: 0x52303  sra         $a0, $a1, 12
    ctx->pc = 0x15e9fcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 12));
    // 0x15ea00: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x15ea00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15ea04: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x15ea04u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15ea08: 0x24030fff  addiu       $v1, $zero, 0xFFF
    ctx->pc = 0x15ea08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15ea0c: 0x832007  srav        $a0, $v1, $a0
    ctx->pc = 0x15ea0cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x15ea10: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x15ea10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x15ea14: 0x30a307ff  andi        $v1, $a1, 0x7FF
    ctx->pc = 0x15ea14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x15ea18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15ea18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15ea1c: 0x30a20800  andi        $v0, $a1, 0x800
    ctx->pc = 0x15ea1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
    // 0x15ea20: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x15ea20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15ea24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15EA24u;
    {
        const bool branch_taken_0x15ea24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA24u;
        // 0x15ea28: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ea24) {
            ctx->pc = 0x15EA40u;
            goto label_15ea40;
        }
    }
    ctx->pc = 0x15EA2Cu;
    // 0x15ea2c: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x15ea2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15ea30: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15ea30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15ea34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15EA34u;
    {
        const bool branch_taken_0x15ea34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA34u;
        // 0x15ea38: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ea34) {
            ctx->pc = 0x15EA48u;
            goto label_15ea48;
        }
    }
    ctx->pc = 0x15EA3Cu;
    // 0x15ea3c: 0x0  nop
    ctx->pc = 0x15ea3cu;
    // NOP
label_15ea40:
    // 0x15ea40: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x15ea40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15ea44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15ea44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_15ea48:
    // 0x15ea48: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15ea48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15ea4c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15ea4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_15ea50:
    // 0x15ea50: 0xa662009e  sh          $v0, 0x9E($s3)
    ctx->pc = 0x15ea50u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 158), (uint16_t)GPR_U32(ctx, 2));
    // 0x15ea54: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15ea54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15ea58: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15ea5c: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x15ea5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F004u));
    // 0x15ea60: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x15ea60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15ea64: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x15ea64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15ea68: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15ea68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15ea6c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15ea6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15ea70: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15ea70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15ea74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15ea78: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x15ea78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x15ea7c: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x15ea7cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x15ea80: 0x96240054  lhu         $a0, 0x54($s1)
    ctx->pc = 0x15ea80u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x15ea84: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x15ea84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x15ea88: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x15ea88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15ea8c: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x15ea8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x15ea90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15EA90u;
    {
        const bool branch_taken_0x15ea90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ea90) {
            ctx->pc = 0x15EAA0u;
            goto label_15eaa0;
        }
    }
    ctx->pc = 0x15EA98u;
    // 0x15ea98: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15EA98u;
    {
        const bool branch_taken_0x15ea98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA98u;
        // 0x15ea9c: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ea98) {
            ctx->pc = 0x15EAC8u;
            goto label_15eac8;
        }
    }
    ctx->pc = 0x15EAA0u;
label_15eaa0:
    // 0x15eaa0: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x15eaa0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x15eaa4: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x15eaa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x15eaa8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x15eaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15eaac: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x15eaacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15eab0: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x15eab0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15eab4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15eab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15eab8: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x15eab8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x15eabc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15eabcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15eac0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15eac4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15eac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15eac8:
    // 0x15eac8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15eac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x15eacc: 0xa4220280  sh          $v0, 0x280($at)
    ctx->pc = 0x15eaccu;
    runtime->Store16(rdram, ctx, 0x70000280u, (uint16_t)GPR_U32(ctx, 2));
    // 0x15ead0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15ead0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15ead4: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15ead8: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x15ead8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F004u));
    // 0x15eadc: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x15eadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15eae0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x15eae0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15eae4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15eae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15eae8: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15eae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15eaec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15eaecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15eaf0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15eaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15eaf4: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x15eaf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x15eaf8: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x15eaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x15eafc: 0x96240056  lhu         $a0, 0x56($s1)
    ctx->pc = 0x15eafcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 86)));
    // 0x15eb00: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x15eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x15eb04: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x15eb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15eb08: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x15eb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x15eb0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15EB0Cu;
    {
        const bool branch_taken_0x15eb0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15eb0c) {
            ctx->pc = 0x15EB20u;
            goto label_15eb20;
        }
    }
    ctx->pc = 0x15EB14u;
    // 0x15eb14: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15EB14u;
    {
        const bool branch_taken_0x15eb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB14u;
        // 0x15eb18: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eb14) {
            ctx->pc = 0x15EB48u;
            goto label_15eb48;
        }
    }
    ctx->pc = 0x15EB1Cu;
    // 0x15eb1c: 0x0  nop
    ctx->pc = 0x15eb1cu;
    // NOP
label_15eb20:
    // 0x15eb20: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x15eb20u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x15eb24: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x15eb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x15eb28: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x15eb28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15eb2c: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x15eb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15eb30: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x15eb30u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15eb34: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15eb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15eb38: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x15eb38u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x15eb3c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15eb3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15eb40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15eb44: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15eb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15eb48:
    // 0x15eb48: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15eb48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x15eb4c: 0xa4220282  sh          $v0, 0x282($at)
    ctx->pc = 0x15eb4cu;
    runtime->Store16(rdram, ctx, 0x70000282u, (uint16_t)GPR_U32(ctx, 2));
    // 0x15eb50: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x15eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x15eb54: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15eb54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x15eb58: 0x34440200  ori         $a0, $v0, 0x200
    ctx->pc = 0x15eb58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x15eb5c: 0x34450280  ori         $a1, $v0, 0x280
    ctx->pc = 0x15eb5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)640);
    // 0x15eb60: 0xc04d52c  jal         func_1354B0
    ctx->pc = 0x15EB60u;
    SET_GPR_U32(ctx, 31, 0x15EB68u);
    ctx->pc = 0x15EB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EB60u;
    // 0x15eb64: 0xa4200284  sh          $zero, 0x284($at) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 1), 644), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1354B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1354B0u, 0x15EB60u, 0x15EB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EB68u;
label_15eb68:
    // 0x15eb68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15eb6c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x15eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x15eb70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15eb70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15eb74: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15eb74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15eb78: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15eb78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15eb7c: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x15eb7cu;
    runtime->Store128(rdram, ctx, 0x70000000u, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x15eb80: 0x44011000  mfc1        $at, $f2
    ctx->pc = 0x15eb80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x15eb84: 0x0  nop
    ctx->pc = 0x15eb84u;
    // NOP
    // 0x15eb88: 0xac610000  sw          $at, 0x0($v1)
    ctx->pc = 0x15eb88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 1));
    // 0x15eb8c: 0x44010800  mfc1        $at, $f1
    ctx->pc = 0x15eb8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x15eb90: 0x0  nop
    ctx->pc = 0x15eb90u;
    // NOP
    // 0x15eb94: 0xac610004  sw          $at, 0x4($v1)
    ctx->pc = 0x15eb94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 1));
    // 0x15eb98: 0x44010000  mfc1        $at, $f0
    ctx->pc = 0x15eb98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x15eb9c: 0x0  nop
    ctx->pc = 0x15eb9cu;
    // NOP
    // 0x15eba0: 0xac610008  sw          $at, 0x8($v1)
    ctx->pc = 0x15eba0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 1));
    // 0x15eba4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x15eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x15eba8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15eba8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ebac: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15ebacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x15ebb0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x15ebb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x15ebb4: 0x34450200  ori         $a1, $v0, 0x200
    ctx->pc = 0x15ebb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x15ebb8: 0xe420000c  swc1        $f0, 0xC($at)
    ctx->pc = 0x15ebb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x7000000Cu, bits); }
    // 0x15ebbc: 0xc041442  jal         func_105108
    ctx->pc = 0x15EBBCu;
    SET_GPR_U32(ctx, 31, 0x15EBC4u);
    ctx->pc = 0x15EBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EBBCu;
    // 0x15ebc0: 0x3c067000  lui         $a2, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x15EBBCu, 0x15EBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EBC4u;
label_15ebc4:
    // 0x15ebc4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15ebc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15ebc8: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15ebcc: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x15ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F004u));
    // 0x15ebd0: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x15ebd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15ebd4: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x15ebd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x15ebd8: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x15ebd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x15ebdc: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x15ebdcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15ebe0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15ebe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15ebe4: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15ebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15ebe8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x15ebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x15ebec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15ebecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15ebf0: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x15ebf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x15ebf4: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x15ebf4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x15ebf8: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x15ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x15ebfc: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x15ebfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x15ec00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15ec04: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15ec08: 0xc622005c  lwc1        $f2, 0x5C($s1)
    ctx->pc = 0x15ec08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15ec0c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x15ec0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ec10: 0xc6200058  lwc1        $f0, 0x58($s1)
    ctx->pc = 0x15ec10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ec14: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x15ec14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x15ec18: 0xc0414dc  jal         func_105370
    ctx->pc = 0x15EC18u;
    SET_GPR_U32(ctx, 31, 0x15EC20u);
    ctx->pc = 0x15EC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EC18u;
    // 0x15ec1c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x15EC18u, 0x15EC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EC20u;
label_15ec20:
    // 0x15ec20: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15ec20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15ec24: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15ec24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15ec28: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x15ec28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F004u));
    // 0x15ec2c: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x15ec2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15ec30: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x15ec30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x15ec34: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x15ec34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x15ec38: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x15ec38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15ec3c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15ec3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15ec40: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15ec40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15ec44: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x15ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x15ec48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15ec48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15ec4c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x15ec4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x15ec50: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x15ec50u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x15ec54: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x15ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x15ec58: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x15ec58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x15ec5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15ec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15ec60: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15ec64: 0xc6220064  lwc1        $f2, 0x64($s1)
    ctx->pc = 0x15ec64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15ec68: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x15ec68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ec6c: 0xc6200060  lwc1        $f0, 0x60($s1)
    ctx->pc = 0x15ec6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ec70: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x15ec70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x15ec74: 0xc0414dc  jal         func_105370
    ctx->pc = 0x15EC74u;
    SET_GPR_U32(ctx, 31, 0x15EC7Cu);
    ctx->pc = 0x15EC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EC74u;
    // 0x15ec78: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x15EC74u, 0x15EC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EC7Cu;
label_15ec7c:
    // 0x15ec7c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15ec7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15ec80: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15ec80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15ec84: 0x8c24f004  lw          $a0, -0xFFC($at)
    ctx->pc = 0x15ec84u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F004u));
    // 0x15ec88: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15ec88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15ec8c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15ec8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15ec90: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15ec90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15ec94: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15ec94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15ec98: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15ec98u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15ec9c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15ec9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15eca0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15eca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15eca4: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15eca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15eca8: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x15eca8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x15ecac: 0x31c42  srl         $v1, $v1, 17
    ctx->pc = 0x15ecacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 17));
    // 0x15ecb0: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x15ecb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x15ecb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15ecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15ecb8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15ecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15ecbc: 0xc624006c  lwc1        $f4, 0x6C($s1)
    ctx->pc = 0x15ecbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15ecc0: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x15ecc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15ecc4: 0xc6220068  lwc1        $f2, 0x68($s1)
    ctx->pc = 0x15ecc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15ecc8: 0xc6600084  lwc1        $f0, 0x84($s3)
    ctx->pc = 0x15ecc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15eccc: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x15ecccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x15ecd0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x15ecd0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x15ecd4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x15ecd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x15ecd8: 0xe6600084  swc1        $f0, 0x84($s3)
    ctx->pc = 0x15ecd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
    // 0x15ecdc: 0xc6600070  lwc1        $f0, 0x70($s3)
    ctx->pc = 0x15ecdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ece0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x15ece0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ece4: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x15ECE4u;
    {
        const bool branch_taken_0x15ece4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15ece4) {
            ctx->pc = 0x15ED48u;
            goto label_15ed48;
        }
    }
    ctx->pc = 0x15ECECu;
    // 0x15ecec: 0xc6600074  lwc1        $f0, 0x74($s3)
    ctx->pc = 0x15ececu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ecf0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x15ecf0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ecf4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x15ECF4u;
    {
        const bool branch_taken_0x15ecf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15ecf4) {
            ctx->pc = 0x15ED48u;
            goto label_15ed48;
        }
    }
    ctx->pc = 0x15ECFCu;
    // 0x15ecfc: 0xc6600078  lwc1        $f0, 0x78($s3)
    ctx->pc = 0x15ecfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ed00: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x15ed00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ed04: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x15ED04u;
    {
        const bool branch_taken_0x15ed04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15ed04) {
            ctx->pc = 0x15ED48u;
            goto label_15ed48;
        }
    }
    ctx->pc = 0x15ED0Cu;
    // 0x15ed0c: 0xc6600080  lwc1        $f0, 0x80($s3)
    ctx->pc = 0x15ed0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ed10: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x15ed10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ed14: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x15ED14u;
    {
        const bool branch_taken_0x15ed14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15ed14) {
            ctx->pc = 0x15ED48u;
            goto label_15ed48;
        }
    }
    ctx->pc = 0x15ED1Cu;
    // 0x15ed1c: 0xc6600084  lwc1        $f0, 0x84($s3)
    ctx->pc = 0x15ed1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ed20: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x15ed20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ed24: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x15ED24u;
    {
        const bool branch_taken_0x15ed24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15ed24) {
            ctx->pc = 0x15ED48u;
            goto label_15ed48;
        }
    }
    ctx->pc = 0x15ED2Cu;
    // 0x15ed2c: 0xc6600088  lwc1        $f0, 0x88($s3)
    ctx->pc = 0x15ed2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ed30: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x15ed30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ed34: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x15ED34u;
    {
        const bool branch_taken_0x15ed34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15ed34) {
            ctx->pc = 0x15ED48u;
            goto label_15ed48;
        }
    }
    ctx->pc = 0x15ED3Cu;
    // 0x15ed3c: 0x96630010  lhu         $v1, 0x10($s3)
    ctx->pc = 0x15ed3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x15ed40: 0x3063ffe7  andi        $v1, $v1, 0xFFE7
    ctx->pc = 0x15ed40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65511);
    // 0x15ed44: 0xa6630010  sh          $v1, 0x10($s3)
    ctx->pc = 0x15ed44u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 3));
label_15ed48:
    // 0x15ed48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15ed48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15ed4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15ed4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15ed50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15ed50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ed54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15ed54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ed58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ed58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ed5c: 0x3e00008  jr          $ra
    ctx->pc = 0x15ED5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED5Cu;
        // 0x15ed60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ED5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15ED64u;
}
