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

// Function: sub_0031B140
// Address: 0x31b140 - 0x31b408
void sub_0031B140_0x31b140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B140_0x31b140");
#endif

    switch (ctx->pc) {
        case 0x31b18cu: goto label_31b18c;
        case 0x31b1fcu: goto label_31b1fc;
        case 0x31b258u: goto label_31b258;
        case 0x31b2d4u: goto label_31b2d4;
        case 0x31b308u: goto label_31b308;
        case 0x31b31cu: goto label_31b31c;
        case 0x31b32cu: goto label_31b32c;
        case 0x31b360u: goto label_31b360;
        case 0x31b384u: goto label_31b384;
        case 0x31b3a0u: goto label_31b3a0;
        case 0x31b3c8u: goto label_31b3c8;
        case 0x31b3e0u: goto label_31b3e0;
        case 0x31b3f8u: goto label_31b3f8;
        default: break;
    }

    ctx->pc = 0x31b140u;

    // 0x31b140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31b140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31b144: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31b144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31b148: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31b148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31b14c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31b14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31b150: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31b150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b154: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x31b154u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x31b158: 0x10830087  beq         $a0, $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x31B158u;
    {
        const bool branch_taken_0x31b158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x31B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B158u;
        // 0x31b15c: 0x240c0002  addiu       $t4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b158) {
            ctx->pc = 0x31B378u;
            goto label_31b378;
        }
    }
    ctx->pc = 0x31B160u;
    // 0x31b160: 0x108c006b  beq         $a0, $t4, . + 4 + (0x6B << 2)
    ctx->pc = 0x31B160u;
    {
        const bool branch_taken_0x31b160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 12));
        ctx->pc = 0x31B164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B160u;
        // 0x31b164: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b160) {
            ctx->pc = 0x31B310u;
            goto label_31b310;
        }
    }
    ctx->pc = 0x31B168u;
    // 0x31b168: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x31B168u;
    {
        const bool branch_taken_0x31b168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31b168) {
            ctx->pc = 0x31B1A8u;
            goto label_31b1a8;
        }
    }
    ctx->pc = 0x31B170u;
    // 0x31b170: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B170u;
    {
        const bool branch_taken_0x31b170 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b170) {
            ctx->pc = 0x31B180u;
            goto label_31b180;
        }
    }
    ctx->pc = 0x31B178u;
    // 0x31b178: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x31B178u;
    {
        const bool branch_taken_0x31b178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b178) {
            ctx->pc = 0x31B3F8u;
            goto label_31b3f8;
        }
    }
    ctx->pc = 0x31B180u;
label_31b180:
    // 0x31b180: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x31b180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x31b184: 0xc063d48  jal         func_18F520
    ctx->pc = 0x31B184u;
    SET_GPR_U32(ctx, 31, 0x31B18Cu);
    ctx->pc = 0x31B188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B184u;
    // 0x31b188: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x31B184u, 0x31B18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B18Cu;
label_31b18c:
    // 0x31b18c: 0x1440009a  bnez        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x31B18Cu;
    {
        const bool branch_taken_0x31b18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b18c) {
            ctx->pc = 0x31B3F8u;
            goto label_31b3f8;
        }
    }
    ctx->pc = 0x31B194u;
    // 0x31b194: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x31b194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x31b198: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31b198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31b19c: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x31B19Cu;
    {
        const bool branch_taken_0x31b19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B19Cu;
        // 0x31b1a0: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b19c) {
            ctx->pc = 0x31B3F8u;
            goto label_31b3f8;
        }
    }
    ctx->pc = 0x31B1A4u;
    // 0x31b1a4: 0x0  nop
    ctx->pc = 0x31b1a4u;
    // NOP
label_31b1a8:
    // 0x31b1a8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x31b1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x31b1ac: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x31b1acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x31b1b0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x31b1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x31b1b4: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x31b1b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x31b1b8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x31b1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31b1bc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x31B1BCu;
    {
        const bool branch_taken_0x31b1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b1bc) {
            ctx->pc = 0x31B200u;
            goto label_31b200;
        }
    }
    ctx->pc = 0x31B1C4u;
    // 0x31b1c4: 0x82020005  lb          $v0, 0x5($s0)
    ctx->pc = 0x31b1c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x31b1c8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x31b1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x31b1cc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x31b1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x31b1d0: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x31b1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x31b1d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31b1d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b1d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31b1d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b1dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31b1dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b1e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31b1e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b1e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x31b1e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b1e8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x31b1e8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b1ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31b1f0: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x31b1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b1f4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x31B1F4u;
    SET_GPR_U32(ctx, 31, 0x31B1FCu);
    ctx->pc = 0x31B1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B1F4u;
    // 0x31b1f8: 0xffac0000  sd          $t4, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x31B1F4u, 0x31B1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B1FCu;
label_31b1fc:
    // 0x31b1fc: 0x0  nop
    ctx->pc = 0x31b1fcu;
    // NOP
