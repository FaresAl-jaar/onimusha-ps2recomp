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

// Function: sub_001C2970
// Address: 0x1c2970 - 0x1c30f8
void sub_001C2970_0x1c2970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2970_0x1c2970");
#endif

    switch (ctx->pc) {
        case 0x1c29acu: goto label_1c29ac;
        case 0x1c29c8u: goto label_1c29c8;
        case 0x1c2b40u: goto label_1c2b40;
        case 0x1c2d00u: goto label_1c2d00;
        case 0x1c2ed4u: goto label_1c2ed4;
        case 0x1c2ee0u: goto label_1c2ee0;
        case 0x1c2f24u: goto label_1c2f24;
        case 0x1c2f64u: goto label_1c2f64;
        case 0x1c2f6cu: goto label_1c2f6c;
        case 0x1c2f98u: goto label_1c2f98;
        case 0x1c2fa8u: goto label_1c2fa8;
        case 0x1c2fb8u: goto label_1c2fb8;
        case 0x1c2fc8u: goto label_1c2fc8;
        case 0x1c3010u: goto label_1c3010;
        case 0x1c3058u: goto label_1c3058;
        case 0x1c306cu: goto label_1c306c;
        case 0x1c3090u: goto label_1c3090;
        case 0x1c30a0u: goto label_1c30a0;
        case 0x1c30b8u: goto label_1c30b8;
        default: break;
    }

    ctx->pc = 0x1c2970u;

    // 0x1c2970: 0x27bdfba0  addiu       $sp, $sp, -0x460
    ctx->pc = 0x1c2970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966176));
    // 0x1c2974: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c2974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c2978: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c2978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c297c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c297cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c2980: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c2980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c2984: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c2984u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c2988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c298c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c298cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2990: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c2990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c2994: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c2994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2998: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1c2998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c299c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c299cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c29a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c29a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c29a4: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1C29A4u;
    SET_GPR_U32(ctx, 31, 0x1C29ACu);
    ctx->pc = 0x1C29A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C29A4u;
    // 0x1c29a8: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1C29A4u, 0x1C29ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C29ACu;
label_1c29ac:
    // 0x1c29ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c29acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c29b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c29b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c29b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c29b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c29b8: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x1c29b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c29bc: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1c29bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1c29c0: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x1c29c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
    // 0x1c29c4: 0x0  nop
    ctx->pc = 0x1c29c4u;
    // NOP
