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

// Function: sub_003E3EB0
// Address: 0x3e3eb0 - 0x3e42a8
void sub_003E3EB0_0x3e3eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3EB0_0x3e3eb0");
#endif

    switch (ctx->pc) {
        case 0x3e3ed8u: goto label_3e3ed8;
        case 0x3e3ff4u: goto label_3e3ff4;
        case 0x3e4100u: goto label_3e4100;
        default: break;
    }

    ctx->pc = 0x3e3eb0u;

    // 0x3e3eb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e3eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e3eb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e3eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3eb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e3eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e3ebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e3ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e3ec0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e3ec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3ec4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3e3ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3e3ec8: 0x2484ef20  addiu       $a0, $a0, -0x10E0
    ctx->pc = 0x3e3ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962976));
    // 0x3e3ecc: 0x3c028060  lui         $v0, 0x8060
    ctx->pc = 0x3e3eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32864 << 16));
    // 0x3e3ed0: 0x34436060  ori         $v1, $v0, 0x6060
    ctx->pc = 0x3e3ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24672);
    // 0x3e3ed4: 0x0  nop
    ctx->pc = 0x3e3ed4u;
    // NOP
label_3e3ed8:
    // 0x3e3ed8: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x3e3ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x3e3edc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3e3edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3e3ee0: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x3e3ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x3e3ee4: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x3e3ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x3e3ee8: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x3e3ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x3e3eec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3E3EECu;
    {
        const bool branch_taken_0x3e3eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e3eec) {
            ctx->pc = 0x3E3ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3ed8;
        }
    }
    ctx->pc = 0x3E3EF4u;
    // 0x3e3ef4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e3ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e3ef8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e3ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e3efc: 0xa022edf0  sb          $v0, -0x1210($at)
    ctx->pc = 0x3e3efcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x65EDF0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x65EDF0u, _value); } while (0);
    // 0x3e3f00: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e3f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3e3f04: 0x82070058  lb          $a3, 0x58($s0)
    ctx->pc = 0x3e3f04u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e3f08: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e3f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e3f0c: 0x2463e924  addiu       $v1, $v1, -0x16DC
    ctx->pc = 0x3e3f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961444));
    // 0x3e3f10: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e3f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e3f14: 0x2442e926  addiu       $v0, $v0, -0x16DA
    ctx->pc = 0x3e3f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961446));
    // 0x3e3f18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3f1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e3f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3f20: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x3e3f20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3e3f24: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x3e3f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3e3f28: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x3e3f28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x3e3f2c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3e3f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3e3f30: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3e3f30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e3f34: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x3e3f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x3e3f38: 0xa423edf4  sh          $v1, -0x120C($at)
    ctx->pc = 0x3e3f38u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294962676), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e3f3c: 0x82060058  lb          $a2, 0x58($s0)
    ctx->pc = 0x3e3f3cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e3f40: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e3f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e3f44: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3e3f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3e3f48: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3e3f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3e3f4c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3e3f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3e3f50: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3e3f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e3f54: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3e3f54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e3f58: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3e3f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3e3f5c: 0xa423edf6  sh          $v1, -0x120A($at)
    ctx->pc = 0x3e3f5cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294962678), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e3f60: 0x82060058  lb          $a2, 0x58($s0)
    ctx->pc = 0x3e3f60u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e3f64: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e3f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e3f68: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3e3f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3e3f6c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3e3f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3e3f70: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3e3f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3e3f74: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3e3f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e3f78: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3e3f78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e3f7c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e3f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e3f80: 0xa423e806  sh          $v1, -0x17FA($at)
    ctx->pc = 0x3e3f80u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961158), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e3f84: 0x82060058  lb          $a2, 0x58($s0)
    ctx->pc = 0x3e3f84u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e3f88: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e3f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e3f8c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3e3f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3e3f90: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3e3f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3e3f94: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3e3f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3e3f98: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3e3f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e3f9c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3e3f9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e3fa0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e3fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e3fa4: 0xa423e81e  sh          $v1, -0x17E2($at)
    ctx->pc = 0x3e3fa4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961182), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e3fa8: 0x82060058  lb          $a2, 0x58($s0)
    ctx->pc = 0x3e3fa8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e3fac: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e3facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e3fb0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3e3fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3e3fb4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3e3fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3e3fb8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3e3fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3e3fbc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3e3fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e3fc0: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3e3fc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e3fc4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e3fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e3fc8: 0xa423e836  sh          $v1, -0x17CA($at)
    ctx->pc = 0x3e3fc8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961206), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e3fcc: 0x82060058  lb          $a2, 0x58($s0)
    ctx->pc = 0x3e3fccu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e3fd0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e3fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e3fd4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3e3fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3e3fd8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3e3fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3e3fdc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3e3fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3e3fe0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e3fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e3fe4: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3e3fe4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e3fe8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e3fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3e3fec: 0xc0f9e88  jal         func_3E7A20
    ctx->pc = 0x3E3FECu;
    SET_GPR_U32(ctx, 31, 0x3E3FF4u);
    ctx->pc = 0x3E3FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3FECu;
    // 0x3e3ff0: 0xa422e84e  sh          $v0, -0x17B2($at) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961230), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7A20u, 0x3E3FECu, 0x3E3FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3FF4u;
