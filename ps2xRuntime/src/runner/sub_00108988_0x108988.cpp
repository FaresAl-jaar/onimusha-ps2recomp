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

// Function: sub_00108988
// Address: 0x108988 - 0x108b04
void sub_00108988_0x108988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108988_0x108988");
#endif

    switch (ctx->pc) {
        case 0x1089f8u: goto label_1089f8;
        case 0x108a84u: goto label_108a84;
        default: break;
    }

    ctx->pc = 0x108988u;

    // 0x108988: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x108988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10898c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10898cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108990: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x108990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x108994: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x108994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108998: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x108998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10899c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10899cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1089a0: 0x8e02087c  lw          $v0, 0x87C($s0)
    ctx->pc = 0x1089a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2172)));
    // 0x1089a4: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x1089A4u;
    {
        const bool branch_taken_0x1089a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1089A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1089A4u;
        // 0x1089a8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1089a4) {
            ctx->pc = 0x108AF0u;
            goto label_108af0;
        }
    }
    ctx->pc = 0x1089ACu;
    // 0x1089ac: 0x8e180820  lw          $t8, 0x820($s0)
    ctx->pc = 0x1089acu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x1089b0: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x1089b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1089b4: 0x3c120069  lui         $s2, 0x69
    ctx->pc = 0x1089b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)105 << 16));
    // 0x1089b8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1089b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1089bc: 0x3041818  mult        $v1, $t8, $a0
    ctx->pc = 0x1089bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1089c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1089c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1089c4: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x1089c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x1089c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1089c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089cc: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1089ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1089d0: 0x2643c280  addiu       $v1, $s2, -0x3D80
    ctx->pc = 0x1089d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951552));
    // 0x1089d4: 0x8c8c06cc  lw          $t4, 0x6CC($a0)
    ctx->pc = 0x1089d4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x1089d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1089d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1089dc: 0x19800026  blez        $t4, . + 4 + (0x26 << 2)
    ctx->pc = 0x1089DCu;
    {
        const bool branch_taken_0x1089dc = (GPR_S64(ctx, 12) <= 0);
        ctx->pc = 0x1089E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1089DCu;
        // 0x1089e0: 0x655825  or          $t3, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1089dc) {
            ctx->pc = 0x108A78u;
            goto label_108a78;
        }
    }
    ctx->pc = 0x1089E4u;
    // 0x1089e4: 0x260f05a8  addiu       $t7, $s0, 0x5A8
    ctx->pc = 0x1089e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 1448));
    // 0x1089e8: 0x260e05b8  addiu       $t6, $s0, 0x5B8
    ctx->pc = 0x1089e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 1464));
    // 0x1089ec: 0x258dffff  addiu       $t5, $t4, -0x1
    ctx->pc = 0x1089ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x1089f0: 0x261105a0  addiu       $s1, $s0, 0x5A0
    ctx->pc = 0x1089f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
    // 0x1089f4: 0x0  nop
    ctx->pc = 0x1089f4u;
    // NOP