label_1c29c8:
    // 0x1c29c8: 0xc54021  addu        $t0, $a2, $a1
    ctx->pc = 0x1c29c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1c29cc: 0x884821  addu        $t1, $a0, $t0
    ctx->pc = 0x1c29ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1c29d0: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x1c29d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1c29d4: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x1c29d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1c29d8: 0x85400  sll         $t2, $t0, 16
    ctx->pc = 0x1c29d8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x1c29dc: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x1c29dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x1c29e0: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x1c29e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1c29e4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1c29e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1c29e8: 0x25090100  addiu       $t1, $t0, 0x100
    ctx->pc = 0x1c29e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 256));
    // 0x1c29ec: 0x1495021  addu        $t2, $t2, $t1
    ctx->pc = 0x1c29ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1c29f0: 0x24c80002  addiu       $t0, $a2, 0x2
    ctx->pc = 0x1c29f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1c29f4: 0x84c00  sll         $t1, $t0, 16
    ctx->pc = 0x1c29f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x1c29f8: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x1c29f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1c29fc: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x1c29fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1c2a00: 0xac6a0004  sw          $t2, 0x4($v1)
    ctx->pc = 0x1c2a00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 10));
    // 0x1c2a04: 0x25080200  addiu       $t0, $t0, 0x200
    ctx->pc = 0x1c2a04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 512));
    // 0x1c2a08: 0x1284821  addu        $t1, $t1, $t0
    ctx->pc = 0x1c2a08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1c2a0c: 0x24c80003  addiu       $t0, $a2, 0x3
    ctx->pc = 0x1c2a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1c2a10: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x1c2a10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1c2a14: 0x85400  sll         $t2, $t0, 16
    ctx->pc = 0x1c2a14u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x1c2a18: 0xac690008  sw          $t1, 0x8($v1)
    ctx->pc = 0x1c2a18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 9));
    // 0x1c2a1c: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x1c2a1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1c2a20: 0x25090300  addiu       $t1, $t0, 0x300
    ctx->pc = 0x1c2a20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 768));
    // 0x1c2a24: 0x1495021  addu        $t2, $t2, $t1
    ctx->pc = 0x1c2a24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1c2a28: 0x24c80004  addiu       $t0, $a2, 0x4
    ctx->pc = 0x1c2a28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1c2a2c: 0x84c00  sll         $t1, $t0, 16
    ctx->pc = 0x1c2a2cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x1c2a30: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x1c2a30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1c2a34: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x1c2a34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1c2a38: 0xac6a000c  sw          $t2, 0xC($v1)
    ctx->pc = 0x1c2a38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 10));
    // 0x1c2a3c: 0x25080400  addiu       $t0, $t0, 0x400
    ctx->pc = 0x1c2a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1024));
    // 0x1c2a40: 0x1284821  addu        $t1, $t1, $t0
    ctx->pc = 0x1c2a40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1c2a44: 0x24c80005  addiu       $t0, $a2, 0x5
    ctx->pc = 0x1c2a44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x1c2a48: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x1c2a48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1c2a4c: 0x85400  sll         $t2, $t0, 16
    ctx->pc = 0x1c2a4cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x1c2a50: 0xac690010  sw          $t1, 0x10($v1)
    ctx->pc = 0x1c2a50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 9));
    // 0x1c2a54: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x1c2a54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1c2a58: 0x25090500  addiu       $t1, $t0, 0x500
    ctx->pc = 0x1c2a58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 1280));
    // 0x1c2a5c: 0x1495021  addu        $t2, $t2, $t1
    ctx->pc = 0x1c2a5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1c2a60: 0x24c80006  addiu       $t0, $a2, 0x6
    ctx->pc = 0x1c2a60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x1c2a64: 0x84c00  sll         $t1, $t0, 16
    ctx->pc = 0x1c2a64u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x1c2a68: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x1c2a68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1c2a6c: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x1c2a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1c2a70: 0xac6a0014  sw          $t2, 0x14($v1)
    ctx->pc = 0x1c2a70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 10));
    // 0x1c2a74: 0x25080600  addiu       $t0, $t0, 0x600
    ctx->pc = 0x1c2a74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1536));
    // 0x1c2a78: 0x1284821  addu        $t1, $t1, $t0
    ctx->pc = 0x1c2a78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1c2a7c: 0x24c80007  addiu       $t0, $a2, 0x7
    ctx->pc = 0x1c2a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x1c2a80: 0x1225021  addu        $t2, $t1, $v0
    ctx->pc = 0x1c2a80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1c2a84: 0x84c00  sll         $t1, $t0, 16
    ctx->pc = 0x1c2a84u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x1c2a88: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1c2a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1c2a8c: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x1c2a8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1c2a90: 0xac6a0018  sw          $t2, 0x18($v1)
    ctx->pc = 0x1c2a90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 10));
    // 0x1c2a94: 0x25080700  addiu       $t0, $t0, 0x700
    ctx->pc = 0x1c2a94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1792));
    // 0x1c2a98: 0x2cc10079  sltiu       $at, $a2, 0x79
    ctx->pc = 0x1c2a98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)121) ? 1 : 0);
    // 0x1c2a9c: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x1c2a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1c2aa0: 0x24a50800  addiu       $a1, $a1, 0x800
    ctx->pc = 0x1c2aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2048));
    // 0x1c2aa4: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x1c2aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1c2aa8: 0xac68001c  sw          $t0, 0x1C($v1)
    ctx->pc = 0x1c2aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 8));
    // 0x1c2aac: 0x1420ffc6  bnez        $at, . + 4 + (-0x3A << 2)
    ctx->pc = 0x1C2AACu;
    {
        const bool branch_taken_0x1c2aac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2AACu;
        // 0x1c2ab0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2aac) {
            ctx->pc = 0x1C29C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c29c8;
        }
    }
    ctx->pc = 0x1C2AB4u;
    // 0x1c2ab4: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x1c2ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1c2ab8: 0x62c00  sll         $a1, $a2, 16
    ctx->pc = 0x1c2ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1c2abc: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x1c2abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1c2ac0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1c2ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c2ac4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1c2ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1c2ac8: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x1c2ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1c2acc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1c2accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c2ad0: 0x3443ff00  ori         $v1, $v0, 0xFF00
    ctx->pc = 0x1c2ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x1c2ad4: 0xac850060  sw          $a1, 0x60($a0)
    ctx->pc = 0x1c2ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 5));
    // 0x1c2ad8: 0x3c02ff20  lui         $v0, 0xFF20
    ctx->pc = 0x1c2ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65312 << 16));
    // 0x1c2adc: 0xafa30440  sw          $v1, 0x440($sp)
    ctx->pc = 0x1c2adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 3));
    // 0x1c2ae0: 0x3442ff20  ori         $v0, $v0, 0xFF20
    ctx->pc = 0x1c2ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65312);
    // 0x1c2ae4: 0xafa20444  sw          $v0, 0x444($sp)
    ctx->pc = 0x1c2ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1092), GPR_U32(ctx, 2));
    // 0x1c2ae8: 0x3c02ff40  lui         $v0, 0xFF40
    ctx->pc = 0x1c2ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65344 << 16));
    // 0x1c2aec: 0x3443ff40  ori         $v1, $v0, 0xFF40
    ctx->pc = 0x1c2aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65344);
    // 0x1c2af0: 0x3c02ff60  lui         $v0, 0xFF60
    ctx->pc = 0x1c2af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65376 << 16));
    // 0x1c2af4: 0xafa30448  sw          $v1, 0x448($sp)
    ctx->pc = 0x1c2af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1096), GPR_U32(ctx, 3));
    // 0x1c2af8: 0x3442ff60  ori         $v0, $v0, 0xFF60
    ctx->pc = 0x1c2af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65376);
    // 0x1c2afc: 0xafa2044c  sw          $v0, 0x44C($sp)
    ctx->pc = 0x1c2afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1100), GPR_U32(ctx, 2));
    // 0x1c2b00: 0x3c02ff80  lui         $v0, 0xFF80
    ctx->pc = 0x1c2b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65408 << 16));
    // 0x1c2b04: 0x3443ff80  ori         $v1, $v0, 0xFF80
    ctx->pc = 0x1c2b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x1c2b08: 0x3c02ffa0  lui         $v0, 0xFFA0
    ctx->pc = 0x1c2b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65440 << 16));
    // 0x1c2b0c: 0xafa30450  sw          $v1, 0x450($sp)
    ctx->pc = 0x1c2b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 3));
    // 0x1c2b10: 0x3442ffa0  ori         $v0, $v0, 0xFFA0
    ctx->pc = 0x1c2b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65440);
    // 0x1c2b14: 0xafa20454  sw          $v0, 0x454($sp)
    ctx->pc = 0x1c2b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1108), GPR_U32(ctx, 2));
    // 0x1c2b18: 0x3c02ffc0  lui         $v0, 0xFFC0
    ctx->pc = 0x1c2b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65472 << 16));
    // 0x1c2b1c: 0x3443ffc0  ori         $v1, $v0, 0xFFC0
    ctx->pc = 0x1c2b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x1c2b20: 0x3c02ffe0  lui         $v0, 0xFFE0
    ctx->pc = 0x1c2b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65504 << 16));
    // 0x1c2b24: 0xafa30458  sw          $v1, 0x458($sp)
    ctx->pc = 0x1c2b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1112), GPR_U32(ctx, 3));
    // 0x1c2b28: 0x3442ffe0  ori         $v0, $v0, 0xFFE0
    ctx->pc = 0x1c2b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65504);
    // 0x1c2b2c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1c2b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1c2b30: 0xafa2045c  sw          $v0, 0x45C($sp)
    ctx->pc = 0x1c2b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1116), GPR_U32(ctx, 2));
    // 0x1c2b34: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1c2b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1c2b38: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1c2b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1c2b3c: 0x0  nop
    ctx->pc = 0x1c2b3cu;
    // NOP