label_3e3ff4:
    // 0x3e3ff4: 0x820a0083  lb          $t2, 0x83($s0)
    ctx->pc = 0x3e3ff4u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x3e3ff8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3e3ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3e3ffc: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e3ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3e4000: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3e4000u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3e4004: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3e4004u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x3e4008: 0x2484f1a4  addiu       $a0, $a0, -0xE5C
    ctx->pc = 0x3e4008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963620));
    // 0x3e400c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e400cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e4010: 0x2463f1a6  addiu       $v1, $v1, -0xE5A
    ctx->pc = 0x3e4010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963622));
    // 0x3e4014: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e4014u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4018: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e4018u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e401c: 0x24e7edf0  addiu       $a3, $a3, -0x1210
    ctx->pc = 0x3e401cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962672));
    // 0x3e4020: 0x24c6ef20  addiu       $a2, $a2, -0x10E0
    ctx->pc = 0x3e4020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962976));
    // 0x3e4024: 0xa2880  sll         $a1, $t2, 2
    ctx->pc = 0x3e4024u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x3e4028: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x3e4028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x3e402c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3e402cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x3e4030: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e4030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3e4034: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x3e4034u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e4038: 0x24840007  addiu       $a0, $a0, 0x7
    ctx->pc = 0x3e4038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x3e403c: 0xa424f7e4  sh          $a0, -0x81C($at)
    ctx->pc = 0x3e403cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965220), (uint16_t)GPR_U32(ctx, 4));
    // 0x3e4040: 0x82050083  lb          $a1, 0x83($s0)
    ctx->pc = 0x3e4040u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x3e4044: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e4044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e4048: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3e4048u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3e404c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e404cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3e4050: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3e4050u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3e4054: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3e4054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e4058: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x3e4058u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e405c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3e405cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3e4060: 0xa424f7e6  sh          $a0, -0x81A($at)
    ctx->pc = 0x3e4060u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965222), (uint16_t)GPR_U32(ctx, 4));
    // 0x3e4064: 0x82050083  lb          $a1, 0x83($s0)
    ctx->pc = 0x3e4064u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x3e4068: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e4068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e406c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3e406cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3e4070: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e4070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3e4074: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3e4074u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3e4078: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3e4078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e407c: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x3e407cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e4080: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e4080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e4084: 0xa424f906  sh          $a0, -0x6FA($at)
    ctx->pc = 0x3e4084u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965510), (uint16_t)GPR_U32(ctx, 4));
    // 0x3e4088: 0x82050083  lb          $a1, 0x83($s0)
    ctx->pc = 0x3e4088u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x3e408c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e408cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e4090: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3e4090u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3e4094: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e4094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3e4098: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3e4098u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3e409c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3e409cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e40a0: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x3e40a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e40a4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e40a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e40a8: 0xa424f91e  sh          $a0, -0x6E2($at)
    ctx->pc = 0x3e40a8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965534), (uint16_t)GPR_U32(ctx, 4));
    // 0x3e40ac: 0x82050083  lb          $a1, 0x83($s0)
    ctx->pc = 0x3e40acu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x3e40b0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e40b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e40b4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3e40b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3e40b8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e40b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3e40bc: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3e40bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3e40c0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3e40c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e40c4: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x3e40c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e40c8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e40c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e40cc: 0xa424f936  sh          $a0, -0x6CA($at)
    ctx->pc = 0x3e40ccu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965558), (uint16_t)GPR_U32(ctx, 4));
    // 0x3e40d0: 0x82050083  lb          $a1, 0x83($s0)
    ctx->pc = 0x3e40d0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x3e40d4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e40d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e40d8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3e40d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3e40dc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e40dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3e40e0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3e40e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3e40e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e40e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e40e8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3e40e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e40ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e40ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e40f0: 0xa423f94e  sh          $v1, -0x6B2($at)
    ctx->pc = 0x3e40f0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965582), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e40f4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e40f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3e40f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e40f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e40fc: 0x2463e920  addiu       $v1, $v1, -0x16E0
    ctx->pc = 0x3e40fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961440));
