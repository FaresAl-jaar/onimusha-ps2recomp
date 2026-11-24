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

// Function: sub_002A0200
// Address: 0x2a0200 - 0x2a0304
void sub_002A0200_0x2a0200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0200_0x2a0200");
#endif

    switch (ctx->pc) {
        case 0x2a0200u: goto label_2a0200;
        case 0x2a0204u: goto label_2a0204;
        case 0x2a0208u: goto label_2a0208;
        case 0x2a020cu: goto label_2a020c;
        case 0x2a0210u: goto label_2a0210;
        case 0x2a0214u: goto label_2a0214;
        case 0x2a0218u: goto label_2a0218;
        case 0x2a021cu: goto label_2a021c;
        case 0x2a0220u: goto label_2a0220;
        case 0x2a0224u: goto label_2a0224;
        case 0x2a0228u: goto label_2a0228;
        case 0x2a022cu: goto label_2a022c;
        case 0x2a0230u: goto label_2a0230;
        case 0x2a0234u: goto label_2a0234;
        case 0x2a0238u: goto label_2a0238;
        case 0x2a023cu: goto label_2a023c;
        case 0x2a0240u: goto label_2a0240;
        case 0x2a0244u: goto label_2a0244;
        case 0x2a0248u: goto label_2a0248;
        case 0x2a024cu: goto label_2a024c;
        case 0x2a0250u: goto label_2a0250;
        case 0x2a0254u: goto label_2a0254;
        case 0x2a0258u: goto label_2a0258;
        case 0x2a025cu: goto label_2a025c;
        case 0x2a0260u: goto label_2a0260;
        case 0x2a0264u: goto label_2a0264;
        case 0x2a0268u: goto label_2a0268;
        case 0x2a026cu: goto label_2a026c;
        case 0x2a0270u: goto label_2a0270;
        case 0x2a0274u: goto label_2a0274;
        case 0x2a0278u: goto label_2a0278;
        case 0x2a027cu: goto label_2a027c;
        case 0x2a0280u: goto label_2a0280;
        case 0x2a0284u: goto label_2a0284;
        case 0x2a0288u: goto label_2a0288;
        case 0x2a028cu: goto label_2a028c;
        case 0x2a0290u: goto label_2a0290;
        case 0x2a0294u: goto label_2a0294;
        case 0x2a0298u: goto label_2a0298;
        case 0x2a029cu: goto label_2a029c;
        case 0x2a02a0u: goto label_2a02a0;
        case 0x2a02a4u: goto label_2a02a4;
        case 0x2a02a8u: goto label_2a02a8;
        case 0x2a02acu: goto label_2a02ac;
        case 0x2a02b0u: goto label_2a02b0;
        case 0x2a02b4u: goto label_2a02b4;
        case 0x2a02b8u: goto label_2a02b8;
        case 0x2a02bcu: goto label_2a02bc;
        case 0x2a02c0u: goto label_2a02c0;
        case 0x2a02c4u: goto label_2a02c4;
        case 0x2a02c8u: goto label_2a02c8;
        case 0x2a02ccu: goto label_2a02cc;
        case 0x2a02d0u: goto label_2a02d0;
        case 0x2a02d4u: goto label_2a02d4;
        case 0x2a02d8u: goto label_2a02d8;
        case 0x2a02dcu: goto label_2a02dc;
        case 0x2a02e0u: goto label_2a02e0;
        case 0x2a02e4u: goto label_2a02e4;
        case 0x2a02e8u: goto label_2a02e8;
        case 0x2a02ecu: goto label_2a02ec;
        case 0x2a02f0u: goto label_2a02f0;
        case 0x2a02f4u: goto label_2a02f4;
        case 0x2a02f8u: goto label_2a02f8;
        case 0x2a02fcu: goto label_2a02fc;
        case 0x2a0300u: goto label_2a0300;
        default: break;
    }

    ctx->pc = 0x2a0200u;

label_2a0200:
    // 0x2a0200: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2a0200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2a0204:
    // 0x2a0204: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2a0204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2a0208:
    // 0x2a0208: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2a0208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2a020c:
    // 0x2a020c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2a020cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2a0210:
    // 0x2a0210: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2a0210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2a0214:
    // 0x2a0214: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a0214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2a0218:
    // 0x2a0218: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a0218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2a021c:
    // 0x2a021c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2a021cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0220:
    // 0x2a0220: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a0220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2a0224:
    // 0x2a0224: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2a0224u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a0228:
    // 0x2a0228: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a0228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2a022c:
    // 0x2a022c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a022cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a0230:
    // 0x2a0230: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a0230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a0234:
    // 0x2a0234: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a0234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a0238:
    // 0x2a0238: 0xafa500cc  sw          $a1, 0xCC($sp)
    ctx->pc = 0x2a0238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 5));
label_2a023c:
    // 0x2a023c: 0xafa700c8  sw          $a3, 0xC8($sp)
    ctx->pc = 0x2a023cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 7));
label_2a0240:
    // 0x2a0240: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2a0240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_2a0244:
    // 0x2a0244: 0x8c97007c  lw          $s7, 0x7C($a0)
    ctx->pc = 0x2a0244u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_2a0248:
    // 0x2a0248: 0x94820068  lhu         $v0, 0x68($a0)
    ctx->pc = 0x2a0248u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
