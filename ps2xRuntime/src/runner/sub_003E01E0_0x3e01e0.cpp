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

// Function: sub_003E01E0
// Address: 0x3e01e0 - 0x3e0324
void sub_003E01E0_0x3e01e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E01E0_0x3e01e0");
#endif

    switch (ctx->pc) {
        case 0x3e01e0u: goto label_3e01e0;
        case 0x3e01e4u: goto label_3e01e4;
        case 0x3e01e8u: goto label_3e01e8;
        case 0x3e01ecu: goto label_3e01ec;
        case 0x3e01f0u: goto label_3e01f0;
        case 0x3e01f4u: goto label_3e01f4;
        case 0x3e01f8u: goto label_3e01f8;
        case 0x3e01fcu: goto label_3e01fc;
        case 0x3e0200u: goto label_3e0200;
        case 0x3e0204u: goto label_3e0204;
        case 0x3e0208u: goto label_3e0208;
        case 0x3e020cu: goto label_3e020c;
        case 0x3e0210u: goto label_3e0210;
        case 0x3e0214u: goto label_3e0214;
        case 0x3e0218u: goto label_3e0218;
        case 0x3e021cu: goto label_3e021c;
        case 0x3e0220u: goto label_3e0220;
        case 0x3e0224u: goto label_3e0224;
        case 0x3e0228u: goto label_3e0228;
        case 0x3e022cu: goto label_3e022c;
        case 0x3e0230u: goto label_3e0230;
        case 0x3e0234u: goto label_3e0234;
        case 0x3e0238u: goto label_3e0238;
        case 0x3e023cu: goto label_3e023c;
        case 0x3e0240u: goto label_3e0240;
        case 0x3e0244u: goto label_3e0244;
        case 0x3e0248u: goto label_3e0248;
        case 0x3e024cu: goto label_3e024c;
        case 0x3e0250u: goto label_3e0250;
        case 0x3e0254u: goto label_3e0254;
        case 0x3e0258u: goto label_3e0258;
        case 0x3e025cu: goto label_3e025c;
        case 0x3e0260u: goto label_3e0260;
        case 0x3e0264u: goto label_3e0264;
        case 0x3e0268u: goto label_3e0268;
        case 0x3e026cu: goto label_3e026c;
        case 0x3e0270u: goto label_3e0270;
        case 0x3e0274u: goto label_3e0274;
        case 0x3e0278u: goto label_3e0278;
        case 0x3e027cu: goto label_3e027c;
        case 0x3e0280u: goto label_3e0280;
        case 0x3e0284u: goto label_3e0284;
        case 0x3e0288u: goto label_3e0288;
        case 0x3e028cu: goto label_3e028c;
        case 0x3e0290u: goto label_3e0290;
        case 0x3e0294u: goto label_3e0294;
        case 0x3e0298u: goto label_3e0298;
        case 0x3e029cu: goto label_3e029c;
        case 0x3e02a0u: goto label_3e02a0;
        case 0x3e02a4u: goto label_3e02a4;
        case 0x3e02a8u: goto label_3e02a8;
        case 0x3e02acu: goto label_3e02ac;
        case 0x3e02b0u: goto label_3e02b0;
        case 0x3e02b4u: goto label_3e02b4;
        case 0x3e02b8u: goto label_3e02b8;
        case 0x3e02bcu: goto label_3e02bc;
        case 0x3e02c0u: goto label_3e02c0;
        case 0x3e02c4u: goto label_3e02c4;
        case 0x3e02c8u: goto label_3e02c8;
        case 0x3e02ccu: goto label_3e02cc;
        case 0x3e02d0u: goto label_3e02d0;
        case 0x3e02d4u: goto label_3e02d4;
        case 0x3e02d8u: goto label_3e02d8;
        case 0x3e02dcu: goto label_3e02dc;
        case 0x3e02e0u: goto label_3e02e0;
        case 0x3e02e4u: goto label_3e02e4;
        case 0x3e02e8u: goto label_3e02e8;
        case 0x3e02ecu: goto label_3e02ec;
        case 0x3e02f0u: goto label_3e02f0;
        case 0x3e02f4u: goto label_3e02f4;
        case 0x3e02f8u: goto label_3e02f8;
        case 0x3e02fcu: goto label_3e02fc;
        case 0x3e0300u: goto label_3e0300;
        case 0x3e0304u: goto label_3e0304;
        case 0x3e0308u: goto label_3e0308;
        case 0x3e030cu: goto label_3e030c;
        case 0x3e0310u: goto label_3e0310;
        case 0x3e0314u: goto label_3e0314;
        case 0x3e0318u: goto label_3e0318;
        case 0x3e031cu: goto label_3e031c;
        case 0x3e0320u: goto label_3e0320;
        default: break;
    }

    ctx->pc = 0x3e01e0u;