label_1c2b40:
    // 0x1c2b40: 0x2465ffc4  addiu       $a1, $v1, -0x3C
    ctx->pc = 0x1c2b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
    // 0x1c2b44: 0x52240  sll         $a0, $a1, 9
    ctx->pc = 0x1c2b44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 9));
    // 0x1c2b48: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x1c2b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c2b4c: 0x52c40  sll         $a1, $a1, 17
    ctx->pc = 0x1c2b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 17));
    // 0x1c2b50: 0x34640080  ori         $a0, $v1, 0x80
    ctx->pc = 0x1c2b50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1c2b54: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1c2b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1c2b58: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c2b58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c2b5c: 0x2466ffc5  addiu       $a2, $v1, -0x3B
    ctx->pc = 0x1c2b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967237));
    // 0x1c2b60: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x1c2b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x1c2b64: 0xac850060  sw          $a1, 0x60($a0)
    ctx->pc = 0x1c2b64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 5));
    // 0x1c2b68: 0x62240  sll         $a0, $a2, 9
    ctx->pc = 0x1c2b68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
    // 0x1c2b6c: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1c2b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c2b70: 0x62440  sll         $a0, $a2, 17
    ctx->pc = 0x1c2b70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 17));
    // 0x1c2b74: 0xa44021  addu        $t0, $a1, $a0
    ctx->pc = 0x1c2b74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c2b78: 0x2466ffc6  addiu       $a2, $v1, -0x3A
    ctx->pc = 0x1c2b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967238));
    // 0x1c2b7c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1c2b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c2b80: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x1c2b80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x1c2b84: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1c2b84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c2b88: 0xbd3821  addu        $a3, $a1, $sp
    ctx->pc = 0x1c2b88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x1c2b8c: 0x62240  sll         $a0, $a2, 9
    ctx->pc = 0x1c2b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
    // 0x1c2b90: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1c2b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c2b94: 0xace80060  sw          $t0, 0x60($a3)
    ctx->pc = 0x1c2b94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 8));
    // 0x1c2b98: 0x62440  sll         $a0, $a2, 17
    ctx->pc = 0x1c2b98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 17));
    // 0x1c2b9c: 0xa44021  addu        $t0, $a1, $a0
    ctx->pc = 0x1c2b9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c2ba0: 0x2466ffc7  addiu       $a2, $v1, -0x39
    ctx->pc = 0x1c2ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967239));
    // 0x1c2ba4: 0x24640002  addiu       $a0, $v1, 0x2
    ctx->pc = 0x1c2ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1c2ba8: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x1c2ba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x1c2bac: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1c2bacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c2bb0: 0xbd3821  addu        $a3, $a1, $sp
    ctx->pc = 0x1c2bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x1c2bb4: 0x62240  sll         $a0, $a2, 9
    ctx->pc = 0x1c2bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
    // 0x1c2bb8: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1c2bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c2bbc: 0xace80060  sw          $t0, 0x60($a3)
    ctx->pc = 0x1c2bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 8));
    // 0x1c2bc0: 0x62440  sll         $a0, $a2, 17
    ctx->pc = 0x1c2bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 17));
    // 0x1c2bc4: 0xa44021  addu        $t0, $a1, $a0
    ctx->pc = 0x1c2bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c2bc8: 0x2466ffc8  addiu       $a2, $v1, -0x38
    ctx->pc = 0x1c2bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967240));
    // 0x1c2bcc: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x1c2bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1c2bd0: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x1c2bd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x1c2bd4: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1c2bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c2bd8: 0xbd3821  addu        $a3, $a1, $sp
    ctx->pc = 0x1c2bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x1c2bdc: 0x62240  sll         $a0, $a2, 9
    ctx->pc = 0x1c2bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
    // 0x1c2be0: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1c2be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c2be4: 0xace80060  sw          $t0, 0x60($a3)
    ctx->pc = 0x1c2be4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 8));
    // 0x1c2be8: 0x62440  sll         $a0, $a2, 17
    ctx->pc = 0x1c2be8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 17));
    // 0x1c2bec: 0xa44021  addu        $t0, $a1, $a0
    ctx->pc = 0x1c2becu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c2bf0: 0x2466ffc9  addiu       $a2, $v1, -0x37
    ctx->pc = 0x1c2bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967241));
    // 0x1c2bf4: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x1c2bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1c2bf8: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x1c2bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x1c2bfc: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1c2bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c2c00: 0xbd3821  addu        $a3, $a1, $sp
    ctx->pc = 0x1c2c00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x1c2c04: 0x62240  sll         $a0, $a2, 9
    ctx->pc = 0x1c2c04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
    // 0x1c2c08: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1c2c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c2c0c: 0xace80060  sw          $t0, 0x60($a3)
    ctx->pc = 0x1c2c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 8));
    // 0x1c2c10: 0x62440  sll         $a0, $a2, 17
    ctx->pc = 0x1c2c10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 17));
    // 0x1c2c14: 0xa44021  addu        $t0, $a1, $a0
    ctx->pc = 0x1c2c14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c2c18: 0x2466ffca  addiu       $a2, $v1, -0x36
    ctx->pc = 0x1c2c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967242));
    // 0x1c2c1c: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1c2c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1c2c20: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x1c2c20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x1c2c24: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1c2c24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c2c28: 0xbd3821  addu        $a3, $a1, $sp
    ctx->pc = 0x1c2c28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x1c2c2c: 0x62240  sll         $a0, $a2, 9
    ctx->pc = 0x1c2c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
    // 0x1c2c30: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1c2c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c2c34: 0xace80060  sw          $t0, 0x60($a3)
    ctx->pc = 0x1c2c34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 8));
    // 0x1c2c38: 0x62440  sll         $a0, $a2, 17
    ctx->pc = 0x1c2c38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 17));
    // 0x1c2c3c: 0xa44021  addu        $t0, $a1, $a0
    ctx->pc = 0x1c2c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c2c40: 0x2466ffcb  addiu       $a2, $v1, -0x35
    ctx->pc = 0x1c2c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967243));
    // 0x1c2c44: 0x24640006  addiu       $a0, $v1, 0x6
    ctx->pc = 0x1c2c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x1c2c48: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x1c2c48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x1c2c4c: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1c2c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c2c50: 0xbd3821  addu        $a3, $a1, $sp
    ctx->pc = 0x1c2c50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x1c2c54: 0x62240  sll         $a0, $a2, 9
    ctx->pc = 0x1c2c54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
    // 0x1c2c58: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1c2c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c2c5c: 0xace80060  sw          $t0, 0x60($a3)
    ctx->pc = 0x1c2c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 8));
    // 0x1c2c60: 0x62440  sll         $a0, $a2, 17
    ctx->pc = 0x1c2c60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 17));
    // 0x1c2c64: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1c2c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c2c68: 0x24640007  addiu       $a0, $v1, 0x7
    ctx->pc = 0x1c2c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x1c2c6c: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x1c2c6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x1c2c70: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1c2c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1c2c74: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c2c74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c2c78: 0x2c61006f  sltiu       $at, $v1, 0x6F
    ctx->pc = 0x1c2c78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)111) ? 1 : 0);
    // 0x1c2c7c: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x1c2c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x1c2c80: 0x1420ffaf  bnez        $at, . + 4 + (-0x51 << 2)
    ctx->pc = 0x1C2C80u;
    {
        const bool branch_taken_0x1c2c80 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C80u;
        // 0x1c2c84: 0xac850060  sw          $a1, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c80) {
            ctx->pc = 0x1C2B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2b40;
        }
    }
    ctx->pc = 0x1C2C88u;
    // 0x1c2c88: 0x2467ffc4  addiu       $a3, $v1, -0x3C
    ctx->pc = 0x1c2c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
    // 0x1c2c8c: 0x34640080  ori         $a0, $v1, 0x80
    ctx->pc = 0x1c2c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1c2c90: 0x72a40  sll         $a1, $a3, 9
    ctx->pc = 0x1c2c90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 9));
    // 0x1c2c94: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c2c94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c2c98: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x1c2c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c2c9c: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x1c2c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x1c2ca0: 0x72c40  sll         $a1, $a3, 17
    ctx->pc = 0x1c2ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 17));
    // 0x1c2ca4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1c2ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1c2ca8: 0xac850060  sw          $a1, 0x60($a0)
    ctx->pc = 0x1c2ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 5));
    // 0x1c2cac: 0x2465ffc5  addiu       $a1, $v1, -0x3B
    ctx->pc = 0x1c2cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967237));
    // 0x1c2cb0: 0x52240  sll         $a0, $a1, 9
    ctx->pc = 0x1c2cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 9));
    // 0x1c2cb4: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x1c2cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c2cb8: 0x52c40  sll         $a1, $a1, 17
    ctx->pc = 0x1c2cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 17));
    // 0x1c2cbc: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1c2cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c2cc0: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x1c2cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1c2cc4: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x1c2cc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x1c2cc8: 0x2465ffc6  addiu       $a1, $v1, -0x3A
    ctx->pc = 0x1c2cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967238));
    // 0x1c2ccc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c2cccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c2cd0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1c2cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1c2cd4: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x1c2cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x1c2cd8: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1c2cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1c2cdc: 0xac860060  sw          $a2, 0x60($a0)
    ctx->pc = 0x1c2cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 6));
    // 0x1c2ce0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c2ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c2ce4: 0x52240  sll         $a0, $a1, 9
    ctx->pc = 0x1c2ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 9));
    // 0x1c2ce8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1c2ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c2cec: 0x51440  sll         $v0, $a1, 17
    ctx->pc = 0x1c2cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 17));
    // 0x1c2cf0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1c2cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c2cf4: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x1c2cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1c2cf8: 0xac440060  sw          $a0, 0x60($v0)
    ctx->pc = 0x1c2cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 4));
    // 0x1c2cfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c2cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c2d00:
    // 0x1c2d00: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1c2d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c2d04: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1c2d04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c2d08: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x1c2d08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1c2d0c: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x1c2d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x1c2d10: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1c2d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c2d14: 0x34430080  ori         $v1, $v0, 0x80
    ctx->pc = 0x1c2d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1c2d18: 0x24848000  addiu       $a0, $a0, -0x8000
    ctx->pc = 0x1c2d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x1c2d1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c2d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c2d20: 0x24848000  addiu       $a0, $a0, -0x8000
    ctx->pc = 0x1c2d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x1c2d24: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1c2d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1c2d28: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x1c2d28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
    // 0x1c2d2c: 0x21a40  sll         $v1, $v0, 9
    ctx->pc = 0x1c2d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x1c2d30: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1c2d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c2d34: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1c2d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c2d38: 0x34830080  ori         $v1, $a0, 0x80
    ctx->pc = 0x1c2d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x1c2d3c: 0x24a58000  addiu       $a1, $a1, -0x8000
    ctx->pc = 0x1c2d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x1c2d40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c2d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c2d44: 0x24a58000  addiu       $a1, $a1, -0x8000
    ctx->pc = 0x1c2d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x1c2d48: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1c2d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1c2d4c: 0xac650060  sw          $a1, 0x60($v1)
    ctx->pc = 0x1c2d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 5));
    // 0x1c2d50: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1c2d50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1c2d54: 0x41a40  sll         $v1, $a0, 9
    ctx->pc = 0x1c2d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x1c2d58: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1c2d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c2d5c: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x1c2d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1c2d60: 0x34830080  ori         $v1, $a0, 0x80
    ctx->pc = 0x1c2d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x1c2d64: 0x24a58000  addiu       $a1, $a1, -0x8000
    ctx->pc = 0x1c2d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x1c2d68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c2d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c2d6c: 0x24a58000  addiu       $a1, $a1, -0x8000
    ctx->pc = 0x1c2d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x1c2d70: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1c2d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1c2d74: 0xac650060  sw          $a1, 0x60($v1)
    ctx->pc = 0x1c2d74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 5));
    // 0x1c2d78: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1c2d78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1c2d7c: 0x41a40  sll         $v1, $a0, 9
    ctx->pc = 0x1c2d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x1c2d80: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1c2d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c2d84: 0x24440003  addiu       $a0, $v0, 0x3
    ctx->pc = 0x1c2d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1c2d88: 0x34830080  ori         $v1, $a0, 0x80
    ctx->pc = 0x1c2d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x1c2d8c: 0x24a58000  addiu       $a1, $a1, -0x8000
    ctx->pc = 0x1c2d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x1c2d90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c2d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c2d94: 0x24a58000  addiu       $a1, $a1, -0x8000
    ctx->pc = 0x1c2d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x1c2d98: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1c2d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1c2d9c: 0xac650060  sw          $a1, 0x60($v1)
    ctx->pc = 0x1c2d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 5));
    // 0x1c2da0: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1c2da0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1c2da4: 0x41a40  sll         $v1, $a0, 9
    ctx->pc = 0x1c2da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x1c2da8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1c2da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c2dac: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x1c2dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1c2db0: 0x34830080  ori         $v1, $a0, 0x80
    ctx->pc = 0x1c2db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x1c2db4: 0x24a58000  addiu       $a1, $a1, -0x8000
    ctx->pc = 0x1c2db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x1c2db8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c2db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c2dbc: 0x24a58000  addiu       $a1, $a1, -0x8000
    ctx->pc = 0x1c2dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x1c2dc0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1c2dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1c2dc4: 0xac650060  sw          $a1, 0x60($v1)
    ctx->pc = 0x1c2dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 5));
    // 0x1c2dc8: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1c2dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1c2dcc: 0x41a40  sll         $v1, $a0, 9
    ctx->pc = 0x1c2dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x1c2dd0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1c2dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c2dd4: 0x24440005  addiu       $a0, $v0, 0x5
    ctx->pc = 0x1c2dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x1c2dd8: 0x34830080  ori         $v1, $a0, 0x80
    ctx->pc = 0x1c2dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x1c2ddc: 0x24a58000  addiu       $a1, $a1, -0x8000
    ctx->pc = 0x1c2ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x1c2de0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c2de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c2de4: 0x24a58000  addiu       $a1, $a1, -0x8000
    ctx->pc = 0x1c2de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x1c2de8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1c2de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1c2dec: 0xac650060  sw          $a1, 0x60($v1)
    ctx->pc = 0x1c2decu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 5));
    // 0x1c2df0: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1c2df0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1c2df4: 0x41a40  sll         $v1, $a0, 9
    ctx->pc = 0x1c2df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x1c2df8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1c2df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c2dfc: 0x24440006  addiu       $a0, $v0, 0x6
    ctx->pc = 0x1c2dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x1c2e00: 0x34830080  ori         $v1, $a0, 0x80
    ctx->pc = 0x1c2e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x1c2e04: 0x24a58000  addiu       $a1, $a1, -0x8000
    ctx->pc = 0x1c2e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x1c2e08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c2e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c2e0c: 0x24a58000  addiu       $a1, $a1, -0x8000
    ctx->pc = 0x1c2e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x1c2e10: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1c2e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1c2e14: 0xac650060  sw          $a1, 0x60($v1)
    ctx->pc = 0x1c2e14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 5));
    // 0x1c2e18: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1c2e18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1c2e1c: 0x24430007  addiu       $v1, $v0, 0x7
    ctx->pc = 0x1c2e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x1c2e20: 0x42240  sll         $a0, $a0, 9
    ctx->pc = 0x1c2e20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x1c2e24: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1c2e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1c2e28: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1c2e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c2e2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c2e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c2e30: 0x24848000  addiu       $a0, $a0, -0x8000
    ctx->pc = 0x1c2e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x1c2e34: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1c2e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1c2e38: 0x24848000  addiu       $a0, $a0, -0x8000
    ctx->pc = 0x1c2e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x1c2e3c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1c2e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1c2e40: 0x2c410034  sltiu       $at, $v0, 0x34
    ctx->pc = 0x1c2e40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)52) ? 1 : 0);
    // 0x1c2e44: 0x1420ffae  bnez        $at, . + 4 + (-0x52 << 2)
    ctx->pc = 0x1C2E44u;
    {
        const bool branch_taken_0x1c2e44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E44u;
        // 0x1c2e48: 0xac640060  sw          $a0, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e44) {
            ctx->pc = 0x1C2D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2d00;
        }
    }
    ctx->pc = 0x1C2E4Cu;
    // 0x1c2e4c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x1c2e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c2e50: 0x34430080  ori         $v1, $v0, 0x80
    ctx->pc = 0x1c2e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1c2e54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c2e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c2e58: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x1c2e58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1c2e5c: 0x42a40  sll         $a1, $a0, 9
    ctx->pc = 0x1c2e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x1c2e60: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x1c2e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1c2e64: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x1c2e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1c2e68: 0x24658000  addiu       $a1, $v1, -0x8000
    ctx->pc = 0x1c2e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x1c2e6c: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1c2e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1c2e70: 0x21a40  sll         $v1, $v0, 9
    ctx->pc = 0x1c2e70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x1c2e74: 0x24a58000  addiu       $a1, $a1, -0x8000
    ctx->pc = 0x1c2e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x1c2e78: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1c2e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1c2e7c: 0xac850060  sw          $a1, 0x60($a0)
    ctx->pc = 0x1c2e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 5));
    // 0x1c2e80: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x1c2e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x1c2e84: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1c2e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c2e88: 0x24658000  addiu       $a1, $v1, -0x8000
    ctx->pc = 0x1c2e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x1c2e8c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1c2e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1c2e90: 0x34830080  ori         $v1, $a0, 0x80
    ctx->pc = 0x1c2e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x1c2e94: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1c2e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1c2e98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c2e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c2e9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c2e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c2ea0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1c2ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1c2ea4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1c2ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1c2ea8: 0xac650060  sw          $a1, 0x60($v1)
    ctx->pc = 0x1c2ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 5));
    // 0x1c2eac: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1c2eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2eb0: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1c2eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1c2eb4: 0x41a40  sll         $v1, $a0, 9
    ctx->pc = 0x1c2eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x1c2eb8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1c2eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c2ebc: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x1c2ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x1c2ec0: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x1c2ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x1c2ec4: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x1c2ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x1c2ec8: 0x8e6578d0  lw          $a1, 0x78D0($s3)
    ctx->pc = 0x1c2ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30928)));
    // 0x1c2ecc: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1C2ECCu;
    SET_GPR_U32(ctx, 31, 0x1C2ED4u);
    ctx->pc = 0x1C2ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2ECCu;
    // 0x1c2ed0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1C2ECCu, 0x1C2ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2ED4u;
