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

// Function: sub_002D7120
// Address: 0x2d7120 - 0x2d7484
void sub_002D7120_0x2d7120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7120_0x2d7120");
#endif

    switch (ctx->pc) {
        case 0x2d7278u: goto label_2d7278;
        case 0x2d72b0u: goto label_2d72b0;
        case 0x2d72c4u: goto label_2d72c4;
        case 0x2d72e4u: goto label_2d72e4;
        case 0x2d72f8u: goto label_2d72f8;
        case 0x2d7314u: goto label_2d7314;
        case 0x2d734cu: goto label_2d734c;
        case 0x2d7360u: goto label_2d7360;
        case 0x2d737cu: goto label_2d737c;
        case 0x2d7390u: goto label_2d7390;
        case 0x2d73acu: goto label_2d73ac;
        case 0x2d73c0u: goto label_2d73c0;
        case 0x2d73fcu: goto label_2d73fc;
        case 0x2d7404u: goto label_2d7404;
        case 0x2d740cu: goto label_2d740c;
        default: break;
    }

    ctx->pc = 0x2d7120u;

    // 0x2d7120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d7120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d7124: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2d7124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2d7128: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d7128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d712c: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x2d712cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x2d7130: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d7130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d7134: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d7134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d7138: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d7138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d713c: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x2d713cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2d7140: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d7140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d7144: 0x146000ca  bnez        $v1, . + 4 + (0xCA << 2)
    ctx->pc = 0x2D7144u;
    {
        const bool branch_taken_0x2d7144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7144) {
            ctx->pc = 0x2D7470u;
            goto label_2d7470;
        }
    }
    ctx->pc = 0x2D714Cu;
    // 0x2d714c: 0x92230044  lbu         $v1, 0x44($s1)
    ctx->pc = 0x2d714cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x2d7150: 0x106000c7  beqz        $v1, . + 4 + (0xC7 << 2)
    ctx->pc = 0x2D7150u;
    {
        const bool branch_taken_0x2d7150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7150) {
            ctx->pc = 0x2D7470u;
            goto label_2d7470;
        }
    }
    ctx->pc = 0x2D7158u;
    // 0x2d7158: 0x8624002a  lh          $a0, 0x2A($s1)
    ctx->pc = 0x2d7158u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x2d715c: 0x8623005e  lh          $v1, 0x5E($s1)
    ctx->pc = 0x2d715cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 94)));
    // 0x2d7160: 0x86220028  lh          $v0, 0x28($s1)
    ctx->pc = 0x2d7160u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2d7164: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2d7164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d7168: 0xa6220034  sh          $v0, 0x34($s1)
    ctx->pc = 0x2d7168u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d716c: 0xa6230036  sh          $v1, 0x36($s1)
    ctx->pc = 0x2d716cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d7170: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x2d7170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2d7174: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2d7174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2d7178: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x2d7178u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x2d717c: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x2d717cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x2d7180: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2d7180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d7184: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x2d7184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x2d7188: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2D7188u;
    {
        const bool branch_taken_0x2d7188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7188u;
        // 0x2d718c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7188) {
            ctx->pc = 0x2D7258u;
            goto label_2d7258;
        }
    }
    ctx->pc = 0x2D7190u;
    // 0x2d7190: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x2d7190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x2d7194: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2d7194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2d7198: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D7198u;
    {
        const bool branch_taken_0x2d7198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7198u;
        // 0x2d719c: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7198) {
            ctx->pc = 0x2D71D8u;
            goto label_2d71d8;
        }
    }
    ctx->pc = 0x2D71A0u;
    // 0x2d71a0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D71A0u;
    {
        const bool branch_taken_0x2d71a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d71a0) {
            ctx->pc = 0x2D71D8u;
            goto label_2d71d8;
        }
    }
    ctx->pc = 0x2D71A8u;
    // 0x2d71a8: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x2d71a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2d71ac: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x2d71acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2d71b0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2d71b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2d71b4: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x2d71b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
    // 0x2d71b8: 0x86230028  lh          $v1, 0x28($s1)
    ctx->pc = 0x2d71b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2d71bc: 0x8625002a  lh          $a1, 0x2A($s1)
    ctx->pc = 0x2d71bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x2d71c0: 0x8624005e  lh          $a0, 0x5E($s1)
    ctx->pc = 0x2d71c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 94)));
    // 0x2d71c4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d71c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d71c8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2d71c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2d71cc: 0xa6220034  sh          $v0, 0x34($s1)
    ctx->pc = 0x2d71ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d71d0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2D71D0u;
    {
        const bool branch_taken_0x2d71d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D71D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D71D0u;
        // 0x2d71d4: 0xa6240036  sh          $a0, 0x36($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d71d0) {
            ctx->pc = 0x2D7258u;
            goto label_2d7258;
        }
    }
    ctx->pc = 0x2D71D8u;
