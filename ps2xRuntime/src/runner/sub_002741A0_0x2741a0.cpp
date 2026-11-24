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

// Function: sub_002741A0
// Address: 0x2741a0 - 0x27450c
void sub_002741A0_0x2741a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002741A0_0x2741a0");
#endif

    switch (ctx->pc) {
        case 0x274250u: goto label_274250;
        case 0x2742c8u: goto label_2742c8;
        case 0x2742ecu: goto label_2742ec;
        case 0x274374u: goto label_274374;
        case 0x274384u: goto label_274384;
        case 0x274390u: goto label_274390;
        case 0x2743b4u: goto label_2743b4;
        case 0x2743c0u: goto label_2743c0;
        case 0x2744d0u: goto label_2744d0;
        default: break;
    }

    ctx->pc = 0x2741a0u;

    // 0x2741a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2741a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2741a4: 0x278388fc  addiu       $v1, $gp, -0x7704
    ctx->pc = 0x2741a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936828));
    // 0x2741a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2741a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2741ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2741acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2741b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2741b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2741b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2741b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2741b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2741b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2741bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2741bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2741c0: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x2741c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2741c4: 0x708821  addu        $s1, $v1, $s0
    ctx->pc = 0x2741c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2741c8: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x2741c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2741cc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2741ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2741d0: 0x108300ab  beq         $a0, $v1, . + 4 + (0xAB << 2)
    ctx->pc = 0x2741D0u;
    {
        const bool branch_taken_0x2741d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2741D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2741D0u;
        // 0x2741d4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2741d0) {
            ctx->pc = 0x274480u;
            goto label_274480;
        }
    }
    ctx->pc = 0x2741D8u;
    // 0x2741d8: 0x10830063  beq         $a0, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x2741D8u;
    {
        const bool branch_taken_0x2741d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2741d8) {
            ctx->pc = 0x274368u;
            goto label_274368;
        }
    }
    ctx->pc = 0x2741E0u;
    // 0x2741e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2741e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2741e4: 0x10830036  beq         $a0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2741E4u;
    {
        const bool branch_taken_0x2741e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2741e4) {
            ctx->pc = 0x2742C0u;
            goto label_2742c0;
        }
    }
    ctx->pc = 0x2741ECu;
    // 0x2741ec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2741ECu;
    {
        const bool branch_taken_0x2741ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2741ec) {
            ctx->pc = 0x274200u;
            goto label_274200;
        }
    }
    ctx->pc = 0x2741F4u;
    // 0x2741f4: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x2741F4u;
    {
        const bool branch_taken_0x2741f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2741f4) {
            ctx->pc = 0x2744F0u;
            goto label_2744f0;
        }
    }
    ctx->pc = 0x2741FCu;
    // 0x2741fc: 0x0  nop
    ctx->pc = 0x2741fcu;
    // NOP
label_274200:
    // 0x274200: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x274200u;
    {
        const bool branch_taken_0x274200 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x274204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274200u;
        // 0x274204: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274200) {
            ctx->pc = 0x274224u;
            goto label_274224;
        }
    }
    ctx->pc = 0x274208u;
    // 0x274208: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x274208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x27420c: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x27420cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x274210: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x274210u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x274214: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x274214u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x274218: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x274218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27421c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27421Cu;
    {
        const bool branch_taken_0x27421c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27421Cu;
        // 0x274220: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27421c) {
            ctx->pc = 0x27423Cu;
            goto label_27423c;
        }
    }
    ctx->pc = 0x274224u;
