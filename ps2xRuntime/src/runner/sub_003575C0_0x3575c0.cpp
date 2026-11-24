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

// Function: sub_003575C0
// Address: 0x3575c0 - 0x3578b8
void sub_003575C0_0x3575c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003575C0_0x3575c0");
#endif

    switch (ctx->pc) {
        case 0x3575f0u: goto label_3575f0;
        case 0x357638u: goto label_357638;
        case 0x3576d0u: goto label_3576d0;
        case 0x3576ecu: goto label_3576ec;
        case 0x357830u: goto label_357830;
        case 0x357890u: goto label_357890;
        default: break;
    }

    ctx->pc = 0x3575c0u;

    // 0x3575c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3575c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3575c4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3575c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3575c8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3575c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3575cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3575ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3575d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3575d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3575d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3575d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3575d8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3575d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3575dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3575dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3575e0: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x3575e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x3575e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3575e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3575e8: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x3575E8u;
    SET_GPR_U32(ctx, 31, 0x3575F0u);
    ctx->pc = 0x3575ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3575E8u;
    // 0x3575ec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x3575E8u, 0x3575F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3575F0u;
label_3575f0:
    // 0x3575f0: 0x8e8300a4  lw          $v1, 0xA4($s4)
    ctx->pc = 0x3575f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
    // 0x3575f4: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x3575f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3575f8: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3575F8u;
    {
        const bool branch_taken_0x3575f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3575f8) {
            ctx->pc = 0x357610u;
            goto label_357610;
        }
    }
    ctx->pc = 0x357600u;
    // 0x357600: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x357600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x357604: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x357604u;
    {
        const bool branch_taken_0x357604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x357604) {
            ctx->pc = 0x357688u;
            goto label_357688;
        }
    }
    ctx->pc = 0x35760Cu;
    // 0x35760c: 0x0  nop
    ctx->pc = 0x35760cu;
    // NOP
label_357610:
    // 0x357610: 0x8e8200a8  lw          $v0, 0xA8($s4)
    ctx->pc = 0x357610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
    // 0x357614: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x357614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x357618: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x357618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35761c: 0xae8200a8  sw          $v0, 0xA8($s4)
    ctx->pc = 0x35761cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 168), GPR_U32(ctx, 2));
    // 0x357620: 0x8e8200a4  lw          $v0, 0xA4($s4)
    ctx->pc = 0x357620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
    // 0x357624: 0x8e8300ac  lw          $v1, 0xAC($s4)
    ctx->pc = 0x357624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 172)));
    // 0x357628: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x357628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x35762c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35762cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x357630: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x357630u;
    SET_GPR_U32(ctx, 31, 0x357638u);
    ctx->pc = 0x357634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357630u;
    // 0x357634: 0xae8200ac  sw          $v0, 0xAC($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x357630u, 0x357638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357638u;
label_357638:
    // 0x357638: 0x84450008  lh          $a1, 0x8($v0)
    ctx->pc = 0x357638u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x35763c: 0x8e8400a8  lw          $a0, 0xA8($s4)
    ctx->pc = 0x35763cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
    // 0x357640: 0x85182b  sltu        $v1, $a0, $a1
    ctx->pc = 0x357640u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x357644: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x357644u;
    {
        const bool branch_taken_0x357644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x357648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357644u;
        // 0x357648: 0x8446000a  lh          $a2, 0xA($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357644) {
            ctx->pc = 0x357660u;
            goto label_357660;
        }
    }
    ctx->pc = 0x35764Cu;
    // 0x35764c: 0x85001a  div         $zero, $a0, $a1
    ctx->pc = 0x35764cu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x357650: 0x0  nop
    ctx->pc = 0x357650u;
    // NOP
    // 0x357654: 0x0  nop
    ctx->pc = 0x357654u;
    // NOP
    // 0x357658: 0x1810  mfhi        $v1
    ctx->pc = 0x357658u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x35765c: 0xae8300a8  sw          $v1, 0xA8($s4)
    ctx->pc = 0x35765cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 168), GPR_U32(ctx, 3));
label_357660:
    // 0x357660: 0x8e8400ac  lw          $a0, 0xAC($s4)
    ctx->pc = 0x357660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 172)));
    // 0x357664: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x357664u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x357668: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x357668u;
    {
        const bool branch_taken_0x357668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x357668) {
            ctx->pc = 0x357688u;
            goto label_357688;
        }
    }
    ctx->pc = 0x357670u;
    // 0x357670: 0x86001a  div         $zero, $a0, $a2
    ctx->pc = 0x357670u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x357674: 0x0  nop
    ctx->pc = 0x357674u;
    // NOP
    // 0x357678: 0x0  nop
    ctx->pc = 0x357678u;
    // NOP
    // 0x35767c: 0x1810  mfhi        $v1
    ctx->pc = 0x35767cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x357680: 0xae8300ac  sw          $v1, 0xAC($s4)
    ctx->pc = 0x357680u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 3));
    // 0x357684: 0x0  nop
    ctx->pc = 0x357684u;
    // NOP