label_2d71d8:
    // 0x2d71d8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2d71d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d71dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D71DCu;
    {
        const bool branch_taken_0x2d71dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d71dc) {
            ctx->pc = 0x2D7208u;
            goto label_2d7208;
        }
    }
    ctx->pc = 0x2D71E4u;
    // 0x2d71e4: 0x8624002a  lh          $a0, 0x2A($s1)
    ctx->pc = 0x2d71e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x2d71e8: 0x86220028  lh          $v0, 0x28($s1)
    ctx->pc = 0x2d71e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2d71ec: 0x8623005e  lh          $v1, 0x5E($s1)
    ctx->pc = 0x2d71ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 94)));
    // 0x2d71f0: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x2d71f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x2d71f4: 0x24420053  addiu       $v0, $v0, 0x53
    ctx->pc = 0x2d71f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 83));
    // 0x2d71f8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2d71f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d71fc: 0xa6220034  sh          $v0, 0x34($s1)
    ctx->pc = 0x2d71fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d7200: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D7200u;
    {
        const bool branch_taken_0x2d7200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7200u;
        // 0x2d7204: 0xa6230036  sh          $v1, 0x36($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7200) {
            ctx->pc = 0x2D7238u;
            goto label_2d7238;
        }
    }
    ctx->pc = 0x2D7208u;
label_2d7208:
    // 0x2d7208: 0x8626002a  lh          $a2, 0x2A($s1)
    ctx->pc = 0x2d7208u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x2d720c: 0x86230028  lh          $v1, 0x28($s1)
    ctx->pc = 0x2d720cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2d7210: 0x8625005e  lh          $a1, 0x5E($s1)
    ctx->pc = 0x2d7210u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 94)));
    // 0x2d7214: 0x8622020a  lh          $v0, 0x20A($s1)
    ctx->pc = 0x2d7214u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 522)));
    // 0x2d7218: 0x8624020c  lh          $a0, 0x20C($s1)
    ctx->pc = 0x2d7218u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 524)));
    // 0x2d721c: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x2d721cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x2d7220: 0x24630053  addiu       $v1, $v1, 0x53
    ctx->pc = 0x2d7220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 83));
    // 0x2d7224: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2d7224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2d7228: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d7228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d722c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2d722cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2d7230: 0xa6220034  sh          $v0, 0x34($s1)
    ctx->pc = 0x2d7230u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d7234: 0xa6240036  sh          $a0, 0x36($s1)
    ctx->pc = 0x2d7234u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 4));
label_2d7238:
    // 0x2d7238: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x2d7238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2d723c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2d723cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2d7240: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2d7240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2d7244: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x2d7244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
    // 0x2d7248: 0xa6200048  sh          $zero, 0x48($s1)
    ctx->pc = 0x2d7248u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 72), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d724c: 0xa620004a  sh          $zero, 0x4A($s1)
    ctx->pc = 0x2d724cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 74), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d7250: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x2d7250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x2d7254: 0x0  nop
    ctx->pc = 0x2d7254u;
    // NOP
label_2d7258:
    // 0x2d7258: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2d7258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2d725c: 0x8c23fc90  lw          $v1, -0x370($at)
    ctx->pc = 0x2d725cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81FC90u));
    // 0x2d7260: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2d7260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2d7264: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d7264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7268: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2d7268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2d726c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d726cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d7270: 0xc0b5204  jal         func_2D4810
    ctx->pc = 0x2D7270u;
    SET_GPR_U32(ctx, 31, 0x2D7278u);
    ctx->pc = 0x2D7274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7270u;
    // 0x2d7274: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4810u, 0x2D7270u, 0x2D7278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7278u;