label_31b200:
    // 0x31b200: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x31b200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x31b204: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x31b204u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x31b208: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x31b208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x31b20c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x31b20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x31b210: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x31b210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31b214: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x31B214u;
    {
        const bool branch_taken_0x31b214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b214) {
            ctx->pc = 0x31B258u;
            goto label_31b258;
        }
    }
    ctx->pc = 0x31B21Cu;
    // 0x31b21c: 0x82030005  lb          $v1, 0x5($s0)
    ctx->pc = 0x31b21cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x31b220: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x31b220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x31b224: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31b224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31b228: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x31b228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x31b22c: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x31b22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x31b230: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31b230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b234: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31b234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b238: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31b238u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b23c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31b23cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b240: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x31b240u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b244: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x31b244u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b248: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31b248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31b24c: 0xa2030005  sb          $v1, 0x5($s0)
    ctx->pc = 0x31b24cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b250: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x31B250u;
    SET_GPR_U32(ctx, 31, 0x31B258u);
    ctx->pc = 0x31B254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B250u;
    // 0x31b254: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x31B250u, 0x31B258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B258u;
label_31b258:
    // 0x31b258: 0x82040005  lb          $a0, 0x5($s0)
    ctx->pc = 0x31b258u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x31b25c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31b25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31b260: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x31b260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x31b264: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x31b264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x31b268: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x31b268u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x31b26c: 0x0  nop
    ctx->pc = 0x31b26cu;
    // NOP
    // 0x31b270: 0x0  nop
    ctx->pc = 0x31b270u;
    // NOP
    // 0x31b274: 0x1810  mfhi        $v1
    ctx->pc = 0x31b274u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x31b278: 0xa2030005  sb          $v1, 0x5($s0)
    ctx->pc = 0x31b278u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b27c: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x31b27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961700)));
    // 0x31b280: 0x30632008  andi        $v1, $v1, 0x2008
    ctx->pc = 0x31b280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8200);
    // 0x31b284: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x31B284u;
    {
        const bool branch_taken_0x31b284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b284) {
            ctx->pc = 0x31B3F8u;
            goto label_31b3f8;
        }
    }
    ctx->pc = 0x31B28Cu;
    // 0x31b28c: 0x920d0002  lbu         $t5, 0x2($s0)
    ctx->pc = 0x31b28cu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x31b290: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x31b290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x31b294: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x31b294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x31b298: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x31b298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x31b29c: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x31b29cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b2a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31b2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31b2a4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x31b2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x31b2a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31b2a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b2ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31b2acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b2b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31b2b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b2b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31b2b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b2b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x31b2b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b2bc: 0x25a20001  addiu       $v0, $t5, 0x1
    ctx->pc = 0x31b2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x31b2c0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x31b2c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b2c4: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x31b2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b2c8: 0xa20c0006  sb          $t4, 0x6($s0)
    ctx->pc = 0x31b2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 12));
    // 0x31b2cc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x31B2CCu;
    SET_GPR_U32(ctx, 31, 0x31B2D4u);
    ctx->pc = 0x31B2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B2CCu;
    // 0x31b2d0: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x31B2CCu, 0x31B2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B2D4u;
label_31b2d4:
    // 0x31b2d4: 0x82030005  lb          $v1, 0x5($s0)
    ctx->pc = 0x31b2d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x31b2d8: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x31b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x31b2dc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x31b2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x31b2e0: 0x24429488  addiu       $v0, $v0, -0x6B78
    ctx->pc = 0x31b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939784));
    // 0x31b2e4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x31b2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x31b2e8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x31b2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31b2ec: 0x24070500  addiu       $a3, $zero, 0x500
    ctx->pc = 0x31b2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x31b2f0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x31b2f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b2f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31b2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31b2f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b2fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x31b2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31b300: 0xc09565c  jal         func_255970
    ctx->pc = 0x31B300u;
    SET_GPR_U32(ctx, 31, 0x31B308u);
    ctx->pc = 0x31B304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B300u;
    // 0x31b304: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x31B300u, 0x31B308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B308u;
label_31b308:
    // 0x31b308: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x31B308u;
    {
        const bool branch_taken_0x31b308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b308) {
            ctx->pc = 0x31B3F8u;
            goto label_31b3f8;
        }
    }
    ctx->pc = 0x31B310u;
label_31b310:
    // 0x31b310: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x31b310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x31b314: 0xc095150  jal         func_254540
    ctx->pc = 0x31B314u;
    SET_GPR_U32(ctx, 31, 0x31B31Cu);
    ctx->pc = 0x31B318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B314u;
    // 0x31b318: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x31B314u, 0x31B31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B31Cu;
label_31b31c:
    // 0x31b31c: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x31B31Cu;
    {
        const bool branch_taken_0x31b31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B31Cu;
        // 0x31b320: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b31c) {
            ctx->pc = 0x31B3F8u;
            goto label_31b3f8;
        }
    }
    ctx->pc = 0x31B324u;
    // 0x31b324: 0xc095154  jal         func_254550
    ctx->pc = 0x31B324u;
    SET_GPR_U32(ctx, 31, 0x31B32Cu);
    ctx->pc = 0x31B328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B324u;
    // 0x31b328: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x31B324u, 0x31B32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B32Cu;
