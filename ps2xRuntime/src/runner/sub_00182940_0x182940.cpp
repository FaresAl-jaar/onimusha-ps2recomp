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

// Function: sub_00182940
// Address: 0x182940 - 0x1829c4
void sub_00182940_0x182940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182940_0x182940");
#endif

    switch (ctx->pc) {
        case 0x182964u: goto label_182964;
        default: break;
    }

    ctx->pc = 0x182940u;

    // 0x182940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x182940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x182944: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x182944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x182948: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x182948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18294c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18294cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x182950: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x182950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182954: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x182958: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x182958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18295c: 0xc0600c0  jal         func_180300
    ctx->pc = 0x18295Cu;
    SET_GPR_U32(ctx, 31, 0x182964u);
    ctx->pc = 0x182960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18295Cu;
    // 0x182960: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180300u, 0x18295Cu, 0x182964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182964u;
label_182964:
    // 0x182964: 0xfe4001d0  sd          $zero, 0x1D0($s2)
    ctx->pc = 0x182964u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 464), GPR_U64(ctx, 0));
    // 0x182968: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x182968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x18296c: 0xfe4001d8  sd          $zero, 0x1D8($s2)
    ctx->pc = 0x18296cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 472), GPR_U64(ctx, 0));
    // 0x182970: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x182970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x182974: 0xae4001e0  sw          $zero, 0x1E0($s2)
    ctx->pc = 0x182974u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 480), GPR_U32(ctx, 0));
    // 0x182978: 0xae4001e4  sw          $zero, 0x1E4($s2)
    ctx->pc = 0x182978u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 484), GPR_U32(ctx, 0));
    // 0x18297c: 0xae4001e8  sw          $zero, 0x1E8($s2)
    ctx->pc = 0x18297cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 488), GPR_U32(ctx, 0));
    // 0x182980: 0xae4001ec  sw          $zero, 0x1EC($s2)
    ctx->pc = 0x182980u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 492), GPR_U32(ctx, 0));
    // 0x182984: 0xae4001f0  sw          $zero, 0x1F0($s2)
    ctx->pc = 0x182984u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 496), GPR_U32(ctx, 0));
    // 0x182988: 0xae4401f4  sw          $a0, 0x1F4($s2)
    ctx->pc = 0x182988u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 500), GPR_U32(ctx, 4));
    // 0x18298c: 0xa25101f8  sb          $s1, 0x1F8($s2)
    ctx->pc = 0x18298cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 504), (uint8_t)GPR_U32(ctx, 17));
    // 0x182990: 0xa25001f9  sb          $s0, 0x1F9($s2)
    ctx->pc = 0x182990u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 505), (uint8_t)GPR_U32(ctx, 16));
    // 0x182994: 0xa24001fa  sb          $zero, 0x1FA($s2)
    ctx->pc = 0x182994u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 506), (uint8_t)GPR_U32(ctx, 0));
    // 0x182998: 0xa24301fb  sb          $v1, 0x1FB($s2)
    ctx->pc = 0x182998u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 507), (uint8_t)GPR_U32(ctx, 3));
    // 0x18299c: 0xa24301fc  sb          $v1, 0x1FC($s2)
    ctx->pc = 0x18299cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 508), (uint8_t)GPR_U32(ctx, 3));
    // 0x1829a0: 0xa24301fd  sb          $v1, 0x1FD($s2)
    ctx->pc = 0x1829a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 509), (uint8_t)GPR_U32(ctx, 3));
    // 0x1829a4: 0xa24301fe  sb          $v1, 0x1FE($s2)
    ctx->pc = 0x1829a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 510), (uint8_t)GPR_U32(ctx, 3));
    // 0x1829a8: 0xa24301ff  sb          $v1, 0x1FF($s2)
    ctx->pc = 0x1829a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 511), (uint8_t)GPR_U32(ctx, 3));
    // 0x1829ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1829acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1829b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1829b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1829b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1829b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1829b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1829b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1829bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1829BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1829C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1829BCu;
        // 0x1829c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1829BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1829C4u;
}
