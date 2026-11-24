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

// Function: sub_00181F20
// Address: 0x181f20 - 0x182148
void sub_00181F20_0x181f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181F20_0x181f20");
#endif

    switch (ctx->pc) {
        case 0x181f60u: goto label_181f60;
        case 0x1820c0u: goto label_1820c0;
        case 0x1820f0u: goto label_1820f0;
        default: break;
    }

    ctx->pc = 0x181f20u;

    // 0x181f20: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x181f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x181f24: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181f24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x181f28: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x181f28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181f2c: 0x30670001  andi        $a3, $v1, 0x1
    ctx->pc = 0x181f2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x181f30: 0x30640004  andi        $a0, $v1, 0x4
    ctx->pc = 0x181f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x181f34: 0x3c0b40c9  lui         $t3, 0x40C9
    ctx->pc = 0x181f34u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16585 << 16));
    // 0x181f38: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x181f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x181f3c: 0x356c0fdb  ori         $t4, $t3, 0xFDB
    ctx->pc = 0x181f3cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)4059);
    // 0x181f40: 0x346b0fdb  ori         $t3, $v1, 0xFDB
    ctx->pc = 0x181f40u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x181f44: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x181f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x181f48: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x181f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x181f4c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x181f4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x181f50: 0x448c1800  mtc1        $t4, $f3
    ctx->pc = 0x181f50u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x181f54: 0x448b2000  mtc1        $t3, $f4
    ctx->pc = 0x181f54u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x181f58: 0x2403ff3f  addiu       $v1, $zero, -0xC1
    ctx->pc = 0x181f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x181f5c: 0x0  nop
    ctx->pc = 0x181f5cu;
    // NOP
label_181f60:
    // 0x181f60: 0x14e00029  bnez        $a3, . + 4 + (0x29 << 2)
    ctx->pc = 0x181F60u;
    {
        const bool branch_taken_0x181f60 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x181f60) {
            ctx->pc = 0x182008u;
            goto label_182008;
        }
    }
    ctx->pc = 0x181F68u;
    // 0x181f68: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x181f68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x181f6c: 0x91090000  lbu         $t1, 0x0($t0)
    ctx->pc = 0x181f6cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x181f70: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x181f70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x181f74: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x181f74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x181f78: 0x31280040  andi        $t0, $t1, 0x40
    ctx->pc = 0x181f78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)64);
    // 0x181f7c: 0x8682b  sltu        $t5, $zero, $t0
    ctx->pc = 0x181f7cu;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x181f80: 0x31280080  andi        $t0, $t1, 0x80
    ctx->pc = 0x181f80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)128);
    // 0x181f84: 0x1100000e  beqz        $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x181F84u;
    {
        const bool branch_taken_0x181f84 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x181f84) {
            ctx->pc = 0x181FC0u;
            goto label_181fc0;
        }
    }
    ctx->pc = 0x181F8Cu;
    // 0x181f8c: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x181f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x181f90: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x181f90u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x181f94: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x181f94u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x181f98: 0x640c0001  daddiu      $t4, $zero, 0x1
    ctx->pc = 0x181f98u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x181f9c: 0x95c3c  dsll32      $t3, $t1, 16
    ctx->pc = 0x181f9cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) << (32 + 16));
    // 0x181fa0: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x181fa0u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x181fa4: 0x91090000  lbu         $t1, 0x0($t0)
    ctx->pc = 0x181fa4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x181fa8: 0x1694825  or          $t1, $t3, $t1
    ctx->pc = 0x181fa8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) | GPR_U64(ctx, 9));
    // 0x181fac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x181facu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x181fb0: 0x94c3c  dsll32      $t1, $t1, 16
    ctx->pc = 0x181fb0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 16));
    // 0x181fb4: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x181fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x181fb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x181FB8u;
    {
        const bool branch_taken_0x181fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181FB8u;
        // 0x181fbc: 0x94c3f  dsra32      $t1, $t1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181fb8) {
            ctx->pc = 0x181FD0u;
            goto label_181fd0;
        }
    }
    ctx->pc = 0x181FC0u;
label_181fc0:
    // 0x181fc0: 0x1234024  and         $t0, $t1, $v1
    ctx->pc = 0x181fc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x181fc4: 0x84c3c  dsll32      $t1, $t0, 16
    ctx->pc = 0x181fc4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 16));
    // 0x181fc8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x181fc8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181fcc: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x181fccu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
