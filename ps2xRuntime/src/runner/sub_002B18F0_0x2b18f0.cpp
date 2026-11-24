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

// Function: sub_002B18F0
// Address: 0x2b18f0 - 0x2b19e0
void sub_002B18F0_0x2b18f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B18F0_0x2b18f0");
#endif

    switch (ctx->pc) {
        case 0x2b194cu: goto label_2b194c;
        case 0x2b198cu: goto label_2b198c;
        case 0x2b19b0u: goto label_2b19b0;
        default: break;
    }

    ctx->pc = 0x2b18f0u;

    // 0x2b18f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b18f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2b18f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2b18f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2b18f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2b18f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2b18fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2b18fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2b1900: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x2b1900u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1904: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2b1904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2b1908: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x2b1908u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b190c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2b190cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2b1910: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2b1910u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1914: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2b1914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2b1918: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2b1918u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b191c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b191cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b1920: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2b1920u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1924: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b1924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b1928: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2b1928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2b192c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b192cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b1930: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2b1930u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1934: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2b1934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1938: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x2b1938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b193c: 0x24845a80  addiu       $a0, $a0, 0x5A80
    ctx->pc = 0x2b193cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    // 0x2b1940: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b1940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1944: 0xc0ad0bc  jal         func_2B42F0
    ctx->pc = 0x2B1944u;
    SET_GPR_U32(ctx, 31, 0x2B194Cu);
    ctx->pc = 0x2B1948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1944u;
    // 0x2b1948: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B42F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B42F0u, 0x2B1944u, 0x2B194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B194Cu;
label_2b194c:
    // 0x2b194c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b194cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1950: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B1950u;
    {
        const bool branch_taken_0x2b1950 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1950) {
            ctx->pc = 0x2B19B0u;
            goto label_2b19b0;
        }
    }
    ctx->pc = 0x2B1958u;
    // 0x2b1958: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2b1958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2b195c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2b195cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1960: 0xa2000038  sb          $zero, 0x38($s0)
    ctx->pc = 0x2b1960u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b1964: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2b1964u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1968: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2b1968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2b196c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x2b196cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1970: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x2b1970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
    // 0x2b1974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b1974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1978: 0x87a900a0  lh          $t1, 0xA0($sp)
    ctx->pc = 0x2b1978u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b197c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b197cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1980: 0x87aa00a8  lh          $t2, 0xA8($sp)
    ctx->pc = 0x2b1980u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2b1984: 0xc0ac630  jal         func_2B18C0
    ctx->pc = 0x2B1984u;
    SET_GPR_U32(ctx, 31, 0x2B198Cu);
    ctx->pc = 0x2B1988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1984u;
    // 0x2b1988: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B18C0u, 0x2B1984u, 0x2B198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B198Cu;
label_2b198c:
    // 0x2b198c: 0x87a900a0  lh          $t1, 0xA0($sp)
    ctx->pc = 0x2b198cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b1990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b1990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1994: 0x87aa00a8  lh          $t2, 0xA8($sp)
    ctx->pc = 0x2b1994u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2b1998: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b1998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b199c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2b199cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b19a0: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x2b19a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b19a4: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x2b19a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b19a8: 0xc0ac630  jal         func_2B18C0
    ctx->pc = 0x2B19A8u;
    SET_GPR_U32(ctx, 31, 0x2B19B0u);
    ctx->pc = 0x2B19ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B19A8u;
    // 0x2b19ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B18C0u, 0x2B19A8u, 0x2B19B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B19B0u;
label_2b19b0:
    // 0x2b19b0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2b19b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b19b4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2b19b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b19b8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2b19b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b19bc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2b19bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b19c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2b19c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b19c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2b19c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b19c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b19c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b19cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b19ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b19d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b19d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b19d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b19d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b19d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B19D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B19DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B19D8u;
        // 0x2b19dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B19D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B19E0u;
}