label_2d7278:
    // 0x2d7278: 0x922200d6  lbu         $v0, 0xD6($s1)
    ctx->pc = 0x2d7278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 214)));
    // 0x2d727c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d727cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7280: 0x1447001f  bne         $v0, $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D7280u;
    {
        const bool branch_taken_0x2d7280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x2D7284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7280u;
        // 0x2d7284: 0x8630006c  lh          $s0, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7280) {
            ctx->pc = 0x2D7300u;
            goto label_2d7300;
        }
    }
    ctx->pc = 0x2D7288u;
    // 0x2d7288: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d7288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d728c: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x2d728cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2d7290: 0x84225b32  lh          $v0, 0x5B32($at)
    ctx->pc = 0x2d7290u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 23346)));
    // 0x2d7294: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d7294u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d7298: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2d7298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2d729c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D729Cu;
    {
        const bool branch_taken_0x2d729c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D72A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D729Cu;
        // 0x2d72a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d729c) {
            ctx->pc = 0x2D72D0u;
            goto label_2d72d0;
        }
    }
    ctx->pc = 0x2D72A4u;
    // 0x2d72a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d72a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d72a8: 0xc0b5b28  jal         func_2D6CA0
    ctx->pc = 0x2D72A8u;
    SET_GPR_U32(ctx, 31, 0x2D72B0u);
    ctx->pc = 0x2D72ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D72A8u;
    // 0x2d72ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6CA0u, 0x2D72A8u, 0x2D72B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D72B0u;
label_2d72b0:
    // 0x2d72b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d72b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d72b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d72b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d72b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d72b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d72bc: 0xc0b5b28  jal         func_2D6CA0
    ctx->pc = 0x2D72BCu;
    SET_GPR_U32(ctx, 31, 0x2D72C4u);
    ctx->pc = 0x2D72C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D72BCu;
    // 0x2d72c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6CA0u, 0x2D72BCu, 0x2D72C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D72C4u;
label_2d72c4:
    // 0x2d72c4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2D72C4u;
    {
        const bool branch_taken_0x2d72c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d72c4) {
            ctx->pc = 0x2D7318u;
            goto label_2d7318;
        }
    }
    ctx->pc = 0x2D72CCu;
    // 0x2d72cc: 0x0  nop
    ctx->pc = 0x2d72ccu;
    // NOP
label_2d72d0:
    // 0x2d72d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d72d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d72d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d72d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d72d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d72d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d72dc: 0xc0b5b28  jal         func_2D6CA0
    ctx->pc = 0x2D72DCu;
    SET_GPR_U32(ctx, 31, 0x2D72E4u);
    ctx->pc = 0x2D72E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D72DCu;
    // 0x2d72e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6CA0u, 0x2D72DCu, 0x2D72E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D72E4u;
label_2d72e4:
    // 0x2d72e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d72e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d72e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d72e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d72ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d72ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d72f0: 0xc0b5b28  jal         func_2D6CA0
    ctx->pc = 0x2D72F0u;
    SET_GPR_U32(ctx, 31, 0x2D72F8u);
    ctx->pc = 0x2D72F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D72F0u;
    // 0x2d72f4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6CA0u, 0x2D72F0u, 0x2D72F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D72F8u;
label_2d72f8:
    // 0x2d72f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D72F8u;
    {
        const bool branch_taken_0x2d72f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d72f8) {
            ctx->pc = 0x2D7318u;
            goto label_2d7318;
        }
    }
    ctx->pc = 0x2D7300u;
label_2d7300:
    // 0x2d7300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d7300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7304: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d7304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7308: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d7308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d730c: 0xc0b5b28  jal         func_2D6CA0
    ctx->pc = 0x2D730Cu;
    SET_GPR_U32(ctx, 31, 0x2D7314u);
    ctx->pc = 0x2D7310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D730Cu;
    // 0x2d7310: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6CA0u, 0x2D730Cu, 0x2D7314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7314u;
label_2d7314:
    // 0x2d7314: 0x0  nop
    ctx->pc = 0x2d7314u;
    // NOP