label_357688:
    // 0x357688: 0x8e8500a4  lw          $a1, 0xA4($s4)
    ctx->pc = 0x357688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
    // 0x35768c: 0x86840054  lh          $a0, 0x54($s4)
    ctx->pc = 0x35768cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x357690: 0x84a30018  lh          $v1, 0x18($a1)
    ctx->pc = 0x357690u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x357694: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x357694u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x357698: 0x0  nop
    ctx->pc = 0x357698u;
    // NOP
    // 0x35769c: 0x0  nop
    ctx->pc = 0x35769cu;
    // NOP
    // 0x3576a0: 0x1810  mfhi        $v1
    ctx->pc = 0x3576a0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3576a4: 0x1460006c  bnez        $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x3576A4u;
    {
        const bool branch_taken_0x3576a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3576a4) {
            ctx->pc = 0x357858u;
            goto label_357858;
        }
    }
    ctx->pc = 0x3576ACu;
    // 0x3576ac: 0x90a30008  lbu         $v1, 0x8($a1)
    ctx->pc = 0x3576acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3576b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3576b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3576b4: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x3576b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3576b8: 0x14200067  bnez        $at, . + 4 + (0x67 << 2)
    ctx->pc = 0x3576B8u;
    {
        const bool branch_taken_0x3576b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3576BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3576B8u;
        // 0x3576bc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3576b8) {
            ctx->pc = 0x357858u;
            goto label_357858;
        }
    }
    ctx->pc = 0x3576C0u;
    // 0x3576c0: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x3576c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3576c4: 0x27b50084  addiu       $s5, $sp, 0x84
    ctx->pc = 0x3576c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x3576c8: 0x27b60088  addiu       $s6, $sp, 0x88
    ctx->pc = 0x3576c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x3576cc: 0x0  nop
    ctx->pc = 0x3576ccu;
    // NOP
label_3576d0:
    // 0x3576d0: 0x8e8200a0  lw          $v0, 0xA0($s4)
    ctx->pc = 0x3576d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 160)));
    // 0x3576d4: 0x24b10040  addiu       $s1, $a1, 0x40
    ctx->pc = 0x3576d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x3576d8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3576d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3576dc: 0x24a50050  addiu       $a1, $a1, 0x50
    ctx->pc = 0x3576dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x3576e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3576e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3576e4: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3576E4u;
    SET_GPR_U32(ctx, 31, 0x3576ECu);
    ctx->pc = 0x3576E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3576E4u;
    // 0x3576e8: 0x509021  addu        $s2, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3576E4u, 0x3576ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3576ECu;
label_3576ec:
    // 0x3576ec: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3576ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3576f0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3576f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3576f4: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3576f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3576f8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3576f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3576fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3576fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x357700: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x357700u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x357704: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x357704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x357708: 0x41302  srl         $v0, $a0, 12
    ctx->pc = 0x357708u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x35770c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35770Cu;
    {
        const bool branch_taken_0x35770c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x357710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35770Cu;
        // 0x357710: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35770c) {
            ctx->pc = 0x357720u;
            goto label_357720;
        }
    }
    ctx->pc = 0x357714u;
    // 0x357714: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x357714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x357718: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x357718u;
    {
        const bool branch_taken_0x357718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357718u;
        // 0x35771c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x357718) {
            ctx->pc = 0x357738u;
            goto label_357738;
        }
    }
    ctx->pc = 0x357720u;
label_357720:
    // 0x357720: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x357720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x357724: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x357724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x357728: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x357728u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35772c: 0x0  nop
    ctx->pc = 0x35772cu;
    // NOP
    // 0x357730: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x357730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x357734: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x357734u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_357738:
    // 0x357738: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x357738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
    // 0x35773c: 0x34430008  ori         $v1, $v0, 0x8
    ctx->pc = 0x35773cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x357740: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x357740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x357744: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x357744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x357748: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x357748u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x35774c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x35774cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x357750: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x357750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x357754: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x357754u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x357758: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x357758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35775c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x35775cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x357760: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x357760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x357764: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x357764u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x357768: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x357768u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x35776c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35776Cu;
    {
        const bool branch_taken_0x35776c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x357770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35776Cu;
        // 0x357770: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35776c) {
            ctx->pc = 0x357780u;
            goto label_357780;
        }
    }
    ctx->pc = 0x357774u;
    // 0x357774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x357774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x357778: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x357778u;
    {
        const bool branch_taken_0x357778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357778u;
        // 0x35777c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x357778) {
            ctx->pc = 0x35779Cu;
            goto label_35779c;
        }
    }
    ctx->pc = 0x357780u;