label_1c2ed4:
    // 0x1c2ed4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c2ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ed8: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1C2ED8u;
    SET_GPR_U32(ctx, 31, 0x1C2EE0u);
    ctx->pc = 0x1C2EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2ED8u;
    // 0x1c2edc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1C2ED8u, 0x1C2EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2EE0u;
label_1c2ee0:
    // 0x1c2ee0: 0x112182  srl         $a0, $s1, 6
    ctx->pc = 0x1c2ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 6));
    // 0x1c2ee4: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x1c2ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1c2ee8: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1c2ee8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c2eec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c2eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c2ef0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c2ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c2ef4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c2ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c2ef8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1c2ef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1c2efc: 0x23eb8  dsll        $a3, $v0, 26
    ctx->pc = 0x1c2efcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 26);
    // 0x1c2f00: 0x533b8  dsll        $a2, $a1, 14
    ctx->pc = 0x1c2f00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << 14);
    // 0x1c2f04: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c2f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c2f08: 0x3c0201b0  lui         $v0, 0x1B0
    ctx->pc = 0x1c2f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)432 << 16));
    // 0x1c2f0c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1c2f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1c2f10: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c2f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c2f14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c2f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2f18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c2f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2f1c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1C2F1Cu;
    SET_GPR_U32(ctx, 31, 0x1C2F24u);
    ctx->pc = 0x1C2F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2F1Cu;
    // 0x1c2f20: 0x479025  or          $s2, $v0, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1C2F1Cu, 0x1C2F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F24u;