label_2d7318:
    // 0x2d7318: 0x922200d6  lbu         $v0, 0xD6($s1)
    ctx->pc = 0x2d7318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 214)));
    // 0x2d731c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d731cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7320: 0x1447001d  bne         $v0, $a3, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D7320u;
    {
        const bool branch_taken_0x2d7320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x2D7324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7320u;
        // 0x2d7324: 0x3c01004e  lui         $at, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7320) {
            ctx->pc = 0x2D7398u;
            goto label_2d7398;
        }
    }
    ctx->pc = 0x2D7328u;
    // 0x2d7328: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x2d7328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2d732c: 0x84225b32  lh          $v0, 0x5B32($at)
    ctx->pc = 0x2d732cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 23346)));
    // 0x2d7330: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d7330u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d7334: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2d7334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2d7338: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D7338u;
    {
        const bool branch_taken_0x2d7338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7338u;
        // 0x2d733c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7338) {
            ctx->pc = 0x2D7368u;
            goto label_2d7368;
        }
    }
    ctx->pc = 0x2D7340u;
    // 0x2d7340: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d7340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7344: 0xc0b568c  jal         func_2D5A30
    ctx->pc = 0x2D7344u;
    SET_GPR_U32(ctx, 31, 0x2D734Cu);
    ctx->pc = 0x2D7348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7344u;
    // 0x2d7348: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A30u, 0x2D7344u, 0x2D734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D734Cu;
label_2d734c:
    // 0x2d734c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d734cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7350: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d7350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7354: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d7354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7358: 0xc0b568c  jal         func_2D5A30
    ctx->pc = 0x2D7358u;
    SET_GPR_U32(ctx, 31, 0x2D7360u);
    ctx->pc = 0x2D735Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7358u;
    // 0x2d735c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A30u, 0x2D7358u, 0x2D7360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7360u;
label_2d7360:
    // 0x2d7360: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2D7360u;
    {
        const bool branch_taken_0x2d7360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7360) {
            ctx->pc = 0x2D73B0u;
            goto label_2d73b0;
        }
    }
    ctx->pc = 0x2D7368u;
label_2d7368:
    // 0x2d7368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d7368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d736c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d736cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7370: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d7370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7374: 0xc0b568c  jal         func_2D5A30
    ctx->pc = 0x2D7374u;
    SET_GPR_U32(ctx, 31, 0x2D737Cu);
    ctx->pc = 0x2D7378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7374u;
    // 0x2d7378: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A30u, 0x2D7374u, 0x2D737Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D737Cu;
label_2d737c:
    // 0x2d737c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d737cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7380: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d7380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7384: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d7384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7388: 0xc0b568c  jal         func_2D5A30
    ctx->pc = 0x2D7388u;
    SET_GPR_U32(ctx, 31, 0x2D7390u);
    ctx->pc = 0x2D738Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7388u;
    // 0x2d738c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A30u, 0x2D7388u, 0x2D7390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7390u;
label_2d7390:
    // 0x2d7390: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D7390u;
    {
        const bool branch_taken_0x2d7390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7390) {
            ctx->pc = 0x2D73B0u;
            goto label_2d73b0;
        }
    }
    ctx->pc = 0x2D7398u;
label_2d7398:
    // 0x2d7398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d7398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d739c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d739cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d73a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d73a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d73a4: 0xc0b568c  jal         func_2D5A30
    ctx->pc = 0x2D73A4u;
    SET_GPR_U32(ctx, 31, 0x2D73ACu);
    ctx->pc = 0x2D73A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D73A4u;
    // 0x2d73a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A30u, 0x2D73A4u, 0x2D73ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D73ACu;
label_2d73ac:
    // 0x2d73ac: 0x0  nop
    ctx->pc = 0x2d73acu;
    // NOP
label_2d73b0:
    // 0x2d73b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d73b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d73b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d73b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d73b8: 0xc0b5254  jal         func_2D4950
    ctx->pc = 0x2D73B8u;
    SET_GPR_U32(ctx, 31, 0x2D73C0u);
    ctx->pc = 0x2D73BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D73B8u;
    // 0x2d73bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4950u, 0x2D73B8u, 0x2D73C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D73C0u;
