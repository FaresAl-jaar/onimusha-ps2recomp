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

// Function: sub_003DC010
// Address: 0x3dc010 - 0x3dc258
void sub_003DC010_0x3dc010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC010_0x3dc010");
#endif

    switch (ctx->pc) {
        case 0x3dc0f0u: goto label_3dc0f0;
        case 0x3dc108u: goto label_3dc108;
        case 0x3dc12cu: goto label_3dc12c;
        case 0x3dc158u: goto label_3dc158;
        case 0x3dc170u: goto label_3dc170;
        case 0x3dc1b8u: goto label_3dc1b8;
        case 0x3dc1d0u: goto label_3dc1d0;
        case 0x3dc1f4u: goto label_3dc1f4;
        case 0x3dc220u: goto label_3dc220;
        case 0x3dc238u: goto label_3dc238;
        default: break;
    }

    ctx->pc = 0x3dc010u;

    // 0x3dc010: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3dc010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3dc014: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3dc014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3dc018: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3dc018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3dc01c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3dc01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3dc020: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3dc020u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc024: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3dc024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3dc028: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x3dc028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3dc02c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3dc02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3dc030: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x3dc030u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3dc034: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3dc034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3dc038: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3dc038u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3dc03c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3dc03cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc040: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3dc040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc044: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3dc044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x3dc048: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3dc048u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3dc04c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3dc04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x3dc050: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3dc050u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dc054: 0x1810  mfhi        $v1
    ctx->pc = 0x3dc054u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3dc058: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3dc058u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3dc05c: 0x0  nop
    ctx->pc = 0x3dc05cu;
    // NOP
    // 0x3dc060: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3dc060u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3dc064: 0x46011503  div.s       $f20, $f2, $f1
    ctx->pc = 0x3dc064u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x3dc068: 0x0  nop
    ctx->pc = 0x3dc068u;
    // NOP
    // 0x3dc06c: 0x0  nop
    ctx->pc = 0x3dc06cu;
    // NOP
    // 0x3dc070: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3dc070u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3dc074: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x3DC074u;
    {
        const bool branch_taken_0x3dc074 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DC078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC074u;
        // 0x3dc078: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc074) {
            ctx->pc = 0x3DC098u;
            goto label_3dc098;
        }
    }
    ctx->pc = 0x3DC07Cu;
    // 0x3dc07c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x3dc07cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x3dc080: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3dc080u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dc084: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3dc084u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3dc088: 0x0  nop
    ctx->pc = 0x3dc088u;
    // NOP
    // 0x3dc08c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x3dc08cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x3dc090: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3DC090u;
    {
        const bool branch_taken_0x3dc090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC090u;
        // 0x3dc094: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc090) {
            ctx->pc = 0x3DC0A8u;
            goto label_3dc0a8;
        }
    }
    ctx->pc = 0x3DC098u;
label_3dc098:
    // 0x3dc098: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3dc098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3dc09c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3dc09cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dc0a0: 0x0  nop
    ctx->pc = 0x3dc0a0u;
    // NOP
    // 0x3dc0a4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x3dc0a4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3dc0a8:
    // 0x3dc0a8: 0x9270065c  lbu         $s0, 0x65C($s3)
    ctx->pc = 0x3dc0a8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1628)));
    // 0x3dc0ac: 0x240300fb  addiu       $v1, $zero, 0xFB
    ctx->pc = 0x3dc0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
    // 0x3dc0b0: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3DC0B0u;
    {
        const bool branch_taken_0x3dc0b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DC0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC0B0u;
        // 0x3dc0b4: 0x240300fd  addiu       $v1, $zero, 0xFD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc0b0) {
            ctx->pc = 0x3DC0C8u;
            goto label_3dc0c8;
        }
    }
    ctx->pc = 0x3DC0B8u;
    // 0x3dc0b8: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DC0B8u;
    {
        const bool branch_taken_0x3dc0b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dc0b8) {
            ctx->pc = 0x3DC0C8u;
            goto label_3dc0c8;
        }
    }
    ctx->pc = 0x3DC0C0u;
    // 0x3dc0c0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x3DC0C0u;
    {
        const bool branch_taken_0x3dc0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc0c0) {
            ctx->pc = 0x3DC170u;
            goto label_3dc170;
        }
    }
    ctx->pc = 0x3DC0C8u;