label_1c2f24:
    // 0x1c2f24: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1c2f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c2f28: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c2f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c2f2c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c2f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c2f30: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c2f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c2f34: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1c2f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1c2f38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c2f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c2f3c: 0x2432025  or          $a0, $s2, $v1
    ctx->pc = 0x1c2f3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1c2f40: 0x9e6378d0  lwu         $v1, 0x78D0($s3)
    ctx->pc = 0x1c2f40u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 30928)));
    // 0x1c2f44: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1c2f44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1c2f48: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1c2f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1c2f4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c2f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2f50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c2f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c2f54: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1c2f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1c2f58: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1c2f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1c2f5c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C2F5Cu;
    SET_GPR_U32(ctx, 31, 0x1C2F64u);
    ctx->pc = 0x1C2F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2F5Cu;
    // 0x1c2f60: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C2F5Cu, 0x1C2F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F64u;
label_1c2f64:
    // 0x1c2f64: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1C2F64u;
    SET_GPR_U32(ctx, 31, 0x1C2F6Cu);
    ctx->pc = 0x1C2F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2F64u;
    // 0x1c2f68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1C2F64u, 0x1C2F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F6Cu;
label_1c2f6c:
    // 0x1c2f6c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1c2f6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c2f70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c2f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2f74: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1c2f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1c2f78: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1c2f78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1c2f7c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1c2f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c2f80: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c2f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1c2f84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c2f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c2f88: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1c2f88u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1c2f8c: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x1c2f8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1c2f90: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C2F90u;
    SET_GPR_U32(ctx, 31, 0x1C2F98u);
    ctx->pc = 0x1C2F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2F90u;
    // 0x1c2f94: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C2F90u, 0x1C2F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F98u;