label_274224:
    // 0x274224: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x274224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x274228: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x274228u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x27422c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x27422cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x274230: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x274230u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x274234: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x274234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x274238: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x274238u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27423c:
    // 0x27423c: 0x124000ac  beqz        $s2, . + 4 + (0xAC << 2)
    ctx->pc = 0x27423Cu;
    {
        const bool branch_taken_0x27423c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x274240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27423Cu;
        // 0x274240: 0x3c05008c  lui         $a1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27423c) {
            ctx->pc = 0x2744F0u;
            goto label_2744f0;
        }
    }
    ctx->pc = 0x274244u;
    // 0x274244: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x274244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x274248: 0xc096988  jal         func_25A620
    ctx->pc = 0x274248u;
    SET_GPR_U32(ctx, 31, 0x274250u);
    ctx->pc = 0x27424Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274248u;
    // 0x27424c: 0x24a508d0  addiu       $a1, $a1, 0x8D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x274248u, 0x274250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274250u;
label_274250:
    // 0x274250: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x274250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x274254: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x274254u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274258: 0x0  nop
    ctx->pc = 0x274258u;
    // NOP
    // 0x27425c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27425cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x274260: 0x450000a3  bc1f        . + 4 + (0xA3 << 2)
    ctx->pc = 0x274260u;
    {
        const bool branch_taken_0x274260 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x274260) {
            ctx->pc = 0x2744F0u;
            goto label_2744f0;
        }
    }
    ctx->pc = 0x274268u;
    // 0x274268: 0x8e4329c0  lw          $v1, 0x29C0($s2)
    ctx->pc = 0x274268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x27426c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x27426cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274270: 0x1060009f  beqz        $v1, . + 4 + (0x9F << 2)
    ctx->pc = 0x274270u;
    {
        const bool branch_taken_0x274270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x274270) {
            ctx->pc = 0x2744F0u;
            goto label_2744f0;
        }
    }
    ctx->pc = 0x274278u;
    // 0x274278: 0x9244065c  lbu         $a0, 0x65C($s2)
    ctx->pc = 0x274278u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1628)));
    // 0x27427c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27427cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x274280: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x274280u;
    {
        const bool branch_taken_0x274280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x274284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274280u;
        // 0x274284: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274280) {
            ctx->pc = 0x274290u;
            goto label_274290;
        }
    }
    ctx->pc = 0x274288u;
    // 0x274288: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x274288u;
    {
        const bool branch_taken_0x274288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274288u;
        // 0x27428c: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274288) {
            ctx->pc = 0x2744F0u;
            goto label_2744f0;
        }
    }
    ctx->pc = 0x274290u;
label_274290:
    // 0x274290: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x274290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x274294: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x274294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274298: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x274298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27429c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27429Cu;
    {
        const bool branch_taken_0x27429c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2742A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27429Cu;
        // 0x2742a0: 0xa2240000  sb          $a0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27429c) {
            ctx->pc = 0x2742B0u;
            goto label_2742b0;
        }
    }
    ctx->pc = 0x2742A4u;
    // 0x2742a4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2742A4u;
    {
        const bool branch_taken_0x2742a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2742A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742A4u;
        // 0x2742a8: 0x278288fc  addiu       $v0, $gp, -0x7704 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936828));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2742a4) {
            ctx->pc = 0x2742B4u;
            goto label_2742b4;
        }
    }
    ctx->pc = 0x2742ACu;
    // 0x2742ac: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2742acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_2742b0:
    // 0x2742b0: 0x278288fc  addiu       $v0, $gp, -0x7704
    ctx->pc = 0x2742b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936828));
label_2742b4:
    // 0x2742b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2742b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2742b8: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x2742b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2742bc: 0x0  nop
    ctx->pc = 0x2742bcu;
    // NOP
label_2742c0:
    // 0x2742c0: 0xc0a468c  jal         func_291A30
    ctx->pc = 0x2742C0u;
    SET_GPR_U32(ctx, 31, 0x2742C8u);
    ctx->pc = 0x291A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291A30u, 0x2742C0u, 0x2742C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2742C8u;