label_181fd0:
    // 0x181fd0: 0x11a00005  beqz        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x181FD0u;
    {
        const bool branch_taken_0x181fd0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x181FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181FD0u;
        // 0x181fd4: 0x9443c  dsll32      $t0, $t1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181fd0) {
            ctx->pc = 0x181FE8u;
            goto label_181fe8;
        }
    }
    ctx->pc = 0x181FD8u;
    // 0x181fd8: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x181fd8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x181fdc: 0x84023  negu        $t0, $t0
    ctx->pc = 0x181fdcu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
    // 0x181fe0: 0x84c3c  dsll32      $t1, $t0, 16
    ctx->pc = 0x181fe0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 16));
    // 0x181fe4: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x181fe4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
label_181fe8:
    // 0x181fe8: 0x11800007  beqz        $t4, . + 4 + (0x7 << 2)
    ctx->pc = 0x181FE8u;
    {
        const bool branch_taken_0x181fe8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x181FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181FE8u;
        // 0x181fec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181fe8) {
            ctx->pc = 0x182008u;
            goto label_182008;
        }
    }
    ctx->pc = 0x181FF0u;
    // 0x181ff0: 0x95c3c  dsll32      $t3, $t1, 16
    ctx->pc = 0x181ff0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) << (32 + 16));
    // 0x181ff4: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x181ff4u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x181ff8: 0x15600003  bnez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x181FF8u;
    {
        const bool branch_taken_0x181ff8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x181ff8) {
            ctx->pc = 0x182008u;
            goto label_182008;
        }
    }
    ctx->pc = 0x182000u;
    // 0x182000: 0x64080001  daddiu      $t0, $zero, 0x1
    ctx->pc = 0x182000u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x182004: 0x0  nop
    ctx->pc = 0x182004u;
    // NOP
label_182008:
    // 0x182008: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x182008u;
    {
        const bool branch_taken_0x182008 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x182008) {
            ctx->pc = 0x182018u;
            goto label_182018;
        }
    }
    ctx->pc = 0x182010u;
    // 0x182010: 0x11000021  beqz        $t0, . + 4 + (0x21 << 2)
    ctx->pc = 0x182010u;
    {
        const bool branch_taken_0x182010 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x182010) {
            ctx->pc = 0x182098u;
            goto label_182098;
        }
    }
    ctx->pc = 0x182018u;
label_182018:
    // 0x182018: 0x8ccb0000  lw          $t3, 0x0($a2)
    ctx->pc = 0x182018u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18201c: 0x916c0000  lbu         $t4, 0x0($t3)
    ctx->pc = 0x18201cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x182020: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x182020u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x182024: 0xaccb0000  sw          $t3, 0x0($a2)
    ctx->pc = 0x182024u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
    // 0x182028: 0xafac000c  sw          $t4, 0xC($sp)
    ctx->pc = 0x182028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 12));
    // 0x18202c: 0x8ccb0000  lw          $t3, 0x0($a2)
    ctx->pc = 0x18202cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x182030: 0x916c0000  lbu         $t4, 0x0($t3)
    ctx->pc = 0x182030u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x182034: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x182034u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x182038: 0xc6200  sll         $t4, $t4, 8
    ctx->pc = 0x182038u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
    // 0x18203c: 0xaccb0000  sw          $t3, 0x0($a2)
    ctx->pc = 0x18203cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
    // 0x182040: 0x8fab000c  lw          $t3, 0xC($sp)
    ctx->pc = 0x182040u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x182044: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x182044u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x182048: 0xafab000c  sw          $t3, 0xC($sp)
    ctx->pc = 0x182048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 11));
    // 0x18204c: 0x8ccb0000  lw          $t3, 0x0($a2)
    ctx->pc = 0x18204cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x182050: 0x916c0000  lbu         $t4, 0x0($t3)
    ctx->pc = 0x182050u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x182054: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x182054u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x182058: 0xc6400  sll         $t4, $t4, 16
    ctx->pc = 0x182058u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x18205c: 0xaccb0000  sw          $t3, 0x0($a2)
    ctx->pc = 0x18205cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
    // 0x182060: 0x8fab000c  lw          $t3, 0xC($sp)
    ctx->pc = 0x182060u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x182064: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x182064u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x182068: 0xafab000c  sw          $t3, 0xC($sp)
    ctx->pc = 0x182068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 11));
    // 0x18206c: 0x8ccb0000  lw          $t3, 0x0($a2)
    ctx->pc = 0x18206cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x182070: 0x916c0000  lbu         $t4, 0x0($t3)
    ctx->pc = 0x182070u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x182074: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x182074u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x182078: 0xc6600  sll         $t4, $t4, 24
    ctx->pc = 0x182078u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x18207c: 0xaccb0000  sw          $t3, 0x0($a2)
    ctx->pc = 0x18207cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
    // 0x182080: 0x8fab000c  lw          $t3, 0xC($sp)
    ctx->pc = 0x182080u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x182084: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x182084u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x182088: 0xafab000c  sw          $t3, 0xC($sp)
    ctx->pc = 0x182088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 11));
    // 0x18208c: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x18208cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182090: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x182090u;
    {
        const bool branch_taken_0x182090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182090u;
        // 0x182094: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x182090) {
            ctx->pc = 0x182130u;
            goto label_182130;
        }
    }
    ctx->pc = 0x182098u;
