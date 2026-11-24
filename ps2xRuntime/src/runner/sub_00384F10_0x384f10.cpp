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

// Function: sub_00384F10
// Address: 0x384f10 - 0x38500c
void sub_00384F10_0x384f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384F10_0x384f10");
#endif

    switch (ctx->pc) {
        case 0x384fe8u: goto label_384fe8;
        default: break;
    }

    ctx->pc = 0x384f10u;

    // 0x384f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x384f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x384f14: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x384f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x384f18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x384f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x384f1c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x384f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x384f20: 0x9024fc8c  lbu         $a0, -0x374($at)
    ctx->pc = 0x384f20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x384f24: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x384F24u;
    {
        const bool branch_taken_0x384f24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x384F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F24u;
        // 0x384f28: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384f24) {
            ctx->pc = 0x384F48u;
            goto label_384f48;
        }
    }
    ctx->pc = 0x384F2Cu;
    // 0x384f2c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x384F2Cu;
    {
        const bool branch_taken_0x384f2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x384f2c) {
            ctx->pc = 0x384F40u;
            goto label_384f40;
        }
    }
    ctx->pc = 0x384F34u;
    // 0x384f34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x384F34u;
    {
        const bool branch_taken_0x384f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x384f34) {
            ctx->pc = 0x384F50u;
            goto label_384f50;
        }
    }
    ctx->pc = 0x384F3Cu;
    // 0x384f3c: 0x0  nop
    ctx->pc = 0x384f3cu;
    // NOP
label_384f40:
    // 0x384f40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x384F40u;
    {
        const bool branch_taken_0x384f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F40u;
        // 0x384f44: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384f40) {
            ctx->pc = 0x384F58u;
            goto label_384f58;
        }
    }
    ctx->pc = 0x384F48u;
label_384f48:
    // 0x384f48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x384F48u;
    {
        const bool branch_taken_0x384f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F48u;
        // 0x384f4c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384f48) {
            ctx->pc = 0x384F58u;
            goto label_384f58;
        }
    }
    ctx->pc = 0x384F50u;
label_384f50:
    // 0x384f50: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x384f50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384f54: 0x0  nop
    ctx->pc = 0x384f54u;
    // NOP
label_384f58:
    // 0x384f58: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x384f58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x384f5c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x384f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x384f60: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x384f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x384f64: 0x2484c690  addiu       $a0, $a0, -0x3970
    ctx->pc = 0x384f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952592));
    // 0x384f68: 0x2463c694  addiu       $v1, $v1, -0x396C
    ctx->pc = 0x384f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952596));
    // 0x384f6c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x384f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x384f70: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x384f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x384f74: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x384f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x384f78: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x384f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x384f7c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x384f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x384f80: 0x8c235f08  lw          $v1, 0x5F08($at)
    ctx->pc = 0x384f80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x695F08u));
    // 0x384f84: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x384f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x384f88: 0x14a3001d  bne         $a1, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x384F88u;
    {
        const bool branch_taken_0x384f88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x384F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F88u;
        // 0x384f8c: 0x3c010069  lui         $at, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384f88) {
            ctx->pc = 0x385000u;
            goto label_385000;
        }
    }
    ctx->pc = 0x384F90u;
    // 0x384f90: 0x8c235f64  lw          $v1, 0x5F64($at)
    ctx->pc = 0x384f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24420)));
    // 0x384f94: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x384f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x384f98: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x384F98u;
    {
        const bool branch_taken_0x384f98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x384f98) {
            ctx->pc = 0x385000u;
            goto label_385000;
        }
    }
    ctx->pc = 0x384FA0u;
    // 0x384fa0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x384fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x384fa4: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x384fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x384fa8: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x384fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x384fac: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x384FACu;
    {
        const bool branch_taken_0x384fac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x384fac) {
            ctx->pc = 0x385000u;
            goto label_385000;
        }
    }
    ctx->pc = 0x384FB4u;
    // 0x384fb4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x384fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x384fb8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x384fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x384fbc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x384fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x384fc0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x384fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x384fc4: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x384fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x384fc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x384fc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384fcc: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x384fccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x384fd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x384fd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384fd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x384fd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384fd8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x384fd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384fdc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x384fdcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384fe0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x384FE0u;
    SET_GPR_U32(ctx, 31, 0x384FE8u);
    ctx->pc = 0x384FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384FE0u;
    // 0x384fe4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x384FE0u, 0x384FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384FE8u;
label_384fe8:
    // 0x384fe8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x384fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x384fec: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x384fecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x384ff0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x384ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x384ff4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x384ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x384ff8: 0xac23ceb8  sw          $v1, -0x3148($at)
    ctx->pc = 0x384ff8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x384ffc: 0x0  nop
    ctx->pc = 0x384ffcu;
    // NOP
label_385000:
    // 0x385000: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x385000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x385004: 0x3e00008  jr          $ra
    ctx->pc = 0x385004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385004u;
        // 0x385008: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38500Cu;
}