label_2a024c:
    // 0x2a024c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2a024cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_2a0250:
    // 0x2a0250: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2a0250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2a0254:
    // 0x2a0254: 0x57f021  addu        $fp, $v0, $s7
    ctx->pc = 0x2a0254u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_2a0258:
    // 0x2a0258: 0x8fc20068  lw          $v0, 0x68($fp)
    ctx->pc = 0x2a0258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 104)));
label_2a025c:
    // 0x2a025c: 0x92f20001  lbu         $s2, 0x1($s7)
    ctx->pc = 0x2a025cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
label_2a0260:
    // 0x2a0260: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a0260u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0264:
    // 0x2a0264: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a0264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0268:
    // 0x2a0268: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x2a0268u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2a026c:
    // 0x2a026c: 0x8ee30018  lw          $v1, 0x18($s7)
    ctx->pc = 0x2a026cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
label_2a0270:
    // 0x2a0270: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a0270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a0274:
    // 0x2a0274: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2a0274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2a0278:
    // 0x2a0278: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2a0278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2a027c:
    // 0x2a027c: 0x8fa800c8  lw          $t0, 0xC8($sp)
    ctx->pc = 0x2a027cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_2a0280:
    // 0x2a0280: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2a0280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a0284:
    // 0x2a0284: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a0288:
    // 0x2a0288: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a0288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2a028c:
    // 0x2a028c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2a028cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a0290:
    // 0x2a0290: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x2a0290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_2a0294:
    // 0x2a0294: 0x40f809  jalr        $v0
label_2a0298:
    if (ctx->pc == 0x2A0298u) {
        ctx->pc = 0x2A0298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0294u;
        // 0x2a0298: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A029Cu;
        goto label_2a029c;
    }
    ctx->pc = 0x2A0294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A029Cu);
        ctx->pc = 0x2A0298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0294u;
        // 0x2a0298: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0294u, 0x2A029Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A029Cu;
label_2a029c:
    // 0x2a029c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a029cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a02a0:
    // 0x2a02a0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2a02a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a02a4:
    // 0x2a02a4: 0xc0a80c4  jal         func_2A0310
label_2a02a8:
    if (ctx->pc == 0x2A02A8u) {
        ctx->pc = 0x2A02A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A02A4u;
        // 0x2a02a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A02ACu;
        goto label_2a02ac;
    }
    ctx->pc = 0x2A02A4u;
    SET_GPR_U32(ctx, 31, 0x2A02ACu);
    ctx->pc = 0x2A02A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A02A4u;
    // 0x2a02a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0310u, 0x2A02A4u, 0x2A02ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A02ACu;
label_2a02ac:
    // 0x2a02ac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2a02acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2a02b0:
    // 0x2a02b0: 0x272182a  slt         $v1, $s3, $s2
    ctx->pc = 0x2a02b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2a02b4:
    // 0x2a02b4: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_2a02b8:
    if (ctx->pc == 0x2A02B8u) {
        ctx->pc = 0x2A02B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A02B4u;
        // 0x2a02b8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A02BCu;
        goto label_2a02bc;
    }
    ctx->pc = 0x2A02B4u;
    {
        const bool branch_taken_0x2a02b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A02B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A02B4u;
        // 0x2a02b8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a02b4) {
            ctx->pc = 0x2A0268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0268;
        }
    }
    ctx->pc = 0x2A02BCu;
label_2a02bc:
    // 0x2a02bc: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2a02bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2a02c0:
    // 0x2a02c0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2a02c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2a02c4:
    // 0x2a02c4: 0x27de01f0  addiu       $fp, $fp, 0x1F0
    ctx->pc = 0x2a02c4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 496));
label_2a02c8:
    // 0x2a02c8: 0x2c3182a  slt         $v1, $s6, $v1
    ctx->pc = 0x2a02c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2a02cc:
    // 0x2a02cc: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_2a02d0:
    if (ctx->pc == 0x2A02D0u) {
        ctx->pc = 0x2A02D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A02CCu;
        // 0x2a02d0: 0x26f701f0  addiu       $s7, $s7, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A02D4u;
        goto label_2a02d4;
    }
    ctx->pc = 0x2A02CCu;
    {
        const bool branch_taken_0x2a02cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A02D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A02CCu;
        // 0x2a02d0: 0x26f701f0  addiu       $s7, $s7, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a02cc) {
            ctx->pc = 0x2A0258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0258;
        }
    }
    ctx->pc = 0x2A02D4u;
label_2a02d4:
    // 0x2a02d4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2a02d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2a02d8:
    // 0x2a02d8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2a02d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2a02dc:
    // 0x2a02dc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2a02dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2a02e0:
    // 0x2a02e0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a02e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2a02e4:
    // 0x2a02e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a02e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2a02e8:
    // 0x2a02e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a02e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2a02ec:
    // 0x2a02ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a02ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a02f0:
    // 0x2a02f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a02f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a02f4:
    // 0x2a02f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a02f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a02f8:
    // 0x2a02f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a02f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a02fc:
    // 0x2a02fc: 0x3e00008  jr          $ra
label_2a0300:
    if (ctx->pc == 0x2A0300u) {
        ctx->pc = 0x2A0300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A02FCu;
        // 0x2a0300: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0304u;
        goto label_fallthrough_0x2a02fc;
    }
    ctx->pc = 0x2A02FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A02FCu;
        // 0x2a0300: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A02FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a02fc:
    ctx->pc = 0x2A0304u;
}