label_3e01e0:
    // 0x3e01e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e01e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3e01e4:
    // 0x3e01e4: 0x34038020  ori         $v1, $zero, 0x8020
    ctx->pc = 0x3e01e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_3e01e8:
    // 0x3e01e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e01e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e01ec:
    // 0x3e01ec: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3e01ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e01f0:
    // 0x3e01f0: 0x8c8506c8  lw          $a1, 0x6C8($a0)
    ctx->pc = 0x3e01f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
label_3e01f4:
    // 0x3e01f4: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x3e01f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
label_3e01f8:
    // 0x3e01f8: 0xac8506c8  sw          $a1, 0x6C8($a0)
    ctx->pc = 0x3e01f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1736), GPR_U32(ctx, 5));
label_3e01fc:
    // 0x3e01fc: 0x8c8506cc  lw          $a1, 0x6CC($a0)
    ctx->pc = 0x3e01fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
label_3e0200:
    // 0x3e0200: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x3e0200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
label_3e0204:
    // 0x3e0204: 0xac8506cc  sw          $a1, 0x6CC($a0)
    ctx->pc = 0x3e0204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 5));
label_3e0208:
    // 0x3e0208: 0x8c8506c8  lw          $a1, 0x6C8($a0)
    ctx->pc = 0x3e0208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
label_3e020c:
    // 0x3e020c: 0x34a50100  ori         $a1, $a1, 0x100
    ctx->pc = 0x3e020cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
label_3e0210:
    // 0x3e0210: 0xac8506c8  sw          $a1, 0x6C8($a0)
    ctx->pc = 0x3e0210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1736), GPR_U32(ctx, 5));
label_3e0214:
    // 0x3e0214: 0x8c8506cc  lw          $a1, 0x6CC($a0)
    ctx->pc = 0x3e0214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
label_3e0218:
    // 0x3e0218: 0x34a50100  ori         $a1, $a1, 0x100
    ctx->pc = 0x3e0218u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
label_3e021c:
    // 0x3e021c: 0xac8506cc  sw          $a1, 0x6CC($a0)
    ctx->pc = 0x3e021cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 5));
label_3e0220:
    // 0x3e0220: 0xa483078c  sh          $v1, 0x78C($a0)
    ctx->pc = 0x3e0220u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1932), (uint16_t)GPR_U32(ctx, 3));
label_3e0224:
    // 0x3e0224: 0xac8007b8  sw          $zero, 0x7B8($a0)
    ctx->pc = 0x3e0224u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1976), GPR_U32(ctx, 0));
label_3e0228:
    // 0x3e0228: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3e0228u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
label_3e022c:
    // 0x3e022c: 0x10670032  beq         $v1, $a3, . + 4 + (0x32 << 2)
label_3e0230:
    if (ctx->pc == 0x3E0230u) {
        ctx->pc = 0x3E0230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E022Cu;
        // 0x3e0230: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0234u;
        goto label_3e0234;
    }
    ctx->pc = 0x3E022Cu;
    {
        const bool branch_taken_0x3e022c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x3E0230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E022Cu;
        // 0x3e0230: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e022c) {
            ctx->pc = 0x3E02F8u;
            goto label_3e02f8;
        }
    }
    ctx->pc = 0x3E0234u;
label_3e0234:
    // 0x3e0234: 0x10660022  beq         $v1, $a2, . + 4 + (0x22 << 2)
label_3e0238:
    if (ctx->pc == 0x3E0238u) {
        ctx->pc = 0x3E0238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0234u;
        // 0x3e0238: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E023Cu;
        goto label_3e023c;
    }
    ctx->pc = 0x3E0234u;
    {
        const bool branch_taken_0x3e0234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x3E0238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0234u;
        // 0x3e0238: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0234) {
            ctx->pc = 0x3E02C0u;
            goto label_3e02c0;
        }
    }
    ctx->pc = 0x3E023Cu;
