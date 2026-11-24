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

// Function: sub_002A0FE0
// Address: 0x2a0fe0 - 0x2a1148
void sub_002A0FE0_0x2a0fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0FE0_0x2a0fe0");
#endif

    switch (ctx->pc) {
        case 0x2a1030u: goto label_2a1030;
        case 0x2a10fcu: goto label_2a10fc;
        case 0x2a1108u: goto label_2a1108;
        default: break;
    }

    ctx->pc = 0x2a0fe0u;

    // 0x2a0fe0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2a0fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2a0fe4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2a0fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2a0fe8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2a0fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2a0fec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2a0fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2a0ff0: 0x27be0114  addiu       $fp, $sp, 0x114
    ctx->pc = 0x2a0ff0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x2a0ff4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a0ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2a0ff8: 0x27b70104  addiu       $s7, $sp, 0x104
    ctx->pc = 0x2a0ff8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x2a0ffc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a0ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2a1000: 0x27b600f4  addiu       $s6, $sp, 0xF4
    ctx->pc = 0x2a1000u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x2a1004: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a1004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a1008: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2a1008u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a100c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a100cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a1010: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2a1010u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1014: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a1014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a1018: 0x27b300f0  addiu       $s3, $sp, 0xF0
    ctx->pc = 0x2a1018u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a101c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a101cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a1020: 0x27b20100  addiu       $s2, $sp, 0x100
    ctx->pc = 0x2a1020u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a1024: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a1024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a1028: 0x27b10110  addiu       $s1, $sp, 0x110
    ctx->pc = 0x2a1028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2a102c: 0x27b000e4  addiu       $s0, $sp, 0xE4
    ctx->pc = 0x2a102cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_2a1030:
    // 0x2a1030: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x2a1030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x2a1034: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2a1034u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x2a1038: 0x27a300e8  addiu       $v1, $sp, 0xE8
    ctx->pc = 0x2a1038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2a103c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2a103cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2a1040: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a1040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a1044: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2a1044u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2a1048: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a1048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a104c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2a104cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2a1050: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2a1050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a1054: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x2a1054u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x2a1058: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x2a1058u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x2a105c: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x2a105cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x2a1060: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2a1060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2a1064: 0x27a300f8  addiu       $v1, $sp, 0xF8
    ctx->pc = 0x2a1064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x2a1068: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2a1068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2a106c: 0x27a30108  addiu       $v1, $sp, 0x108
    ctx->pc = 0x2a106cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x2a1070: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2a1070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2a1074: 0x27a30118  addiu       $v1, $sp, 0x118
    ctx->pc = 0x2a1074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x2a1078: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2a1078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2a107c: 0x27a300ec  addiu       $v1, $sp, 0xEC
    ctx->pc = 0x2a107cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x2a1080: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2a1080u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2a1084: 0x27a300fc  addiu       $v1, $sp, 0xFC
    ctx->pc = 0x2a1084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x2a1088: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2a1088u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2a108c: 0x27a3010c  addiu       $v1, $sp, 0x10C
    ctx->pc = 0x2a108cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x2a1090: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2a1090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2a1094: 0x27a3011c  addiu       $v1, $sp, 0x11C
    ctx->pc = 0x2a1094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x2a1098: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2a1098u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a109c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2a109cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x2a10a0: 0x27a300a4  addiu       $v1, $sp, 0xA4
    ctx->pc = 0x2a10a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x2a10a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2a10a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a10a8: 0x27a300a8  addiu       $v1, $sp, 0xA8
    ctx->pc = 0x2a10a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x2a10ac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2a10acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a10b0: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x2a10b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a10b4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2a10b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a10b8: 0x27a300b4  addiu       $v1, $sp, 0xB4
    ctx->pc = 0x2a10b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x2a10bc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2a10bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a10c0: 0x27a300b8  addiu       $v1, $sp, 0xB8
    ctx->pc = 0x2a10c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2a10c4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2a10c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a10c8: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x2a10c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a10cc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2a10ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a10d0: 0x27a300c4  addiu       $v1, $sp, 0xC4
    ctx->pc = 0x2a10d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x2a10d4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2a10d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a10d8: 0x27a300c8  addiu       $v1, $sp, 0xC8
    ctx->pc = 0x2a10d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2a10dc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2a10dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a10e0: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2a10e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a10e4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2a10e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a10e8: 0x27a300d4  addiu       $v1, $sp, 0xD4
    ctx->pc = 0x2a10e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x2a10ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2a10ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a10f0: 0x27a300d8  addiu       $v1, $sp, 0xD8
    ctx->pc = 0x2a10f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2a10f4: 0xc0a8ecc  jal         func_2A3B30
    ctx->pc = 0x2A10F4u;
    SET_GPR_U32(ctx, 31, 0x2A10FCu);
    ctx->pc = 0x2A10F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A10F4u;
    // 0x2a10f8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B30u, 0x2A10F4u, 0x2A10FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A10FCu;
label_2a10fc:
    // 0x2a10fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a10fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1100: 0xc0a8ebc  jal         func_2A3AF0
    ctx->pc = 0x2A1100u;
    SET_GPR_U32(ctx, 31, 0x2A1108u);
    ctx->pc = 0x2A1104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1100u;
    // 0x2a1104: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3AF0u, 0x2A1100u, 0x2A1108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1108u;
label_2a1108:
    // 0x2a1108: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a1108u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a110c: 0x2e830002  sltiu       $v1, $s4, 0x2
    ctx->pc = 0x2a110cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a1110: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x2A1110u;
    {
        const bool branch_taken_0x2a1110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1110) {
            ctx->pc = 0x2A1030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1030;
        }
    }
    ctx->pc = 0x2A1118u;
    // 0x2a1118: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2a1118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a111c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2a111cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a1120: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2a1120u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a1124: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a1124u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a1128: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a1128u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a112c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a112cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a1130: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a1130u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a1134: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a1134u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a1138: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a1138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a113c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a113cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1140: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1140u;
        // 0x2a1144: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1148u;
}