label_3dc0c8:
    // 0x3dc0c8: 0x8e65004c  lw          $a1, 0x4C($s3)
    ctx->pc = 0x3dc0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x3dc0cc: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x3dc0ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x3dc0d0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3dc0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3dc0d4: 0x2442e630  addiu       $v0, $v0, -0x19D0
    ctx->pc = 0x3dc0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960688));
    // 0x3dc0d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3dc0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3dc0dc: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x3dc0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dc0e0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3dc0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3dc0e4: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x3dc0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x3dc0e8: 0xc041442  jal         func_105108
    ctx->pc = 0x3DC0E8u;
    SET_GPR_U32(ctx, 31, 0x3DC0F0u);
    ctx->pc = 0x3DC0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC0E8u;
    // 0x3dc0ec: 0x24450280  addiu       $a1, $v0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x3DC0E8u, 0x3DC0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC0F0u;
label_3dc0f0:
    // 0x3dc0f0: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3DC0F0u;
    {
        const bool branch_taken_0x3dc0f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc0f0) {
            ctx->pc = 0x3DC138u;
            goto label_3dc138;
        }
    }
    ctx->pc = 0x3DC0F8u;
    // 0x3dc0f8: 0x8e6507c0  lw          $a1, 0x7C0($s3)
    ctx->pc = 0x3dc0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1984)));
    // 0x3dc0fc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3dc0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3dc100: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3DC100u;
    SET_GPR_U32(ctx, 31, 0x3DC108u);
    ctx->pc = 0x3DC104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC100u;
    // 0x3dc104: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3DC100u, 0x3DC108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC108u;
label_3dc108:
    // 0x3dc108: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x3dc108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x3dc10c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3dc10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3dc110: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x3dc110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x3dc114: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3dc114u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc118: 0x8e652bdc  lw          $a1, 0x2BDC($s3)
    ctx->pc = 0x3dc118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11228)));
    // 0x3dc11c: 0x8c480088  lw          $t0, 0x88($v0)
    ctx->pc = 0x3dc11cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x3dc120: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x3dc120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x3dc124: 0xc0f6fc0  jal         func_3DBF00
    ctx->pc = 0x3DC124u;
    SET_GPR_U32(ctx, 31, 0x3DC12Cu);
    ctx->pc = 0x3DC128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC124u;
    // 0x3dc128: 0x244602b0  addiu       $a2, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBF00u, 0x3DC124u, 0x3DC12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC12Cu;
label_3dc12c:
    // 0x3dc12c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3DC12Cu;
    {
        const bool branch_taken_0x3dc12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc12c) {
            ctx->pc = 0x3DC158u;
            goto label_3dc158;
        }
    }
    ctx->pc = 0x3DC134u;
    // 0x3dc134: 0x0  nop
    ctx->pc = 0x3dc134u;
    // NOP
label_3dc138:
    // 0x3dc138: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x3dc138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x3dc13c: 0x8e652bdc  lw          $a1, 0x2BDC($s3)
    ctx->pc = 0x3dc13cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11228)));
    // 0x3dc140: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3dc140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3dc144: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3dc144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc148: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3dc148u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3dc14c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3dc14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3dc150: 0xc0f6f88  jal         func_3DBE20
    ctx->pc = 0x3DC150u;
    SET_GPR_U32(ctx, 31, 0x3DC158u);
    ctx->pc = 0x3DC154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC150u;
    // 0x3dc154: 0x244602b0  addiu       $a2, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBE20u, 0x3DC150u, 0x3DC158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC158u;
label_3dc158:
    // 0x3dc158: 0x926408e8  lbu         $a0, 0x8E8($s3)
    ctx->pc = 0x3dc158u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x3dc15c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3dc15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc160: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x3dc160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3dc164: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x3dc164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3dc168: 0xc0bc8c8  jal         func_2F2320
    ctx->pc = 0x3DC168u;
    SET_GPR_U32(ctx, 31, 0x3DC170u);
    ctx->pc = 0x3DC16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC168u;
    // 0x3dc16c: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2320u, 0x3DC168u, 0x3DC170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC170u;
label_3dc170:
    // 0x3dc170: 0x240300fc  addiu       $v1, $zero, 0xFC
    ctx->pc = 0x3dc170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x3dc174: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DC174u;
    {
        const bool branch_taken_0x3dc174 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DC178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC174u;
        // 0x3dc178: 0x240300fd  addiu       $v1, $zero, 0xFD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc174) {
            ctx->pc = 0x3DC190u;
            goto label_3dc190;
        }
    }
    ctx->pc = 0x3DC17Cu;
    // 0x3dc17c: 0x12030004  beq         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DC17Cu;
    {
        const bool branch_taken_0x3dc17c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dc17c) {
            ctx->pc = 0x3DC190u;
            goto label_3dc190;
        }
    }
    ctx->pc = 0x3DC184u;
    // 0x3dc184: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3DC184u;
    {
        const bool branch_taken_0x3dc184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc184) {
            ctx->pc = 0x3DC238u;
            goto label_3dc238;
        }
    }
    ctx->pc = 0x3DC18Cu;
    // 0x3dc18c: 0x0  nop
    ctx->pc = 0x3dc18cu;
    // NOP