label_3e023c:
    // 0x3e023c: 0x10650012  beq         $v1, $a1, . + 4 + (0x12 << 2)
label_3e0240:
    if (ctx->pc == 0x3E0240u) {
        ctx->pc = 0x3E0244u;
        goto label_3e0244;
    }
    ctx->pc = 0x3E023Cu;
    {
        const bool branch_taken_0x3e023c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3e023c) {
            ctx->pc = 0x3E0288u;
            goto label_3e0288;
        }
    }
    ctx->pc = 0x3E0244u;
label_3e0244:
    // 0x3e0244: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3e0248:
    if (ctx->pc == 0x3E0248u) {
        ctx->pc = 0x3E024Cu;
        goto label_3e024c;
    }
    ctx->pc = 0x3E0244u;
    {
        const bool branch_taken_0x3e0244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0244) {
            ctx->pc = 0x3E0258u;
            goto label_3e0258;
        }
    }
    ctx->pc = 0x3E024Cu;
label_3e024c:
    // 0x3e024c: 0x10000032  b           . + 4 + (0x32 << 2)
label_3e0250:
    if (ctx->pc == 0x3E0250u) {
        ctx->pc = 0x3E0254u;
        goto label_3e0254;
    }
    ctx->pc = 0x3E024Cu;
    {
        const bool branch_taken_0x3e024c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e024c) {
            ctx->pc = 0x3E0318u;
            goto label_3e0318;
        }
    }
    ctx->pc = 0x3E0254u;
label_3e0254:
    // 0x3e0254: 0x0  nop
    ctx->pc = 0x3e0254u;
    // NOP
label_3e0258:
    // 0x3e0258: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3e0258u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
label_3e025c:
    // 0x3e025c: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x3e025cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
label_3e0260:
    // 0x3e0260: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x3e0260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_3e0264:
    // 0x3e0264: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x3e0264u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
label_3e0268:
    // 0x3e0268: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3e0268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e026c:
    // 0x3e026c: 0xa08307f5  sb          $v1, 0x7F5($a0)
    ctx->pc = 0x3e026cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 3));
label_3e0270:
    // 0x3e0270: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3e0270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3e0274:
    // 0x3e0274: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3e0274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_3e0278:
    // 0x3e0278: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x3e0278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
label_3e027c:
    // 0x3e027c: 0x10000026  b           . + 4 + (0x26 << 2)
label_3e0280:
    if (ctx->pc == 0x3E0280u) {
        ctx->pc = 0x3E0280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E027Cu;
        // 0x3e0280: 0xa0850821  sb          $a1, 0x821($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0284u;
        goto label_3e0284;
    }
    ctx->pc = 0x3E027Cu;
    {
        const bool branch_taken_0x3e027c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E027Cu;
        // 0x3e0280: 0xa0850821  sb          $a1, 0x821($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e027c) {
            ctx->pc = 0x3E0318u;
            goto label_3e0318;
        }
    }
    ctx->pc = 0x3E0284u;
label_3e0284:
    // 0x3e0284: 0x0  nop
    ctx->pc = 0x3e0284u;
    // NOP
label_3e0288:
    // 0x3e0288: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x3e0288u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
label_3e028c:
    // 0x3e028c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_3e0290:
    if (ctx->pc == 0x3E0290u) {
        ctx->pc = 0x3E0294u;
        goto label_3e0294;
    }
    ctx->pc = 0x3E028Cu;
    {
        const bool branch_taken_0x3e028c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e028c) {
            ctx->pc = 0x3E0318u;
            goto label_3e0318;
        }
    }
    ctx->pc = 0x3E0294u;
label_3e0294:
    // 0x3e0294: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3e0294u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
label_3e0298:
    // 0x3e0298: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x3e0298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_3e029c:
    // 0x3e029c: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x3e029cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
label_3e02a0:
    // 0x3e02a0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3e02a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e02a4:
    // 0x3e02a4: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x3e02a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
label_3e02a8:
    // 0x3e02a8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3e02a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3e02ac:
    // 0x3e02ac: 0xa08507f5  sb          $a1, 0x7F5($a0)
    ctx->pc = 0x3e02acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 5));
label_3e02b0:
    // 0x3e02b0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3e02b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_3e02b4:
    // 0x3e02b4: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x3e02b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
label_3e02b8:
    // 0x3e02b8: 0x10000017  b           . + 4 + (0x17 << 2)