label_1c2f98:
    // 0x1c2f98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c2f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2f9c: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1c2f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c2fa0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C2FA0u;
    SET_GPR_U32(ctx, 31, 0x1C2FA8u);
    ctx->pc = 0x1C2FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2FA0u;
    // 0x1c2fa4: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C2FA0u, 0x1C2FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2FA8u;
label_1c2fa8:
    // 0x1c2fa8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c2fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2fac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2fb0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C2FB0u;
    SET_GPR_U32(ctx, 31, 0x1C2FB8u);
    ctx->pc = 0x1C2FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2FB0u;
    // 0x1c2fb4: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C2FB0u, 0x1C2FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2FB8u;
label_1c2fb8:
    // 0x1c2fb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c2fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2fbc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1c2fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c2fc0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C2FC0u;
    SET_GPR_U32(ctx, 31, 0x1C2FC8u);
    ctx->pc = 0x1C2FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2FC0u;
    // 0x1c2fc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C2FC0u, 0x1C2FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2FC8u;
label_1c2fc8:
    // 0x1c2fc8: 0x8e6378c8  lw          $v1, 0x78C8($s3)
    ctx->pc = 0x1c2fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30920)));
    // 0x1c2fcc: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x1c2fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x1c2fd0: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x1c2fd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c2fd4: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x1C2FD4u;
    {
        const bool branch_taken_0x1c2fd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2FD4u;
        // 0x1c2fd8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2fd4) {
            ctx->pc = 0x1C30D8u;
            goto label_1c30d8;
        }
    }
    ctx->pc = 0x1C2FDCu;
    // 0x1c2fdc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1c2fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1c2fe0: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1c2fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c2fe4: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x1c2fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1c2fe8: 0x24630009  addiu       $v1, $v1, 0x9
    ctx->pc = 0x1c2fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x1c2fec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c2fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c2ff0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c2ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c2ff4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c2ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c2ff8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c2ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c2ffc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1c2ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1c3000: 0x2412003f  addiu       $s2, $zero, 0x3F
    ctx->pc = 0x1c3000u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1c3004: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1c3004u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c3008: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c3008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c300c: 0x0  nop
    ctx->pc = 0x1c300cu;
    // NOP