label_2742c8:
    // 0x2742c8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2742c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2742cc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2742ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2742d0: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2742d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2742d4: 0x34450010  ori         $a1, $v0, 0x10
    ctx->pc = 0x2742d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2742d8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2742d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2742dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2742dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2742e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2742e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2742e4: 0xc09565c  jal         func_255970
    ctx->pc = 0x2742E4u;
    SET_GPR_U32(ctx, 31, 0x2742ECu);
    ctx->pc = 0x2742E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2742E4u;
    // 0x2742e8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x2742E4u, 0x2742ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2742ECu;
label_2742ec:
    // 0x2742ec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2742ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2742f0: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x2742f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2742f4: 0x8c28cebc  lw          $t0, -0x3144($at)
    ctx->pc = 0x2742f4u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2742f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2742f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2742fc: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x2742fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x274300: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x274300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x274304: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x274304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x274308: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x274308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x27430c: 0x35088000  ori         $t0, $t0, 0x8000
    ctx->pc = 0x27430cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x274310: 0x8c27ced8  lw          $a3, -0x3128($at)
    ctx->pc = 0x274310u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CED8u));
    // 0x274314: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x274314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x274318: 0xe52825  or          $a1, $a3, $a1
    ctx->pc = 0x274318u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x27431c: 0x8c26cec0  lw          $a2, -0x3140($at)
    ctx->pc = 0x27431cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x274320: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x274320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x274324: 0xac28cebc  sw          $t0, -0x3144($at)
    ctx->pc = 0x274324u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x274328: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x274328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x27432c: 0xac25ced8  sw          $a1, -0x3128($at)
    ctx->pc = 0x27432cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x81CED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED8u, _value); } while (0);
    // 0x274330: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x274330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x274334: 0x8c25ced8  lw          $a1, -0x3128($at)
    ctx->pc = 0x274334u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CED8u));
    // 0x274338: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x274338u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x27433c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x27433cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x274340: 0xac25cec0  sw          $a1, -0x3140($at)
    ctx->pc = 0x274340u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x274344: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x274344u;
    {
        const bool branch_taken_0x274344 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x274348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274344u;
        // 0x274348: 0xa2240000  sb          $a0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274344) {
            ctx->pc = 0x274358u;
            goto label_274358;
        }
    }
    ctx->pc = 0x27434Cu;
    // 0x27434c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27434Cu;
    {
        const bool branch_taken_0x27434c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x274350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27434Cu;
        // 0x274350: 0x278288fc  addiu       $v0, $gp, -0x7704 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936828));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27434c) {
            ctx->pc = 0x27435Cu;
            goto label_27435c;
        }
    }
    ctx->pc = 0x274354u;
    // 0x274354: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x274354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_274358:
    // 0x274358: 0x278288fc  addiu       $v0, $gp, -0x7704
    ctx->pc = 0x274358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936828));
label_27435c:
    // 0x27435c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27435cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274360: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x274360u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x274364: 0x0  nop
    ctx->pc = 0x274364u;
    // NOP
label_274368:
    // 0x274368: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x274368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x27436c: 0xc095150  jal         func_254540
    ctx->pc = 0x27436Cu;
    SET_GPR_U32(ctx, 31, 0x274374u);
    ctx->pc = 0x274370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27436Cu;
    // 0x274370: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x27436Cu, 0x274374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274374u;
label_274374:
    // 0x274374: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x274374u;
    {
        const bool branch_taken_0x274374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274374) {
            ctx->pc = 0x2744F0u;
            goto label_2744f0;
        }
    }
    ctx->pc = 0x27437Cu;
    // 0x27437c: 0xc0a46a0  jal         func_291A80
    ctx->pc = 0x27437Cu;
    SET_GPR_U32(ctx, 31, 0x274384u);
    ctx->pc = 0x291A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291A80u, 0x27437Cu, 0x274384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274384u;
label_274384:
    // 0x274384: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x274384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x274388: 0xc095154  jal         func_254550
    ctx->pc = 0x274388u;
    SET_GPR_U32(ctx, 31, 0x274390u);
    ctx->pc = 0x27438Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274388u;
    // 0x27438c: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x274388u, 0x274390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274390u;
