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

// Function: sub_0033BFA0
// Address: 0x33bfa0 - 0x33c258
void sub_0033BFA0_0x33bfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BFA0_0x33bfa0");
#endif

    switch (ctx->pc) {
        case 0x33bfe8u: goto label_33bfe8;
        case 0x33c0ccu: goto label_33c0cc;
        case 0x33c0dcu: goto label_33c0dc;
        case 0x33c0ecu: goto label_33c0ec;
        case 0x33c120u: goto label_33c120;
        case 0x33c130u: goto label_33c130;
        case 0x33c19cu: goto label_33c19c;
        case 0x33c248u: goto label_33c248;
        default: break;
    }

    ctx->pc = 0x33bfa0u;

    // 0x33bfa0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x33bfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x33bfa4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33bfa8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33bfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33bfac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x33bfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x33bfb0: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x33bfb0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x33bfb4: 0x10c30018  beq         $a2, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x33BFB4u;
    {
        const bool branch_taken_0x33bfb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x33BFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BFB4u;
        // 0x33bfb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bfb4) {
            ctx->pc = 0x33C018u;
            goto label_33c018;
        }
    }
    ctx->pc = 0x33BFBCu;
    // 0x33bfbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33bfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33bfc0: 0x10c3000d  beq         $a2, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x33BFC0u;
    {
        const bool branch_taken_0x33bfc0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x33bfc0) {
            ctx->pc = 0x33BFF8u;
            goto label_33bff8;
        }
    }
    ctx->pc = 0x33BFC8u;
    // 0x33bfc8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x33BFC8u;
    {
        const bool branch_taken_0x33bfc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bfc8) {
            ctx->pc = 0x33BFD8u;
            goto label_33bfd8;
        }
    }
    ctx->pc = 0x33BFD0u;
    // 0x33bfd0: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x33BFD0u;
    {
        const bool branch_taken_0x33bfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bfd0) {
            ctx->pc = 0x33C248u;
            goto label_33c248;
        }
    }
    ctx->pc = 0x33BFD8u;
label_33bfd8:
    // 0x33bfd8: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33BFD8u;
    {
        const bool branch_taken_0x33bfd8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x33bfd8) {
            ctx->pc = 0x33BFE8u;
            goto label_33bfe8;
        }
    }
    ctx->pc = 0x33BFE0u;
    // 0x33bfe0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x33BFE0u;
    SET_GPR_U32(ctx, 31, 0x33BFE8u);
    ctx->pc = 0x33BFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BFE0u;
    // 0x33bfe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x33BFE0u, 0x33BFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BFE8u;
label_33bfe8:
    // 0x33bfe8: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x33bfe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x33bfec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33bfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33bff0: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x33BFF0u;
    {
        const bool branch_taken_0x33bff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BFF0u;
        // 0x33bff4: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bff0) {
            ctx->pc = 0x33C248u;
            goto label_33c248;
        }
    }
    ctx->pc = 0x33BFF8u;
label_33bff8:
    // 0x33bff8: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x33bff8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x33bffc: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x33bffcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x33c000: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x33c000u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x33c004: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x33c004u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x33c008: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x33c008u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x33c00c: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x33c00cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x33c010: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33c010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33c014: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x33c014u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_33c018:
    // 0x33c018: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x33c018u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x33c01c: 0x86020554  lh          $v0, 0x554($s0)
    ctx->pc = 0x33c01cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1364)));
    // 0x33c020: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x33c020u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x33c024: 0x0  nop
    ctx->pc = 0x33c024u;
    // NOP
    // 0x33c028: 0x0  nop
    ctx->pc = 0x33c028u;
    // NOP
    // 0x33c02c: 0x1010  mfhi        $v0
    ctx->pc = 0x33c02cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x33c030: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x33C030u;
    {
        const bool branch_taken_0x33c030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33c030) {
            ctx->pc = 0x33C120u;
            goto label_33c120;
        }
    }
    ctx->pc = 0x33C038u;
    // 0x33c038: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x33c038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x33c03c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x33c03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x33c040: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x33c040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x33c044: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x33c044u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33c048: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33c048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33c04c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x33c04cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x33c050: 0x86030554  lh          $v1, 0x554($s0)
    ctx->pc = 0x33c050u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1364)));
    // 0x33c054: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x33c054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x33c058: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33c058u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c05c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x33c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x33c060: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33C060u;
    {
        const bool branch_taken_0x33c060 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x33C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C060u;
        // 0x33c064: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c060) {
            ctx->pc = 0x33C074u;
            goto label_33c074;
        }
    }
    ctx->pc = 0x33C068u;
    // 0x33c068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33c068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c06c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33C06Cu;
    {
        const bool branch_taken_0x33c06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C06Cu;
        // 0x33c070: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c06c) {
            ctx->pc = 0x33C090u;
            goto label_33c090;
        }
    }
    ctx->pc = 0x33C074u;