label_3e4100:
    // 0x3e4100: 0x860e0008  lh          $t6, 0x8($s0)
    ctx->pc = 0x3e4100u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3e4104: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x3e4104u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3e4108: 0x1256004  sllv        $t4, $a1, $t1
    ctx->pc = 0x3e4108u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 9) & 0x1F));
    // 0x3e410c: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x3e410cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x3e4110: 0x250a0001  addiu       $t2, $t0, 0x1
    ctx->pc = 0x3e4110u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3e4114: 0x45880  sll         $t3, $a0, 2
    ctx->pc = 0x3e4114u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3e4118: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3e4118u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3e411c: 0xa2080  sll         $a0, $t2, 2
    ctx->pc = 0x3e411cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x3e4120: 0x6b6821  addu        $t5, $v1, $t3
    ctx->pc = 0x3e4120u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x3e4124: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x3e4124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x3e4128: 0x250b0002  addiu       $t3, $t0, 0x2
    ctx->pc = 0x3e4128u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x3e412c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3e412cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3e4130: 0x1cc5024  and         $t2, $t6, $t4
    ctx->pc = 0x3e4130u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 14) & GPR_U64(ctx, 12));
    // 0x3e4134: 0x646021  addu        $t4, $v1, $a0
    ctx->pc = 0x3e4134u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e4138: 0xa202b  sltu        $a0, $zero, $t2
    ctx->pc = 0x3e4138u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3e413c: 0xb5080  sll         $t2, $t3, 2
    ctx->pc = 0x3e413cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x3e4140: 0xa1a40000  sb          $a0, 0x0($t5)
    ctx->pc = 0x3e4140u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e4144: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x3e4144u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x3e4148: 0xa1840000  sb          $a0, 0x0($t4)
    ctx->pc = 0x3e4148u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e414c: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x3e414cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x3e4150: 0x250b0003  addiu       $t3, $t0, 0x3
    ctx->pc = 0x3e4150u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x3e4154: 0x6a5021  addu        $t2, $v1, $t2
    ctx->pc = 0x3e4154u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x3e4158: 0xa1440000  sb          $a0, 0x0($t2)
    ctx->pc = 0x3e4158u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e415c: 0xb5080  sll         $t2, $t3, 2
    ctx->pc = 0x3e415cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x3e4160: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x3e4160u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x3e4164: 0x250b0004  addiu       $t3, $t0, 0x4
    ctx->pc = 0x3e4164u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3e4168: 0xa6080  sll         $t4, $t2, 2
    ctx->pc = 0x3e4168u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x3e416c: 0xb5080  sll         $t2, $t3, 2
    ctx->pc = 0x3e416cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x3e4170: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x3e4170u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x3e4174: 0x6c5821  addu        $t3, $v1, $t4
    ctx->pc = 0x3e4174u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x3e4178: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x3e4178u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x3e417c: 0xa1640000  sb          $a0, 0x0($t3)
    ctx->pc = 0x3e417cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e4180: 0x6a5021  addu        $t2, $v1, $t2
    ctx->pc = 0x3e4180u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x3e4184: 0x250b0005  addiu       $t3, $t0, 0x5
    ctx->pc = 0x3e4184u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x3e4188: 0xa1440000  sb          $a0, 0x0($t2)
    ctx->pc = 0x3e4188u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e418c: 0xb5080  sll         $t2, $t3, 2
    ctx->pc = 0x3e418cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x3e4190: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x3e4190u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x3e4194: 0x250b0006  addiu       $t3, $t0, 0x6
    ctx->pc = 0x3e4194u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x3e4198: 0xa6080  sll         $t4, $t2, 2
    ctx->pc = 0x3e4198u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x3e419c: 0xb5080  sll         $t2, $t3, 2
    ctx->pc = 0x3e419cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x3e41a0: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x3e41a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x3e41a4: 0x6c5821  addu        $t3, $v1, $t4
    ctx->pc = 0x3e41a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x3e41a8: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x3e41a8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x3e41ac: 0xa1640000  sb          $a0, 0x0($t3)
    ctx->pc = 0x3e41acu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e41b0: 0x6a5021  addu        $t2, $v1, $t2
    ctx->pc = 0x3e41b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x3e41b4: 0x250b0007  addiu       $t3, $t0, 0x7
    ctx->pc = 0x3e41b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
    // 0x3e41b8: 0xa1440000  sb          $a0, 0x0($t2)
    ctx->pc = 0x3e41b8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e41bc: 0xb5080  sll         $t2, $t3, 2
    ctx->pc = 0x3e41bcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x3e41c0: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x3e41c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3e41c4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x3e41c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x3e41c8: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x3e41c8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x3e41cc: 0x6a5821  addu        $t3, $v1, $t2
    ctx->pc = 0x3e41ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x3e41d0: 0xa1640000  sb          $a0, 0x0($t3)
    ctx->pc = 0x3e41d0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e41d4: 0x292a0005  slti        $t2, $t1, 0x5
    ctx->pc = 0x3e41d4u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3e41d8: 0xa0e40014  sb          $a0, 0x14($a3)
    ctx->pc = 0x3e41d8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 20), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e41dc: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x3e41dcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e41e0: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x3e41e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x3e41e4: 0xa0c40018  sb          $a0, 0x18($a2)
    ctx->pc = 0x3e41e4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 24), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e41e8: 0x1540ffc5  bnez        $t2, . + 4 + (-0x3B << 2)
    ctx->pc = 0x3E41E8u;
    {
        const bool branch_taken_0x3e41e8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E41ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E41E8u;
        // 0x3e41ec: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e41e8) {
            ctx->pc = 0x3E4100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e4100;
        }
    }
    ctx->pc = 0x3E41F0u;
    // 0x3e41f0: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x3e41f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3e41f4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e41f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e41f8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x3e41f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x3e41fc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x3e41fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3e4200: 0xa023ec40  sb          $v1, -0x13C0($at)
    ctx->pc = 0x3e4200u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294962240), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e4204: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e4204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e4208: 0xa023ec54  sb          $v1, -0x13AC($at)
    ctx->pc = 0x3e4208u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x65EC54u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x65EC54u, _value); } while (0);
    // 0x3e420c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e420cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e4210: 0xa023ec68  sb          $v1, -0x1398($at)
    ctx->pc = 0x3e4210u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x65EC68u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x65EC68u, _value); } while (0);
    // 0x3e4214: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e4214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e4218: 0xa023ec7c  sb          $v1, -0x1384($at)
    ctx->pc = 0x3e4218u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x65EC7Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x65EC7Cu, _value); } while (0);
    // 0x3e421c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e421cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e4220: 0xa023ec90  sb          $v1, -0x1370($at)
    ctx->pc = 0x3e4220u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x65EC90u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x65EC90u, _value); } while (0);
    // 0x3e4224: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e4224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e4228: 0xa023eca4  sb          $v1, -0x135C($at)
    ctx->pc = 0x3e4228u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x65ECA4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x65ECA4u, _value); } while (0);
    // 0x3e422c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e422cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e4230: 0xa023ecb8  sb          $v1, -0x1348($at)
    ctx->pc = 0x3e4230u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x65ECB8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x65ECB8u, _value); } while (0);
    // 0x3e4234: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e4234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e4238: 0xa023eccc  sb          $v1, -0x1334($at)
    ctx->pc = 0x3e4238u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x65ECCCu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x65ECCCu, _value); } while (0);
    // 0x3e423c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e423cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e4240: 0xa023ee68  sb          $v1, -0x1198($at)
    ctx->pc = 0x3e4240u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x65EE68u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x65EE68u, _value); } while (0);
    // 0x3e4244: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x3e4244u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3e4248: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e4248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e424c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x3e424cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x3e4250: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x3e4250u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3e4254: 0xa023ece0  sb          $v1, -0x1320($at)
    ctx->pc = 0x3e4254u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294962400), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e4258: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e4258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e425c: 0xa023ecf4  sb          $v1, -0x130C($at)
    ctx->pc = 0x3e425cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x65ECF4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x65ECF4u, _value); } while (0);
    // 0x3e4260: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e4260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e4264: 0xa023ed08  sb          $v1, -0x12F8($at)
    ctx->pc = 0x3e4264u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x65ED08u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x65ED08u, _value); } while (0);
    // 0x3e4268: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e4268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e426c: 0xa023ed1c  sb          $v1, -0x12E4($at)
    ctx->pc = 0x3e426cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x65ED1Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x65ED1Cu, _value); } while (0);
    // 0x3e4270: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e4270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e4274: 0xa023ed30  sb          $v1, -0x12D0($at)
    ctx->pc = 0x3e4274u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x65ED30u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x65ED30u, _value); } while (0);
    // 0x3e4278: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e4278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e427c: 0xa023ed44  sb          $v1, -0x12BC($at)
    ctx->pc = 0x3e427cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x65ED44u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x65ED44u, _value); } while (0);
    // 0x3e4280: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e4280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e4284: 0xa023ed58  sb          $v1, -0x12A8($at)
    ctx->pc = 0x3e4284u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x65ED58u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x65ED58u, _value); } while (0);
    // 0x3e4288: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e4288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e428c: 0xa023ed6c  sb          $v1, -0x1294($at)
    ctx->pc = 0x3e428cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x65ED6Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x65ED6Cu, _value); } while (0);
    // 0x3e4290: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e4290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e4294: 0xa023ee7c  sb          $v1, -0x1184($at)
    ctx->pc = 0x3e4294u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x65EE7Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x65EE7Cu, _value); } while (0);
    // 0x3e4298: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e4298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e429c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e429cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e42a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E42A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E42A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E42A0u;
        // 0x3e42a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E42A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E42A8u;
}