label_1c3010:
    // 0x1c3010: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1c3010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1c3014: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c3014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c3018: 0x9e6678c0  lwu         $a2, 0x78C0($s3)
    ctx->pc = 0x1c3018u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 30912)));
    // 0x1c301c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1c301cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1c3020: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x1c3020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1c3024: 0x8e6278c4  lw          $v0, 0x78C4($s3)
    ctx->pc = 0x1c3024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30916)));
    // 0x1c3028: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1c3028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1c302c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c302cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c3030: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1c3030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1c3034: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c3034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3038: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1c3038u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1c303c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1c303cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1c3040: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c3040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c3044: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c3044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c3048: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c3048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c304c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1c304cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c3050: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C3050u;
    SET_GPR_U32(ctx, 31, 0x1C3058u);
    ctx->pc = 0x1C3054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3050u;
    // 0x1c3054: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C3050u, 0x1C3058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3058u;
label_1c3058:
    // 0x1c3058: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c3058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1c305c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c305cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3060: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c3060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3064: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C3064u;
    SET_GPR_U32(ctx, 31, 0x1C306Cu);
    ctx->pc = 0x1C3068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3064u;
    // 0x1c3068: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C3064u, 0x1C306Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C306Cu;
label_1c306c:
    // 0x1c306c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c306cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c3070: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1c3070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1c3074: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c3074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c3078: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1c3078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1c307c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c307cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c3080: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c3080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3084: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c3084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c3088: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C3088u;
    SET_GPR_U32(ctx, 31, 0x1C3090u);
    ctx->pc = 0x1C308Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3088u;
    // 0x1c308c: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C3088u, 0x1C3090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3090u;