label_274390:
    // 0x274390: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x274390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x274394: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x274394u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x274398: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x274398u;
    {
        const bool branch_taken_0x274398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274398u;
        // 0x27439c: 0x3c01008c  lui         $at, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274398) {
            ctx->pc = 0x2743C8u;
            goto label_2743c8;
        }
    }
    ctx->pc = 0x2743A0u;
    // 0x2743a0: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x2743a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x2743a4: 0x842508e0  lh          $a1, 0x8E0($at)
    ctx->pc = 0x2743a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 2272)));
    // 0x2743a8: 0x248428b0  addiu       $a0, $a0, 0x28B0
    ctx->pc = 0x2743a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    // 0x2743ac: 0xc0e360c  jal         func_38D830
    ctx->pc = 0x2743ACu;
    SET_GPR_U32(ctx, 31, 0x2743B4u);
    ctx->pc = 0x2743B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2743ACu;
    // 0x2743b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x2743ACu, 0x2743B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2743B4u;
label_2743b4:
    // 0x2743b4: 0x8f8488f8  lw          $a0, -0x7708($gp)
    ctx->pc = 0x2743b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936824)));
    // 0x2743b8: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x2743B8u;
    SET_GPR_U32(ctx, 31, 0x2743C0u);
    ctx->pc = 0x2743BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2743B8u;
    // 0x2743bc: 0xa38088a4  sb          $zero, -0x775C($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936740), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x2743B8u, 0x2743C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2743C0u;
label_2743c0:
    // 0x2743c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2743C0u;
    {
        const bool branch_taken_0x2743c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2743c0) {
            ctx->pc = 0x2743F8u;
            goto label_2743f8;
        }
    }
    ctx->pc = 0x2743C8u;
label_2743c8:
    // 0x2743c8: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x2743c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2743cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2743ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2743d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2743d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2743d4: 0xa2250000  sb          $a1, 0x0($s1)
    ctx->pc = 0x2743d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2743d8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2743D8u;
    {
        const bool branch_taken_0x2743d8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2743DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2743D8u;
        // 0x2743dc: 0x30640001  andi        $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2743d8) {
            ctx->pc = 0x2743ECu;
            goto label_2743ec;
        }
    }
    ctx->pc = 0x2743E0u;
    // 0x2743e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2743E0u;
    {
        const bool branch_taken_0x2743e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2743E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2743E0u;
        // 0x2743e4: 0x278388fc  addiu       $v1, $gp, -0x7704 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936828));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2743e0) {
            ctx->pc = 0x2743F0u;
            goto label_2743f0;
        }
    }
    ctx->pc = 0x2743E8u;
    // 0x2743e8: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x2743e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_2743ec:
    // 0x2743ec: 0x278388fc  addiu       $v1, $gp, -0x7704
    ctx->pc = 0x2743ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936828));