label_31b32c:
    // 0x31b32c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x31B32Cu;
    {
        const bool branch_taken_0x31b32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b32c) {
            ctx->pc = 0x31B368u;
            goto label_31b368;
        }
    }
    ctx->pc = 0x31B334u;
    // 0x31b334: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x31b334u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x31b338: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x31b338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x31b33c: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x31b33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x31b340: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x31b340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x31b344: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31b344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b348: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31b348u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b34c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31b34cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b350: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x31b350u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31b354: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31b354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31b358: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x31B358u;
    SET_GPR_U32(ctx, 31, 0x31B360u);
    ctx->pc = 0x31B35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B358u;
    // 0x31b35c: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x31B358u, 0x31B360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B360u;
label_31b360:
    // 0x31b360: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x31B360u;
    {
        const bool branch_taken_0x31b360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b360) {
            ctx->pc = 0x31B3F8u;
            goto label_31b3f8;
        }
    }
    ctx->pc = 0x31B368u;
label_31b368:
    // 0x31b368: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31b368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b36c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x31B36Cu;
    {
        const bool branch_taken_0x31b36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B36Cu;
        // 0x31b370: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b36c) {
            ctx->pc = 0x31B3F8u;
            goto label_31b3f8;
        }
    }
    ctx->pc = 0x31B374u;
    // 0x31b374: 0x0  nop
    ctx->pc = 0x31b374u;
    // NOP
label_31b378:
    // 0x31b378: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x31b378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x31b37c: 0xc063d48  jal         func_18F520
    ctx->pc = 0x31B37Cu;
    SET_GPR_U32(ctx, 31, 0x31B384u);
    ctx->pc = 0x31B380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B37Cu;
    // 0x31b380: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x31B37Cu, 0x31B384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B384u;
label_31b384:
    // 0x31b384: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x31B384u;
    {
        const bool branch_taken_0x31b384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b384) {
            ctx->pc = 0x31B3F8u;
            goto label_31b3f8;
        }
    }
    ctx->pc = 0x31B38Cu;
    // 0x31b38c: 0x82020005  lb          $v0, 0x5($s0)
    ctx->pc = 0x31b38cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x31b390: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B390u;
    {
        const bool branch_taken_0x31b390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B390u;
        // 0x31b394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b390) {
            ctx->pc = 0x31B3A8u;
            goto label_31b3a8;
        }
    }
    ctx->pc = 0x31B398u;
    // 0x31b398: 0xc0c6d58  jal         func_31B560
    ctx->pc = 0x31B398u;
    SET_GPR_U32(ctx, 31, 0x31B3A0u);
    ctx->pc = 0x31B560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B560u, 0x31B398u, 0x31B3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B3A0u;
label_31b3a0:
    // 0x31b3a0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x31B3A0u;
    {
        const bool branch_taken_0x31b3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b3a0) {
            ctx->pc = 0x31B3F8u;
            goto label_31b3f8;
        }
    }
    ctx->pc = 0x31B3A8u;
label_31b3a8:
    // 0x31b3a8: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x31b3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x31b3ac: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x31b3acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x31b3b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31b3b4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31B3B4u;
    {
        const bool branch_taken_0x31b3b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3B4u;
        // 0x31b3b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b3b4) {
            ctx->pc = 0x31B3D0u;
            goto label_31b3d0;
        }
    }
    ctx->pc = 0x31B3BCu;
    // 0x31b3bc: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x31b3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x31b3c0: 0xc0c6df4  jal         func_31B7D0
    ctx->pc = 0x31B3C0u;
    SET_GPR_U32(ctx, 31, 0x31B3C8u);
    ctx->pc = 0x31B3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B3C0u;
    // 0x31b3c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B7D0u, 0x31B3C0u, 0x31B3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B3C8u;
label_31b3c8:
    // 0x31b3c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31B3C8u;
    {
        const bool branch_taken_0x31b3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b3c8) {
            ctx->pc = 0x31B3E0u;
            goto label_31b3e0;
        }
    }
    ctx->pc = 0x31B3D0u;
label_31b3d0:
    // 0x31b3d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b3d4: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x31b3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x31b3d8: 0xc0c6df4  jal         func_31B7D0
    ctx->pc = 0x31B3D8u;
    SET_GPR_U32(ctx, 31, 0x31B3E0u);
    ctx->pc = 0x31B3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B3D8u;
    // 0x31b3dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B7D0u, 0x31B3D8u, 0x31B3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B3E0u;
label_31b3e0:
    // 0x31b3e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31b3e4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x31b3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x31b3e8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x31b3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b3ec: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x31b3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x31b3f0: 0xc04c918  jal         func_132460
    ctx->pc = 0x31B3F0u;
    SET_GPR_U32(ctx, 31, 0x31B3F8u);
    ctx->pc = 0x31B3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B3F0u;
    // 0x31b3f4: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x31B3F0u, 0x31B3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B3F8u;
label_31b3f8:
    // 0x31b3f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31b3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31b3fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31b3fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b400: 0x3e00008  jr          $ra
    ctx->pc = 0x31B400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B400u;
        // 0x31b404: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B408u;
}