label_33c074:
    // 0x33c074: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x33c074u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x33c078: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33c078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x33c07c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33c07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33c080: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33c080u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c084: 0x0  nop
    ctx->pc = 0x33c084u;
    // NOP
    // 0x33c088: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x33c088u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33c08c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x33c08cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_33c090:
    // 0x33c090: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x33c090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x33c094: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x33c094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x33c098: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x33c098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x33c09c: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x33c09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x33c0a0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x33c0a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33c0a4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x33c0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x33c0a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33c0a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c0ac: 0x0  nop
    ctx->pc = 0x33c0acu;
    // NOP
    // 0x33c0b0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x33c0b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x33c0b4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x33c0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33c0b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x33c0b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33c0bc: 0x46001842  mul.s       $f1, $f3, $f0
    ctx->pc = 0x33c0bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x33c0c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33c0c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c0c4: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x33C0C4u;
    SET_GPR_U32(ctx, 31, 0x33C0CCu);
    ctx->pc = 0x33C0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C0C4u;
    // 0x33c0c8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x33C0C4u, 0x33C0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C0CCu;
label_33c0cc:
    // 0x33c0cc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x33c0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33c0d0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x33c0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x33c0d4: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x33C0D4u;
    SET_GPR_U32(ctx, 31, 0x33C0DCu);
    ctx->pc = 0x33C0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C0D4u;
    // 0x33c0d8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x33C0D4u, 0x33C0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C0DCu;
label_33c0dc:
    // 0x33c0dc: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x33c0dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x33c0e0: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x33c0e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x33c0e4: 0xc0aa034  jal         func_2A80D0
    ctx->pc = 0x33C0E4u;
    SET_GPR_U32(ctx, 31, 0x33C0ECu);
    ctx->pc = 0x33C0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C0E4u;
    // 0x33c0e8: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A80D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A80D0u, 0x33C0E4u, 0x33C0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C0ECu;
label_33c0ec:
    // 0x33c0ec: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x33c0ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x33c0f0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x33c0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x33c0f4: 0x3c022f00  lui         $v0, 0x2F00
    ctx->pc = 0x33c0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12032 << 16));
    // 0x33c0f8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x33c0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x33c0fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33c0fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c100: 0x34454602  ori         $a1, $v0, 0x4602
    ctx->pc = 0x33c100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17922);
    // 0x33c104: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x33c104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x33c108: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x33c108u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c10c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x33c10cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c110: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x33c110u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c114: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x33c114u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c118: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x33C118u;
    SET_GPR_U32(ctx, 31, 0x33C120u);
    ctx->pc = 0x33C11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C118u;
    // 0x33c11c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x33C118u, 0x33C120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C120u;
label_33c120:
    // 0x33c120: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x33c120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x33c124: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x33c124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c128: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x33C128u;
    SET_GPR_U32(ctx, 31, 0x33C130u);
    ctx->pc = 0x33C12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C128u;
    // 0x33c12c: 0x26060090  addiu       $a2, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x33C128u, 0x33C130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C130u;
label_33c130:
    // 0x33c130: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x33c130u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x33c134: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x33C134u;
    {
        const bool branch_taken_0x33c134 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x33C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C134u;
        // 0x33c138: 0x28617531  slti        $at, $v1, 0x7531 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30001) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c134) {
            ctx->pc = 0x33C1A0u;
            goto label_33c1a0;
        }
    }
    ctx->pc = 0x33C13Cu;
    // 0x33c13c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x33C13Cu;
    {
        const bool branch_taken_0x33c13c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c13c) {
            ctx->pc = 0x33C1A0u;
            goto label_33c1a0;
        }
    }
    ctx->pc = 0x33C144u;
    // 0x33c144: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x33c144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x33c148: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x33c148u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33c14c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x33c14cu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x33c150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c154: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x33c154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33c158: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33c158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c15c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x33c15cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x33c160: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x33c160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
    // 0x33c164: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x33c164u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x33c168: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x33c168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x33c16c: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x33c16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
    // 0x33c170: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x33c170u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x33c174: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x33c174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x33c178: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x33c178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x33c17c: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x33c17cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x33c180: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x33c180u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x33c184: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x33c184u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x33c188: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x33c188u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x33c18c: 0x92060556  lbu         $a2, 0x556($s0)
    ctx->pc = 0x33c18cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1366)));
    // 0x33c190: 0xc60c0550  lwc1        $f12, 0x550($s0)
    ctx->pc = 0x33c190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33c194: 0xc0c0900  jal         func_302400
    ctx->pc = 0x33C194u;
    SET_GPR_U32(ctx, 31, 0x33C19Cu);
    ctx->pc = 0x33C198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C194u;
    // 0x33c198: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x33C194u, 0x33C19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C19Cu;
