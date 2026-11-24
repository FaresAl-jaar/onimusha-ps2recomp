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

// Function: sub_003008E0
// Address: 0x3008e0 - 0x3009cc
void sub_003008E0_0x3008e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003008E0_0x3008e0");
#endif

    switch (ctx->pc) {
        case 0x300930u: goto label_300930;
        case 0x300958u: goto label_300958;
        case 0x300980u: goto label_300980;
        default: break;
    }

    ctx->pc = 0x3008e0u;

    // 0x3008e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3008e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3008e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3008e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3008e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3008e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3008ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3008ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3008f0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3008f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3008f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3008f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3008f8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3008f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3008fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3008fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x300900: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x300900u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300904: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x300904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x300908: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x300908u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30090c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x30090cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300910: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300914: 0x3c080030  lui         $t0, 0x30
    ctx->pc = 0x300914u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)48 << 16));
    // 0x300918: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30091c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30091cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300920: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x300920u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x300924: 0x25080870  addiu       $t0, $t0, 0x870
    ctx->pc = 0x300924u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2160));
    // 0x300928: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x300928u;
    SET_GPR_U32(ctx, 31, 0x300930u);
    ctx->pc = 0x30092Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300928u;
    // 0x30092c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x300928u, 0x300930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300930u;
label_300930:
    // 0x300930: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x300930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300934: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x300934u;
    {
        const bool branch_taken_0x300934 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x300938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300934u;
        // 0x300938: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300934) {
            ctx->pc = 0x3009A0u;
            goto label_3009a0;
        }
    }
    ctx->pc = 0x30093Cu;
    // 0x30093c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x30093cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300940: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x300940u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300944: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x300944u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x300948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30094c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x30094cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x300950: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x300950u;
    SET_GPR_U32(ctx, 31, 0x300958u);
    ctx->pc = 0x300954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300950u;
    // 0x300954: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x300950u, 0x300958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300958u;
label_300958:
    // 0x300958: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x300958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x30095c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x30095cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x300960: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x300960u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x300964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x300964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300968: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x300968u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x30096c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30096cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300970: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x300970u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x300974: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x300974u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x300978: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x300978u;
    SET_GPR_U32(ctx, 31, 0x300980u);
    ctx->pc = 0x30097Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300978u;
    // 0x30097c: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x300978u, 0x300980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300980u;
label_300980:
    // 0x300980: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x300980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x300984: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x300984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x300988: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x300988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x30098c: 0xa2110558  sb          $s1, 0x558($s0)
    ctx->pc = 0x30098cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 17));
    // 0x300990: 0xa2000559  sb          $zero, 0x559($s0)
    ctx->pc = 0x300990u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 0));
    // 0x300994: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x300994u;
    {
        const bool branch_taken_0x300994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300994u;
        // 0x300998: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300994) {
            ctx->pc = 0x3009A8u;
            goto label_3009a8;
        }
    }
    ctx->pc = 0x30099Cu;
    // 0x30099c: 0x0  nop
    ctx->pc = 0x30099cu;
    // NOP
label_3009a0:
    // 0x3009a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3009a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3009a4: 0x0  nop
    ctx->pc = 0x3009a4u;
    // NOP
label_3009a8:
    // 0x3009a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3009a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3009ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3009acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3009b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3009b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3009b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3009b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3009b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3009b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3009bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3009bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3009c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3009c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3009c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3009C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3009C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3009C4u;
        // 0x3009c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3009C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3009CCu;
}