label_3e02bc:
    if (ctx->pc == 0x3E02BCu) {
        ctx->pc = 0x3E02BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E02B8u;
        // 0x3e02bc: 0xa0860821  sb          $a2, 0x821($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E02C0u;
        goto label_3e02c0;
    }
    ctx->pc = 0x3E02B8u;
    {
        const bool branch_taken_0x3e02b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E02BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E02B8u;
        // 0x3e02bc: 0xa0860821  sb          $a2, 0x821($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e02b8) {
            ctx->pc = 0x3E0318u;
            goto label_3e0318;
        }
    }
    ctx->pc = 0x3E02C0u;
label_3e02c0:
    // 0x3e02c0: 0x90832c78  lbu         $v1, 0x2C78($a0)
    ctx->pc = 0x3e02c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11384)));
label_3e02c4:
    // 0x3e02c4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_3e02c8:
    if (ctx->pc == 0x3E02C8u) {
        ctx->pc = 0x3E02CCu;
        goto label_3e02cc;
    }
    ctx->pc = 0x3E02C4u;
    {
        const bool branch_taken_0x3e02c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e02c4) {
            ctx->pc = 0x3E0318u;
            goto label_3e0318;
        }
    }
    ctx->pc = 0x3E02CCu;
label_3e02cc:
    // 0x3e02cc: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3e02ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
label_3e02d0:
    // 0x3e02d0: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x3e02d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_3e02d4:
    // 0x3e02d4: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x3e02d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
label_3e02d8:
    // 0x3e02d8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3e02d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e02dc:
    // 0x3e02dc: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x3e02dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
label_3e02e0:
    // 0x3e02e0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3e02e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3e02e4:
    // 0x3e02e4: 0xa08507f5  sb          $a1, 0x7F5($a0)
    ctx->pc = 0x3e02e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 5));
label_3e02e8:
    // 0x3e02e8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3e02e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_3e02ec:
    // 0x3e02ec: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x3e02ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
label_3e02f0:
    // 0x3e02f0: 0x10000009  b           . + 4 + (0x9 << 2)
label_3e02f4:
    if (ctx->pc == 0x3E02F4u) {
        ctx->pc = 0x3E02F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E02F0u;
        // 0x3e02f4: 0xa0870821  sb          $a3, 0x821($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E02F8u;
        goto label_3e02f8;
    }
    ctx->pc = 0x3E02F0u;
    {
        const bool branch_taken_0x3e02f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E02F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E02F0u;
        // 0x3e02f4: 0xa0870821  sb          $a3, 0x821($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e02f0) {
            ctx->pc = 0x3E0318u;
            goto label_3e0318;
        }
    }
    ctx->pc = 0x3E02F8u;
label_3e02f8:
    // 0x3e02f8: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x3e02f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
label_3e02fc:
    // 0x3e02fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_3e0300:
    if (ctx->pc == 0x3E0300u) {
        ctx->pc = 0x3E0304u;
        goto label_3e0304;
    }
    ctx->pc = 0x3E02FCu;
    {
        const bool branch_taken_0x3e02fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e02fc) {
            ctx->pc = 0x3E0318u;
            goto label_3e0318;
        }
    }
    ctx->pc = 0x3E0304u;
label_3e0304:
    // 0x3e0304: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x3e0304u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_3e0308:
    // 0x3e0308: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3e0308u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3e030c:
    // 0x3e030c: 0x320f809  jalr        $t9
label_3e0310:
    if (ctx->pc == 0x3E0310u) {
        ctx->pc = 0x3E0314u;
        goto label_3e0314;
    }
    ctx->pc = 0x3E030Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E0314u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E030Cu, 0x3E0314u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E0314u;
label_3e0314:
    // 0x3e0314: 0x0  nop
    ctx->pc = 0x3e0314u;
    // NOP
label_3e0318:
    // 0x3e0318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e0318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e031c:
    // 0x3e031c: 0x3e00008  jr          $ra
label_3e0320:
    if (ctx->pc == 0x3E0320u) {
        ctx->pc = 0x3E0320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E031Cu;
        // 0x3e0320: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0324u;
        goto label_fallthrough_0x3e031c;
    }
    ctx->pc = 0x3E031Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E031Cu;
        // 0x3e0320: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E031Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e031c:
    ctx->pc = 0x3E0324u;
}