label_1089f8:
    // 0x1089f8: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x1089f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1089fc: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x1089fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x108a00: 0x3042018  mult        $a0, $t8, $a0
    ctx->pc = 0x108a00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x108a04: 0x14d1826  xor         $v1, $t2, $t5
    ctx->pc = 0x108a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 13));
    // 0x108a08: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x108a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x108a0c: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x108a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x108a10: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x108a10u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x108a14: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x108a14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x108a18: 0x3c093000  lui         $t1, 0x3000
    ctx->pc = 0x108a18u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)12288 << 16));
    // 0x108a1c: 0x52f38  dsll        $a1, $a1, 28
    ctx->pc = 0x108a1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x108a20: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x108a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x108a24: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x108a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x108a28: 0x1c22021  addu        $a0, $t6, $v0
    ctx->pc = 0x108a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x108a2c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x108a2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x108a30: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x108a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x108a34: 0x14c402a  slt         $t0, $t2, $t4
    ctx->pc = 0x108a34u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x108a38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x108a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x108a3c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x108a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108a40: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x108a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x108a44: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x108a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x108a48: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x108a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x108a4c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x108a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x108a50: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x108a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x108a54: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x108a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x108a58: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x108a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x108a5c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x108a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x108a60: 0xfd630000  sd          $v1, 0x0($t3)
    ctx->pc = 0x108a60u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 3));
    // 0x108a64: 0xfd620010  sd          $v0, 0x10($t3)
    ctx->pc = 0x108a64u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 16), GPR_U64(ctx, 2));
    // 0x108a68: 0x1500ffe3  bnez        $t0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x108A68u;
    {
        const bool branch_taken_0x108a68 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x108A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A68u;
        // 0x108a6c: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a68) {
            ctx->pc = 0x1089F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1089f8;
        }
    }
    ctx->pc = 0x108A70u;
    // 0x108a70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x108A70u;
    {
        const bool branch_taken_0x108a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x108a70) {
            ctx->pc = 0x108A7Cu;
            goto label_108a7c;
        }
    }
    ctx->pc = 0x108A78u;
label_108a78:
    // 0x108a78: 0x261105a0  addiu       $s1, $s0, 0x5A0
    ctx->pc = 0x108a78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
label_108a7c:
    // 0x108a7c: 0xc046028  jal         func_1180A0
    ctx->pc = 0x108A7Cu;
    SET_GPR_U32(ctx, 31, 0x108A84u);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x108A7Cu, 0x108A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108A84u;
label_108a84:
    // 0x108a84: 0xf  sync
    ctx->pc = 0x108a84u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x108a88: 0x8e060820  lw          $a2, 0x820($s0)
    ctx->pc = 0x108a88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x108a8c: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x108a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x108a90: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x108a90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x108a94: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x108a94u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x108a98: 0xc32018  mult        $a0, $a2, $v1
    ctx->pc = 0x108a98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x108a9c: 0x34e7d480  ori         $a3, $a3, 0xD480
    ctx->pc = 0x108a9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)54400);
    // 0x108aa0: 0x264ac280  addiu       $t2, $s2, -0x3D80
    ctx->pc = 0x108aa0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951552));
    // 0x108aa4: 0x3508d430  ori         $t0, $t0, 0xD430
    ctx->pc = 0x108aa4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)54320);
    // 0x108aa8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x108aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x108aac: 0x24090105  addiu       $t1, $zero, 0x105
    ctx->pc = 0x108aacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x108ab0: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x108ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x108ab4: 0x913021  addu        $a2, $a0, $s1
    ctx->pc = 0x108ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x108ab8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x108ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x108abc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x108abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x108ac0: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x108ac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x108ac4: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x108ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x108ac8: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x108ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x108acc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x108accu;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 0)); // MMIO: 0x1000d420
    // 0x108ad0: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x108ad0u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 9)); // MMIO: 0x1000d400
    // 0x108ad4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x108AD4u;
    {
        const bool branch_taken_0x108ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108AD4u;
        // 0x108ad8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ad4) {
            ctx->pc = 0x108AF0u;
            goto label_108af0;
        }
    }
    ctx->pc = 0x108ADCu;
    // 0x108adc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x108adcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108ae0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x108ae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108ae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108ae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108ae8: 0x804603c  j           func_1180F0
    ctx->pc = 0x108AE8u;
    ctx->pc = 0x108AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108AE8u;
    // 0x108aec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180F0u;
    sub_001180F0_0x1180f0(rdram, ctx, runtime); return;
    ctx->pc = 0x108AF0u;
label_108af0:
    // 0x108af0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x108af0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108af4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x108af4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108af8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108af8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108afc: 0x3e00008  jr          $ra
    ctx->pc = 0x108AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108AFCu;
        // 0x108b00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108B04u;
}