label_182098:
    // 0x182098: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x182098u;
    {
        const bool branch_taken_0x182098 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x182098) {
            ctx->pc = 0x182118u;
            goto label_182118;
        }
    }
    ctx->pc = 0x1820A0u;
    // 0x1820a0: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x1820a0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1820a4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1820a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1820a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1820a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1820ac: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x1820acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1820b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1820b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1820b4: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x1820b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1820b8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1820B8u;
    {
        const bool branch_taken_0x1820b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1820BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1820B8u;
        // 0x1820bc: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1820b8) {
            ctx->pc = 0x1820E0u;
            goto label_1820e0;
        }
    }
    ctx->pc = 0x1820C0u;
label_1820c0:
    // 0x1820c0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1820c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1820c4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1820c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1820c8: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x1820c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1820cc: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1820ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1820d0: 0x0  nop
    ctx->pc = 0x1820d0u;
    // NOP
    // 0x1820d4: 0x4500fffa  bc1f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x1820D4u;
    {
        const bool branch_taken_0x1820d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1820d4) {
            ctx->pc = 0x1820C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1820c0;
        }
    }
    ctx->pc = 0x1820DCu;
    // 0x1820dc: 0x0  nop
    ctx->pc = 0x1820dcu;
    // NOP
label_1820e0:
    // 0x1820e0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1820e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1820e4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1820E4u;
    {
        const bool branch_taken_0x1820e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1820e4) {
            ctx->pc = 0x182130u;
            goto label_182130;
        }
    }
    ctx->pc = 0x1820ECu;
    // 0x1820ec: 0x0  nop
    ctx->pc = 0x1820ecu;
    // NOP
label_1820f0:
    // 0x1820f0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1820f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1820f4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1820f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1820f8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1820f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1820fc: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1820fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x182100: 0x0  nop
    ctx->pc = 0x182100u;
    // NOP
    // 0x182104: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x182104u;
    {
        const bool branch_taken_0x182104 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182104) {
            ctx->pc = 0x1820F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1820f0;
        }
    }
    ctx->pc = 0x18210Cu;
    // 0x18210c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18210Cu;
    {
        const bool branch_taken_0x18210c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18210c) {
            ctx->pc = 0x182130u;
            goto label_182130;
        }
    }
    ctx->pc = 0x182114u;
    // 0x182114: 0x0  nop
    ctx->pc = 0x182114u;
    // NOP
label_182118:
    // 0x182118: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x182118u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18211c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x18211cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182120: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x182120u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x182124: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x182124u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x182128: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x182128u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18212c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x18212cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_182130:
    // 0x182130: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x182130u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x182134: 0x294b0003  slti        $t3, $t2, 0x3
    ctx->pc = 0x182134u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x182138: 0x1560ff89  bnez        $t3, . + 4 + (-0x77 << 2)
    ctx->pc = 0x182138u;
    {
        const bool branch_taken_0x182138 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x18213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182138u;
        // 0x18213c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182138) {
            ctx->pc = 0x181F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181f60;
        }
    }
    ctx->pc = 0x182140u;
    // 0x182140: 0x3e00008  jr          $ra
    ctx->pc = 0x182140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182140u;
        // 0x182144: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182148u;
}