label_2d73c0:
    // 0x2d73c0: 0x922500d7  lbu         $a1, 0xD7($s1)
    ctx->pc = 0x2d73c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 215)));
    // 0x2d73c4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2d73c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2d73c8: 0x24425c80  addiu       $v0, $v0, 0x5C80
    ctx->pc = 0x2d73c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23680));
    // 0x2d73cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d73ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d73d0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2d73d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2d73d4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2d73d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d73d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d73d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d73dc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2d73dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d73e0: 0x84a60004  lh          $a2, 0x4($a1)
    ctx->pc = 0x2d73e0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d73e4: 0x84a70006  lh          $a3, 0x6($a1)
    ctx->pc = 0x2d73e4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2d73e8: 0x84a80008  lh          $t0, 0x8($a1)
    ctx->pc = 0x2d73e8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d73ec: 0x84a9000a  lh          $t1, 0xA($a1)
    ctx->pc = 0x2d73ecu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x2d73f0: 0x8caa0000  lw          $t2, 0x0($a1)
    ctx->pc = 0x2d73f0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d73f4: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D73F4u;
    SET_GPR_U32(ctx, 31, 0x2D73FCu);
    ctx->pc = 0x2D73F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D73F4u;
    // 0x2d73f8: 0x240b001a  addiu       $t3, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D73F4u, 0x2D73FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D73FCu;
label_2d73fc:
    // 0x2d73fc: 0xc0b5d24  jal         func_2D7490
    ctx->pc = 0x2D73FCu;
    SET_GPR_U32(ctx, 31, 0x2D7404u);
    ctx->pc = 0x2D7400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D73FCu;
    // 0x2d7400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7490u, 0x2D73FCu, 0x2D7404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7404u;
label_2d7404:
    // 0x2d7404: 0xc0b522c  jal         func_2D48B0
    ctx->pc = 0x2D7404u;
    SET_GPR_U32(ctx, 31, 0x2D740Cu);
    ctx->pc = 0x2D7408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7404u;
    // 0x2d7408: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D48B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D48B0u, 0x2D7404u, 0x2D740Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D740Cu;
label_2d740c:
    // 0x2d740c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d740cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d7410: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x2d7410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2d7414: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2d7414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2d7418: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x2d7418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2d741c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d741cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d7420: 0xac23fc90  sw          $v1, -0x370($at)
    ctx->pc = 0x2d7420u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 3));
    // 0x2d7424: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2d7424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d7428: 0x30831000  andi        $v1, $a0, 0x1000
    ctx->pc = 0x2d7428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
    // 0x2d742c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D742Cu;
    {
        const bool branch_taken_0x2d742c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D742Cu;
        // 0x2d7430: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d742c) {
            ctx->pc = 0x2D7470u;
            goto label_2d7470;
        }
    }
    ctx->pc = 0x2D7434u;
    // 0x2d7434: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x2d7434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x2d7438: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x2d7438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2d743c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D743Cu;
    {
        const bool branch_taken_0x2d743c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D743Cu;
        // 0x2d7440: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d743c) {
            ctx->pc = 0x2D7460u;
            goto label_2d7460;
        }
    }
    ctx->pc = 0x2D7444u;
    // 0x2d7444: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D7444u;
    {
        const bool branch_taken_0x2d7444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7444) {
            ctx->pc = 0x2D7460u;
            goto label_2d7460;
        }
    }
    ctx->pc = 0x2D744Cu;
    // 0x2d744c: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x2d744cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2d7450: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2d7450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2d7454: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d7454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d7458: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7458u;
    {
        const bool branch_taken_0x2d7458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7458u;
        // 0x2d745c: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7458) {
            ctx->pc = 0x2D7470u;
            goto label_2d7470;
        }
    }
    ctx->pc = 0x2D7460u;
label_2d7460:
    // 0x2d7460: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x2d7460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2d7464: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x2d7464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2d7468: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d7468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d746c: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x2d746cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
label_2d7470:
    // 0x2d7470: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d7470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7474: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d7474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7478: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d7478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d747c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D747Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D747Cu;
        // 0x2d7480: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D747Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7484u;
}