label_2743f0:
    // 0x2743f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2743f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2743f4: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x2743f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_2743f8:
    // 0x2743f8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2743f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2743fc: 0x8c29cebc  lw          $t1, -0x3144($at)
    ctx->pc = 0x2743fcu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x274400: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x274400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x274404: 0x34657fff  ori         $a1, $v1, 0x7FFF
    ctx->pc = 0x274404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x274408: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x274408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x27440c: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x27440cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x274410: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x274410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x274414: 0x1254824  and         $t1, $t1, $a1
    ctx->pc = 0x274414u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
    // 0x274418: 0x8c28ced8  lw          $t0, -0x3128($at)
    ctx->pc = 0x274418u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954712)));
    // 0x27441c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x27441cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x274420: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x274420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x274424: 0x8c27cec4  lw          $a3, -0x313C($at)
    ctx->pc = 0x274424u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954692)));
    // 0x274428: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x274428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x27442c: 0x8c23cec8  lw          $v1, -0x3138($at)
    ctx->pc = 0x27442cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x274430: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x274430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x274434: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x274434u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x274438: 0x8c26cecc  lw          $a2, -0x3134($at)
    ctx->pc = 0x274438u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CECCu));
    // 0x27443c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x27443cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x274440: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x274440u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x274444: 0x8c25ced0  lw          $a1, -0x3130($at)
    ctx->pc = 0x274444u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CED0u));
    // 0x274448: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x274448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x27444c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x27444cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x274450: 0xac29cebc  sw          $t1, -0x3144($at)
    ctx->pc = 0x274450u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x274454: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x274454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x274458: 0xac24ced8  sw          $a0, -0x3128($at)
    ctx->pc = 0x274458u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x81CED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED8u, _value); } while (0);
    // 0x27445c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x27445cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x274460: 0x8c24ced8  lw          $a0, -0x3128($at)
    ctx->pc = 0x274460u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CED8u));
    // 0x274464: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x274464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x274468: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x274468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x27446c: 0x8c23cedc  lw          $v1, -0x3124($at)
    ctx->pc = 0x27446cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x274470: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x274470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x274474: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x274474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x274478: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x274478u;
    {
        const bool branch_taken_0x274478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274478u;
        // 0x27447c: 0xac23cec0  sw          $v1, -0x3140($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274478) {
            ctx->pc = 0x2744F0u;
            goto label_2744f0;
        }
    }
    ctx->pc = 0x274480u;
label_274480:
    // 0x274480: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x274480u;
    {
        const bool branch_taken_0x274480 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x274484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274480u;
        // 0x274484: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274480) {
            ctx->pc = 0x2744A4u;
            goto label_2744a4;
        }
    }
    ctx->pc = 0x274488u;
    // 0x274488: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x274488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x27448c: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x27448cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x274490: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x274490u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x274494: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x274494u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x274498: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x274498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27449c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27449Cu;
    {
        const bool branch_taken_0x27449c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2744A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27449Cu;
        // 0x2744a0: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27449c) {
            ctx->pc = 0x2744BCu;
            goto label_2744bc;
        }
    }
    ctx->pc = 0x2744A4u;
label_2744a4:
    // 0x2744a4: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x2744a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2744a8: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x2744a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x2744ac: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x2744acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2744b0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2744b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2744b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2744b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2744b8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2744b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2744bc:
    // 0x2744bc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2744BCu;
    {
        const bool branch_taken_0x2744bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2744C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2744BCu;
        // 0x2744c0: 0x3c05008c  lui         $a1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2744bc) {
            ctx->pc = 0x2744F0u;
            goto label_2744f0;
        }
    }
    ctx->pc = 0x2744C4u;
    // 0x2744c4: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x2744c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2744c8: 0xc096988  jal         func_25A620
    ctx->pc = 0x2744C8u;
    SET_GPR_U32(ctx, 31, 0x2744D0u);
    ctx->pc = 0x2744CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2744C8u;
    // 0x2744cc: 0x24a508d0  addiu       $a1, $a1, 0x8D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x2744C8u, 0x2744D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2744D0u;
label_2744d0:
    // 0x2744d0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2744d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2744d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2744d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2744d8: 0x0  nop
    ctx->pc = 0x2744d8u;
    // NOP
    // 0x2744dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2744dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2744e0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2744E0u;
    {
        const bool branch_taken_0x2744e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2744e0) {
            ctx->pc = 0x2744F0u;
            goto label_2744f0;
        }
    }
    ctx->pc = 0x2744E8u;
    // 0x2744e8: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x2744e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2744ec: 0x0  nop
    ctx->pc = 0x2744ecu;
    // NOP
label_2744f0:
    // 0x2744f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2744f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2744f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2744f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2744f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2744f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2744fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2744fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x274500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274504: 0x3e00008  jr          $ra
    ctx->pc = 0x274504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274504u;
        // 0x274508: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27450Cu;
}