label_3dc190:
    // 0x3dc190: 0x8e65004c  lw          $a1, 0x4C($s3)
    ctx->pc = 0x3dc190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x3dc194: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x3dc194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x3dc198: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3dc198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3dc19c: 0x2442e670  addiu       $v0, $v0, -0x1990
    ctx->pc = 0x3dc19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960752));
    // 0x3dc1a0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3dc1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3dc1a4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x3dc1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dc1a8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3dc1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3dc1ac: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x3dc1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x3dc1b0: 0xc041442  jal         func_105108
    ctx->pc = 0x3DC1B0u;
    SET_GPR_U32(ctx, 31, 0x3DC1B8u);
    ctx->pc = 0x3DC1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC1B0u;
    // 0x3dc1b4: 0x244503c0  addiu       $a1, $v0, 0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x3DC1B0u, 0x3DC1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC1B8u;
label_3dc1b8:
    // 0x3dc1b8: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3DC1B8u;
    {
        const bool branch_taken_0x3dc1b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc1b8) {
            ctx->pc = 0x3DC200u;
            goto label_3dc200;
        }
    }
    ctx->pc = 0x3DC1C0u;
    // 0x3dc1c0: 0x8e6507c0  lw          $a1, 0x7C0($s3)
    ctx->pc = 0x3dc1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1984)));
    // 0x3dc1c4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3dc1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3dc1c8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3DC1C8u;
    SET_GPR_U32(ctx, 31, 0x3DC1D0u);
    ctx->pc = 0x3DC1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC1C8u;
    // 0x3dc1cc: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3DC1C8u, 0x3DC1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC1D0u;
label_3dc1d0:
    // 0x3dc1d0: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x3dc1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x3dc1d4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3dc1d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc1d8: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x3dc1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x3dc1dc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3dc1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3dc1e0: 0x8e652bdc  lw          $a1, 0x2BDC($s3)
    ctx->pc = 0x3dc1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11228)));
    // 0x3dc1e4: 0x8c480088  lw          $t0, 0x88($v0)
    ctx->pc = 0x3dc1e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x3dc1e8: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x3dc1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x3dc1ec: 0xc0f6fc0  jal         func_3DBF00
    ctx->pc = 0x3DC1ECu;
    SET_GPR_U32(ctx, 31, 0x3DC1F4u);
    ctx->pc = 0x3DC1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC1ECu;
    // 0x3dc1f0: 0x244603f0  addiu       $a2, $v0, 0x3F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBF00u, 0x3DC1ECu, 0x3DC1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC1F4u;
label_3dc1f4:
    // 0x3dc1f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3DC1F4u;
    {
        const bool branch_taken_0x3dc1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc1f4) {
            ctx->pc = 0x3DC220u;
            goto label_3dc220;
        }
    }
    ctx->pc = 0x3DC1FCu;
    // 0x3dc1fc: 0x0  nop
    ctx->pc = 0x3dc1fcu;
    // NOP
label_3dc200:
    // 0x3dc200: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x3dc200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x3dc204: 0x8e652bdc  lw          $a1, 0x2BDC($s3)
    ctx->pc = 0x3dc204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11228)));
    // 0x3dc208: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3dc208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc20c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3dc20cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3dc210: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3dc210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3dc214: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3dc214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3dc218: 0xc0f6f88  jal         func_3DBE20
    ctx->pc = 0x3DC218u;
    SET_GPR_U32(ctx, 31, 0x3DC220u);
    ctx->pc = 0x3DC21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC218u;
    // 0x3dc21c: 0x244603f0  addiu       $a2, $v0, 0x3F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBE20u, 0x3DC218u, 0x3DC220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC220u;
label_3dc220:
    // 0x3dc220: 0x926408e8  lbu         $a0, 0x8E8($s3)
    ctx->pc = 0x3dc220u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x3dc224: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3dc224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc228: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x3dc228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3dc22c: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x3dc22cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3dc230: 0xc0bc8c8  jal         func_2F2320
    ctx->pc = 0x3DC230u;
    SET_GPR_U32(ctx, 31, 0x3DC238u);
    ctx->pc = 0x3DC234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC230u;
    // 0x3dc234: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2320u, 0x3DC230u, 0x3DC238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC238u;
label_3dc238:
    // 0x3dc238: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3dc238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3dc23c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3dc23cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3dc240: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3dc240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3dc244: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3dc244u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3dc248: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3dc248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dc24c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3dc24cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dc250: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC250u;
        // 0x3dc254: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC258u;
}