label_357780:
    // 0x357780: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x357780u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x357784: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x357784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x357788: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x357788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35778c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35778cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x357790: 0x0  nop
    ctx->pc = 0x357790u;
    // NOP
    // 0x357794: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x357794u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x357798: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x357798u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_35779c:
    // 0x35779c: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x35779cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
    // 0x3577a0: 0x34430008  ori         $v1, $v0, 0x8
    ctx->pc = 0x3577a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x3577a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3577a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3577a8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3577a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3577ac: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x3577acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3577b0: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3577b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3577b4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3577b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3577b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3577b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3577bc: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x3577bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x3577c0: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3577c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3577c4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3577c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3577c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3577c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3577cc: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3577ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3577d0: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3577d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3577d4: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3577d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3577d8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3577D8u;
    {
        const bool branch_taken_0x3577d8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3577DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3577D8u;
        // 0x3577dc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3577d8) {
            ctx->pc = 0x3577ECu;
            goto label_3577ec;
        }
    }
    ctx->pc = 0x3577E0u;
    // 0x3577e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3577e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3577e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3577E4u;
    {
        const bool branch_taken_0x3577e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3577E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3577E4u;
        // 0x3577e8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3577e4) {
            ctx->pc = 0x357804u;
            goto label_357804;
        }
    }
    ctx->pc = 0x3577ECu;
label_3577ec:
    // 0x3577ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3577ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3577f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3577f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3577f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3577f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3577f8: 0x0  nop
    ctx->pc = 0x3577f8u;
    // NOP
    // 0x3577fc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3577fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x357800: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x357800u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_357804:
    // 0x357804: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x357804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
    // 0x357808: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x357808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35780c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x35780cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x357810: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x357810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357814: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x357814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x357818: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x357818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x35781c: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x35781cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x357820: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x357820u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x357824: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x357824u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x357828: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x357828u;
    SET_GPR_U32(ctx, 31, 0x357830u);
    ctx->pc = 0x35782Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357828u;
    // 0x35782c: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x357828u, 0x357830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357830u;
label_357830:
    // 0x357830: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x357830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x357834: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x357834u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x357838: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x357838u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x35783c: 0x8e8500a4  lw          $a1, 0xA4($s4)
    ctx->pc = 0x35783cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
    // 0x357840: 0x90a30008  lbu         $v1, 0x8($a1)
    ctx->pc = 0x357840u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x357844: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x357844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x357848: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x357848u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x35784c: 0x1460ffa0  bnez        $v1, . + 4 + (-0x60 << 2)
    ctx->pc = 0x35784Cu;
    {
        const bool branch_taken_0x35784c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x357850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35784Cu;
        // 0x357850: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35784c) {
            ctx->pc = 0x3576D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3576d0;
        }
    }
    ctx->pc = 0x357854u;
    // 0x357854: 0x0  nop
    ctx->pc = 0x357854u;
    // NOP
label_357858:
    // 0x357858: 0x86830054  lh          $v1, 0x54($s4)
    ctx->pc = 0x357858u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x35785c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35785cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x357860: 0xa6830054  sh          $v1, 0x54($s4)
    ctx->pc = 0x357860u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x357864: 0x86830054  lh          $v1, 0x54($s4)
    ctx->pc = 0x357864u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x357868: 0x28637ff0  slti        $v1, $v1, 0x7FF0
    ctx->pc = 0x357868u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x35786c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x35786Cu;
    {
        const bool branch_taken_0x35786c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35786c) {
            ctx->pc = 0x357878u;
            goto label_357878;
        }
    }
    ctx->pc = 0x357874u;
    // 0x357874: 0xa6800054  sh          $zero, 0x54($s4)
    ctx->pc = 0x357874u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 84), (uint16_t)GPR_U32(ctx, 0));
label_357878:
    // 0x357878: 0x92830050  lbu         $v1, 0x50($s4)
    ctx->pc = 0x357878u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x35787c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x35787cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x357880: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x357880u;
    {
        const bool branch_taken_0x357880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x357884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357880u;
        // 0x357884: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357880) {
            ctx->pc = 0x357890u;
            goto label_357890;
        }
    }
    ctx->pc = 0x357888u;
    // 0x357888: 0xc096b58  jal         func_25AD60
    ctx->pc = 0x357888u;
    SET_GPR_U32(ctx, 31, 0x357890u);
    ctx->pc = 0x35788Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357888u;
    // 0x35788c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD60u, 0x357888u, 0x357890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357890u;
label_357890:
    // 0x357890: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x357890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x357894: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x357894u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x357898: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x357898u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35789c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35789cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3578a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3578a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3578a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3578a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3578a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3578a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3578ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3578acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3578b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3578B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3578B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3578B0u;
        // 0x3578b4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3578B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3578B8u;
}