label_33c19c:
    // 0x33c19c: 0x0  nop
    ctx->pc = 0x33c19cu;
    // NOP
label_33c1a0:
    // 0x33c1a0: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x33c1a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x33c1a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33C1A4u;
    {
        const bool branch_taken_0x33c1a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1A4u;
        // 0x33c1a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c1a4) {
            ctx->pc = 0x33C1B8u;
            goto label_33c1b8;
        }
    }
    ctx->pc = 0x33C1ACu;
    // 0x33c1ac: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x33C1ACu;
    {
        const bool branch_taken_0x33c1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c1ac) {
            ctx->pc = 0x33C238u;
            goto label_33c238;
        }
    }
    ctx->pc = 0x33C1B4u;
    // 0x33c1b4: 0x0  nop
    ctx->pc = 0x33c1b4u;
    // NOP
label_33c1b8:
    // 0x33c1b8: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x33c1b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x33c1bc: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x33c1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x33c1c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33c1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33c1c4: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x33c1c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x33c1c8: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x33c1c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x33c1cc: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x33C1CCu;
    {
        const bool branch_taken_0x33c1cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33c1cc) {
            ctx->pc = 0x33C208u;
            goto label_33c208;
        }
    }
    ctx->pc = 0x33C1D4u;
    // 0x33c1d4: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x33c1d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x33c1d8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x33c1d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x33c1dc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x33C1DCu;
    {
        const bool branch_taken_0x33c1dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1DCu;
        // 0x33c1e0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c1dc) {
            ctx->pc = 0x33C230u;
            goto label_33c230;
        }
    }
    ctx->pc = 0x33C1E4u;
    // 0x33c1e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33c1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c1e8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x33c1e8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x33c1ec: 0x0  nop
    ctx->pc = 0x33c1ecu;
    // NOP
    // 0x33c1f0: 0x0  nop
    ctx->pc = 0x33c1f0u;
    // NOP
    // 0x33c1f4: 0x2010  mfhi        $a0
    ctx->pc = 0x33c1f4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x33c1f8: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x33c1f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x33c1fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33C1FCu;
    {
        const bool branch_taken_0x33c1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1FCu;
        // 0x33c200: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c1fc) {
            ctx->pc = 0x33C230u;
            goto label_33c230;
        }
    }
    ctx->pc = 0x33C204u;
    // 0x33c204: 0x0  nop
    ctx->pc = 0x33c204u;
    // NOP
label_33c208:
    // 0x33c208: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x33c208u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x33c20c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x33c20cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x33c210: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x33C210u;
    {
        const bool branch_taken_0x33c210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33c210) {
            ctx->pc = 0x33C230u;
            goto label_33c230;
        }
    }
    ctx->pc = 0x33C218u;
    // 0x33c218: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x33c218u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x33c21c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33c21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c220: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x33c220u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x33c224: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33C224u;
    {
        const bool branch_taken_0x33c224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C224u;
        // 0x33c228: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c224) {
            ctx->pc = 0x33C238u;
            goto label_33c238;
        }
    }
    ctx->pc = 0x33C22Cu;
    // 0x33c22c: 0x0  nop
    ctx->pc = 0x33c22cu;
    // NOP
label_33c230:
    // 0x33c230: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33c230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c234: 0x0  nop
    ctx->pc = 0x33c234u;
    // NOP
label_33c238:
    // 0x33c238: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33C238u;
    {
        const bool branch_taken_0x33c238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C238u;
        // 0x33c23c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c238) {
            ctx->pc = 0x33C248u;
            goto label_33c248;
        }
    }
    ctx->pc = 0x33C240u;
    // 0x33c240: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x33C240u;
    SET_GPR_U32(ctx, 31, 0x33C248u);
    ctx->pc = 0x33C244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C240u;
    // 0x33c244: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x33C240u, 0x33C248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C248u;
label_33c248:
    // 0x33c248: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33c248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33c24c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x33c24cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33c250: 0x3e00008  jr          $ra
    ctx->pc = 0x33C250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C250u;
        // 0x33c254: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C258u;
}
