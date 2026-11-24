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

// Function: sub_003C18B0
// Address: 0x3c18b0 - 0x3c19a8
void sub_003C18B0_0x3c18b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C18B0_0x3c18b0");
#endif

    switch (ctx->pc) {
        case 0x3c18e0u: goto label_3c18e0;
        case 0x3c1904u: goto label_3c1904;
        case 0x3c1914u: goto label_3c1914;
        case 0x3c192cu: goto label_3c192c;
        case 0x3c1964u: goto label_3c1964;
        default: break;
    }

    ctx->pc = 0x3c18b0u;

    // 0x3c18b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3c18b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3c18b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3c18b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3c18b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c18b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3c18bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c18bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c18c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c18c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c18c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c18c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3c18c8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3c18c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c18cc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3c18ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3c18d0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3c18d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c18d4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3c18d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3c18d8: 0xc041472  jal         func_1051C8
    ctx->pc = 0x3C18D8u;
    SET_GPR_U32(ctx, 31, 0x3C18E0u);
    ctx->pc = 0x3C18DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C18D8u;
    // 0x3c18dc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x3C18D8u, 0x3C18E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C18E0u;
label_3c18e0:
    // 0x3c18e0: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3c18e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x3c18e4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3c18e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3c18e8: 0xc64000a0  lwc1        $f0, 0xA0($s2)
    ctx->pc = 0x3c18e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c18ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3c18ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c18f0: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x3c18f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x3c18f4: 0x0  nop
    ctx->pc = 0x3c18f4u;
    // NOP
    // 0x3c18f8: 0x0  nop
    ctx->pc = 0x3c18f8u;
    // NOP
    // 0x3c18fc: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3C18FCu;
    SET_GPR_U32(ctx, 31, 0x3C1904u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3C18FCu, 0x3C1904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1904u;
label_3c1904:
    // 0x3c1904: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3C1904u;
    {
        const bool branch_taken_0x3c1904 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1904u;
        // 0x3c1908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1904) {
            ctx->pc = 0x3C1948u;
            goto label_3c1948;
        }
    }
    ctx->pc = 0x3C190Cu;
    // 0x3c190c: 0xc0f020c  jal         func_3C0830
    ctx->pc = 0x3C190Cu;
    SET_GPR_U32(ctx, 31, 0x3C1914u);
    ctx->pc = 0x3C0830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0830u, 0x3C190Cu, 0x3C1914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1914u;
label_3c1914:
    // 0x3c1914: 0x86460086  lh          $a2, 0x86($s2)
    ctx->pc = 0x3c1914u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 134)));
    // 0x3c1918: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3c1918u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c191c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c191cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1920: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3c1920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3c1924: 0xc0f0218  jal         func_3C0860
    ctx->pc = 0x3C1924u;
    SET_GPR_U32(ctx, 31, 0x3C192Cu);
    ctx->pc = 0x3C1928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1924u;
    // 0x3c1928: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0860u, 0x3C1924u, 0x3C192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C192Cu;
label_3c192c:
    // 0x3c192c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x3c192cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3c1930: 0x3042fff0  andi        $v0, $v0, 0xFFF0
    ctx->pc = 0x3c1930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65520);
    // 0x3c1934: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x3c1934u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c1938: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x3c1938u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3c193c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3c193cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3c1940: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3C1940u;
    {
        const bool branch_taken_0x3c1940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1940u;
        // 0x3c1944: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1940) {
            ctx->pc = 0x3C1988u;
            goto label_3c1988;
        }
    }
    ctx->pc = 0x3C1948u;
label_3c1948:
    // 0x3c1948: 0x96470086  lhu         $a3, 0x86($s2)
    ctx->pc = 0x3c1948u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 134)));
    // 0x3c194c: 0x8e4400b8  lw          $a0, 0xB8($s2)
    ctx->pc = 0x3c194cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x3c1950: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x3c1950u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1954: 0x924500bc  lbu         $a1, 0xBC($s2)
    ctx->pc = 0x3c1954u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x3c1958: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3c1958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3c195c: 0xc0f0750  jal         func_3C1D40
    ctx->pc = 0x3C195Cu;
    SET_GPR_U32(ctx, 31, 0x3C1964u);
    ctx->pc = 0x3C1960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C195Cu;
    // 0x3c1960: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1D40u, 0x3C195Cu, 0x3C1964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1964u;
label_3c1964:
    // 0x3c1964: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c1964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1968: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C1968u;
    {
        const bool branch_taken_0x3c1968 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1968) {
            ctx->pc = 0x3C1988u;
            goto label_3c1988;
        }
    }
    ctx->pc = 0x3C1970u;
    // 0x3c1970: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x3c1970u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3c1974: 0x3042fff0  andi        $v0, $v0, 0xFFF0
    ctx->pc = 0x3c1974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65520);
    // 0x3c1978: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x3c1978u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c197c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x3c197cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3c1980: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3c1980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3c1984: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x3c1984u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_3c1988:
    // 0x3c1988: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3c1988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c198c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3c198cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c1990: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3c1990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c1994: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c1994u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c1998: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c1998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c199c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c199cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c19a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C19A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C19A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C19A0u;
        // 0x3c19a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C19A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C19A8u;
}