label_1c3090:
    // 0x1c3090: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c3090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3094: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c3094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3098: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C3098u;
    SET_GPR_U32(ctx, 31, 0x1C30A0u);
    ctx->pc = 0x1C309Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3098u;
    // 0x1c309c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C3098u, 0x1C30A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30A0u;
label_1c30a0:
    // 0x1c30a0: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1c30a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1c30a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c30a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30a8: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1c30a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1c30ac: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c30acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c30b0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C30B0u;
    SET_GPR_U32(ctx, 31, 0x1C30B8u);
    ctx->pc = 0x1C30B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30B0u;
    // 0x1c30b4: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C30B0u, 0x1C30B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30B8u;
label_1c30b8:
    // 0x1c30b8: 0x8e6378c8  lw          $v1, 0x78C8($s3)
    ctx->pc = 0x1c30b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30920)));
    // 0x1c30bc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c30bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1c30c0: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x1c30c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1c30c4: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x1c30c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x1c30c8: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x1c30c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c30cc: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1C30CCu;
    {
        const bool branch_taken_0x1c30cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C30D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30CCu;
        // 0x1c30d0: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30cc) {
            ctx->pc = 0x1C3010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3010;
        }
    }
    ctx->pc = 0x1C30D4u;
    // 0x1c30d4: 0x0  nop
    ctx->pc = 0x1c30d4u;
    // NOP
label_1c30d8:
    // 0x1c30d8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c30d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c30dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c30dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c30e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c30e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c30e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c30e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c30e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c30e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c30ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c30ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c30f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C30F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C30F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30F0u;
        // 0x1c30f4: 0x27bd0460  addiu       $sp, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C30F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C30F8u;
}
